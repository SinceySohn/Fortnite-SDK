// WidgetBlueprintGeneratedClass PiPBladeMenuButton.PiPBladeMenuButton_C
// Size: 0x1488 (Inherited: 0x1430)
struct UPiPBladeMenuButton_C : UPictureInPictureBladeMenuButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* FlipSwitch; // 0x1438(0x08)
	struct UWidgetAnimation* StatusGrow; // 0x1440(0x08)
	struct UWidgetAnimation* Hover; // 0x1448(0x08)
	struct UCommonTextBlock* ButtonText; // 0x1450(0x08)
	struct UImage* IconOff; // 0x1458(0x08)
	struct UVerticalBox* IconTextContent; // 0x1460(0x08)
	struct UCommonTextBlock* IconTextOff; // 0x1468(0x08)
	struct UCommonTextBlock* IconTextOn; // 0x1470(0x08)
	struct UCommonTextBlock* Text_Feedback; // 0x1478(0x08)
	struct UWidgetSwitcher* TextSwitcher; // 0x1480(0x08)

	void UpdateStatus(bool IsEnabled, bool IsLoggedIn, bool IsParentalControlsEnabled); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.UpdateStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdatePiPStatusBP(bool LoggedIn, bool Enabled, bool ParentalControlsEnabled); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.UpdatePiPStatusBP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PiPBladeMenuButton(int32_t EntryPoint); // Function PiPBladeMenuButton.PiPBladeMenuButton_C.ExecuteUbergraph_PiPBladeMenuButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

