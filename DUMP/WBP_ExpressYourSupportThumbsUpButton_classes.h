// WidgetBlueprintGeneratedClass WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C
// Size: 0x14e0 (Inherited: 0x1470)
struct UWBP_ExpressYourSupportThumbsUpButton_C : UFortExpressYourSupportThumbsUpButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1470(0x08)
	struct UWidgetAnimation* UnhoveredToggleOff; // 0x1478(0x08)
	struct UWidgetAnimation* UnhoveredToggleOn; // 0x1480(0x08)
	struct UWidgetAnimation* UnhoverToggledOff; // 0x1488(0x08)
	struct UWidgetAnimation* HoverToggledOff; // 0x1490(0x08)
	struct UWidgetAnimation* UnhoverToggledOn; // 0x1498(0x08)
	struct UWidgetAnimation* HoverToggledOn; // 0x14a0(0x08)
	struct UWidgetAnimation* HoveredToggleOff; // 0x14a8(0x08)
	struct UWidgetAnimation* HoveredToggleOn; // 0x14b0(0x08)
	struct UBorder* Border_Background; // 0x14b8(0x08)
	struct UImage* Image_FavoriteIcon; // 0x14c0(0x08)
	struct UImage* Image_Pulse; // 0x14c8(0x08)
	struct USizeBox* ; // 0x14d0(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x14d8(0x08)

	void StopTogglingAnimations(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.StopTogglingAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopHoveringAnimations(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.StopHoveringAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetButtonHeight(bool IsTouch); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.SetButtonHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton(int32_t EntryPoint); // Function WBP_ExpressYourSupportThumbsUpButton.WBP_ExpressYourSupportThumbsUpButton_C.ExecuteUbergraph_WBP_ExpressYourSupportThumbsUpButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

