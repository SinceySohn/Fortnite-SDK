// WidgetBlueprintGeneratedClass ActivityPrivacyButton.ActivityPrivacyButton_C
// Size: 0x14e2 (Inherited: 0x1400)
struct UActivityPrivacyButton_C : UFortActivityPrivacyButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1400(0x08)
	struct UWidgetAnimation* Pressed; // 0x1408(0x08)
	struct UWidgetAnimation* Hover; // 0x1410(0x08)
	struct UHorizontalBox* ContentHB; // 0x1418(0x08)
	struct UImage* Image_BG; // 0x1420(0x08)
	struct USafeZone* SafeZone; // 0x1428(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1430(0x08)
	struct UTextToggle_C* TextToggle; // 0x1438(0x08)
	struct FText Button Description; // 0x1440(0x18)
	double TextShearX; // 0x1458(0x08)
	double TextShearY; // 0x1460(0x08)
	struct Fmargin TextPadding; // 0x1468(0x10)
	bool IsDisabled; // 0x1478(0x01)
	char pad_1479[0x7]; // 0x1479(0x07)
	struct UMaterialInterface* ButtonMaterial; // 0x1480(0x08)
	double ButtonSharpnessX; // 0x1488(0x08)
	double ButtonSharpnessY; // 0x1490(0x08)
	double UseBoxScalingX; // 0x1498(0x08)
	double UseBoxScalingY; // 0x14a0(0x08)
	double ButtonBoxScaleSizeX; // 0x14a8(0x08)
	double ButtonBoxScaleSizeY; // 0x14b0(0x08)
	struct FName DisabledParamName; // 0x14b8(0x04)
	struct FName SharpnessVParamName; // 0x14bc(0x04)
	struct FName SharpnessUParamName; // 0x14c0(0x04)
	struct FName UseBoxScaleUParamName; // 0x14c4(0x04)
	struct FName UseBoxScaleVParamName; // 0x14c8(0x04)
	bool HideButtonBackingOnGamepad; // 0x14cc(0x01)
	bool ShouldPlayReversed; // 0x14cd(0x01)
	char pad_14CE[0x2]; // 0x14ce(0x02)
	struct FMulticastInlineDelegate OnPrivacyAvailableChanged; // 0x14d0(0x10)
	bool PadLeft; // 0x14e0(0x01)
	bool PadRight; // 0x14e1(0x01)

	void Finished_36C2CEC0400119679F9DB4ADF6A040E2(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.Finished_36C2CEC0400119679F9DB4ADF6A040E2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEnabled(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDesiredPrivacySelectionChanged(bool bIsSelected); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.OnDesiredPrivacySelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPrivacyAvailabilityChanged(bool bIsAvailable); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.OnPrivacyAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ActivityPrivacyButton(int32_t EntryPoint); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.ExecuteUbergraph_ActivityPrivacyButton // (Final|UbergraphFunction) // @ game+0xdef49c
	void OnPrivacyAvailableChanged__DelegateSignature(bool IsAvailable); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.OnPrivacyAvailableChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

