// WidgetBlueprintGeneratedClass SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C
// Size: 0x14c0 (Inherited: 0x1470)
struct USidebarSocialTagFilterCheckboxListEntry_C : UFortLFGFilterCheckboxEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1470(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1478(0x08)
	struct UWidgetAnimation* Hovered; // 0x1480(0x08)
	struct UBorder* Border_Background; // 0x1488(0x08)
	struct USizeBox* SBox_Checkbox; // 0x1490(0x08)
	struct USizeBox* ; // 0x1498(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x14a0(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x14b0(0x10)

	void Construct(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry(int32_t EntryPoint); // Function SidebarSocialTagFilterCheckboxListEntry.SidebarSocialTagFilterCheckboxListEntry_C.ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

