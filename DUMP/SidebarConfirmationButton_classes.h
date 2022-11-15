// WidgetBlueprintGeneratedClass SidebarConfirmationButton.SidebarConfirmationButton_C
// Size: 0x1470 (Inherited: 0x1430)
struct USidebarConfirmationButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* OnHover; // 0x1438(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1440(0x08)
	struct UCommonTextBlock* Text_InteractionName; // 0x1448(0x08)
	bool bIsAccept; // 0x1450(0x01)
	char pad_1451[0x7]; // 0x1451(0x07)
	struct FText DisplayText; // 0x1458(0x18)

	void BP_OnHovered(); // Function SidebarConfirmationButton.SidebarConfirmationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarConfirmationButton.SidebarConfirmationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SidebarConfirmationButton.SidebarConfirmationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarConfirmationButton(int32_t EntryPoint); // Function SidebarConfirmationButton.SidebarConfirmationButton_C.ExecuteUbergraph_SidebarConfirmationButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

