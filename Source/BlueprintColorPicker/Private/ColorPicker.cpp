#include "ColorPicker.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Colors/SColorPicker.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Input/SButton.h"

UColorPicker::UColorPicker(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    BackgroundColor = FLinearColor(0.0f, 0.0f, 0.0f, 0.0f);
    InitialColor = FLinearColor(1.0f, 1.0f, 1.0f, 1.0f);
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
        .OnColorCommitted_Lambda([this](const FLinearColor& NewColor)
            {
                HandleColorChanged(NewColor);
            });

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
                HandleColorCancelClicked(InitialColor);
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
}

FLinearColor UColorPicker::GetPickerColor() const
{
    return InitialColor;
}

void UColorPicker::HandleColorOkClicked()
{
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

void UColorPicker::HandleColorCancelClicked(const FLinearColor& Color)
{
    OnColorChanged.Broadcast(Color);
    OnCancelButtonClicked.Broadcast();

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
    OnColorChanged.Broadcast(NewColor);
}