#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ColorPicker.generated.h"

class SColorPicker;

// Delegate declarations are placed outside of the UCLASS body.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnColorChanged, const FLinearColor&, NewColor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOkButtonClicked);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelButtonClicked);

UCLASS(BlueprintType)
class BLUEPRINTCOLORPICKER_API UColorPicker : public UWidget
{
	GENERATED_BODY()

public:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	UColorPicker(const FObjectInitializer& ObjectInitializer);

	/** Sets the current color of the color picker widget directly and updates the UI. */
	UFUNCTION(BlueprintCallable, Category = "Blueprint Color Picker|Functions")
	void SetColor(FLinearColor NewColor);

	UPROPERTY(BlueprintAssignable, Category = "Blueprint Color Picker|Events")
	FOnColorChanged OnColorChanged;

	UPROPERTY(BlueprintAssignable, Category = "Blueprint Color Picker|Events")
	FOnOkButtonClicked OnOkButtonClicked;

	UPROPERTY(BlueprintAssignable, Category = "Blueprint Color Picker|Events")
	FOnCancelButtonClicked OnCancelButtonClicked;

	/** The initial color of the picker. This is used as the reset color on cancel. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "Blueprint Color Picker|Appearance")
	FLinearColor InitialColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "Blueprint Color Picker|Appearance")
	FLinearColor BackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "Blueprint Color Picker|Behavior")
	bool bShowInline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "Blueprint Color Picker|Behavior")
	bool bUseAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = "Blueprint Color Picker|Behavior")
	bool bForContextMenu;

private:
	TSharedPtr<SColorPicker> SlateColorPickerWidget;

	/** The color that the picker is currently displaying. Changes as the user interacts. */
	FLinearColor CurrentColor;

	/** Called whenever the user changes the color in the SColorPicker widget. */
	void HandleColorChanged(const FLinearColor& NewColor);

	/** Called when the OK button is clicked. */
	void HandleColorOkClicked();

	/** Called when the Cancel button is clicked. Resets the color to InitialColor. */
	void HandleColorCancelClicked();

	/** Helper function for Slate attribute binding to get the current color. */
	FLinearColor GetPickerColor() const;
};