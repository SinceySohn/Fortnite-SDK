// WidgetBlueprintGeneratedClass ActivitySquadFillButton.ActivitySquadFillButton_C
// Size: 0x14d1 (Inherited: 0x1400)
struct UActivitySquadFillButton_C : UFortActivitySquadFillButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1400(0x08)
	struct UWidgetAnimation* Pressed; // 0x1408(0x08)
	struct UWidgetAnimation* Hover; // 0x1410(0x08)
	struct UImage* Image_BG; // 0x1418(0x08)
	struct USafeZone* SafeZone; // 0x1420(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Fill; // 0x1428(0x08)
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
	bool PadLeft; // 0x14ce(0x01)
	bool PadRight; // 0x14cf(0x01)
	bool Is Fill Only Enabled; // 0x14d0(0x01)

	void Finished_147E379D49BEF6766075069D8A2DDE6F(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.Finished_147E379D49BEF6766075069D8A2DDE6F // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDisabled(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnEnabled(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDesiredSquadFillSelectionChanged(bool bIsSelected); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.OnDesiredSquadFillSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSquadFillAvailabilityChanged(bool bIsAvailable); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.OnSquadFillAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ToggleFillOnlyVisibility(bool bIsFillOnlyEnabled); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.ToggleFillOnlyVisibility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ActivitySquadFillButton(int32_t EntryPoint); // Function ActivitySquadFillButton.ActivitySquadFillButton_C.ExecuteUbergraph_ActivitySquadFillButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

