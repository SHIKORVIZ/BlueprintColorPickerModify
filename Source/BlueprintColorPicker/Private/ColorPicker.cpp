#include "ColorPicker.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Colors/SColorPicker.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Input/SButton.h"
#include "Styling/CoreStyle.h"

UColorPicker::UColorPicker(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    BackgroundColor = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
    InitialColor = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
    CurrentColor = InitialColor;
    bShowInline = false;
    bUseAlpha = true;
    bForContextMenu = false;
}

TSharedRef<SWidget> UColorPicker::RebuildWidget()
{
    SlateColorPickerWidget = SNew(SColorPicker)
        .TargetColorAttribute(TAttribute<FLinearColor>::Create(TAttribute<FLinearColor>::FGetter::CreateUObject(this, &UColorPicker::GetPickerColor)))
        .DisplayInlineVersion(bShowInline)
        .UseAlpha(bUseAlpha)
        // OnColorCommitted ব্যবহার করা হয় যখন ব্যবহারকারী রঙ চূড়ান্ত করে (যেমন মাউস ছেড়ে দেয়)
        .OnColorCommitted_Lambda([this](const FLinearColor& NewColor)
            {
                // যখনই ব্যবহারকারী একটি রঙ চূড়ান্ত করবে, আমরা আমাদের CurrentColor আপডেট করব।
                HandleColorChanged(NewColor);
            });
    // ত্রুটি সৃষ্টিকারী .OnColorRGBChanged_Lambda লাইনটি এখান থেকে সরিয়ে দেওয়া হয়েছে।

    TSharedPtr<SButton> OkButton;
    TSharedPtr<SButton> CancelButton;

    OkButton = SNew(SButton)
        .Text(FText::FromString("OK"))
        .OnClicked_Lambda([this]()
            {
                HandleColorOkClicked();
                return FReply::Handled();
            });

    CancelButton = SNew(SButton)
        .Text(FText::FromString("Cancel"))
        .OnClicked_Lambda([this]()
            {
                HandleColorCancelClicked();
                return FReply::Handled();
            });

    return SNew(SBorder)
        .BorderBackgroundColor(BackgroundColor)
        .BorderImage(FCoreStyle::Get().GetBrush("WhiteBrush"))
        .Padding(10)
        [
            SNew(SVerticalBox)
                + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SlateColorPickerWidget.ToSharedRef()
                ]
                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(2)
                [
                    SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .FillWidth(1.0f)
                        .HAlign(HAlign_Right)
                        .Padding(2)
                        [
                            OkButton.ToSharedRef()
                        ]
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .HAlign(HAlign_Right)
                        .Padding(2)
                        [
                            CancelButton.ToSharedRef()
                        ]
                ]
        ];
}

void UColorPicker::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);
    SlateColorPickerWidget.Reset();
}

void UColorPicker::SetColor(FLinearColor NewColor)
{
    InitialColor = NewColor;
    CurrentColor = NewColor;
}

FLinearColor UColorPicker::GetPickerColor() const
{
    return CurrentColor;
}

void UColorPicker::HandleColorOkClicked()
{
    InitialColor = CurrentColor;
    OnOkButtonClicked.Broadcast();

    if (bForContextMenu)
    {
        TSharedPtr<SWindow> ActiveWindow = FSlateApplication::Get().GetActiveTopLevelWindow();
        if (ActiveWindow.IsValid())
        {
            ActiveWindow->RequestDestroyWindow();
        }
    }
}

void UColorPicker::HandleColorCancelClicked()
{
    // ১. বর্তমান রঙকে প্রাথমিক রঙ দিয়ে রিসেট করুন
    CurrentColor = InitialColor;

    // ২. বাইরের অবজেক্টগুলোকে জানান যে রঙ রিসেট হয়েছে
    OnColorChanged.Broadcast(InitialColor);

    // ৩. Cancel ইভেন্ট ব্রডকাস্ট করুন
    OnCancelButtonClicked.Broadcast();

    // যেহেতু SColorPicker এর TargetColorAttribute এখন GetPickerColor() থেকে নতুন মান পাবে,
    // UI পরের ট্রিকে নিজে থেকেই আপডেট হয়ে যাবে।

    if (bForContextMenu)
    {
        TSharedPtr<SWindow> ActiveWindow = FSlateApplication::Get().GetActiveTopLevelWindow();
        if (ActiveWindow.IsValid())
        {
            ActiveWindow->RequestDestroyWindow();
        }
    }
}

void UColorPicker::HandleColorChanged(const FLinearColor& NewColor)
{
    CurrentColor = NewColor;
    OnColorChanged.Broadcast(NewColor);
}
