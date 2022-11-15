// WidgetBlueprintGeneratedClass SidebarLfgEmptyButton.SidebarLfgEmptyButton_C
// Size: 0x1410 (Inherited: 0x13e0)
struct USidebarLfgEmptyButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UWidgetAnimation* Hover; // 0x13e8(0x08)
	struct UCommonTextBlock* ButtonText; // 0x13f0(0x08)
	struct FText ButtonCopy; // 0x13f8(0x18)

	void BP_OnUnhovered(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarLfgEmptyButton(int32_t EntryPoint); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.ExecuteUbergraph_SidebarLfgEmptyButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

