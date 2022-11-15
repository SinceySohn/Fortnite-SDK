// WidgetBlueprintGeneratedClass MainMenu_HamburgerButton.MainMenu_HamburgerButton_C
// Size: 0x1470 (Inherited: 0x1430)
struct UMainMenu_HamburgerButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x1438(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x1440(0x08)
	struct UWidgetAnimation* Hover; // 0x1448(0x08)
	struct UImage* ButtonBacking; // 0x1450(0x08)
	struct UFortMobileImage* Icon; // 0x1458(0x08)
	struct UBorder* IconColor; // 0x1460(0x08)
	struct USizeBox* VariableSize; // 0x1468(0x08)

	void BP_OnHovered(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MainMenu_HamburgerButton(int32_t EntryPoint); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.ExecuteUbergraph_MainMenu_HamburgerButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

