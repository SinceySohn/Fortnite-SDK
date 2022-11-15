// WidgetBlueprintGeneratedClass SidebarPartyPortrait.SidebarPartyPortrait_C
// Size: 0x2c9 (Inherited: 0x2a8)
struct USidebarPartyPortrait_C : UFortJoinablePartyPortrait {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UBorder* ; // 0x2b0(0x08)
	struct UImage* ; // 0x2b8(0x08)
	struct UFortSocialAvatarIcon* Image_ValueBackground; // 0x2c0(0x08)
	bool IsPartyLeader; // 0x2c8(0x01)

	void PreConstruct(bool IsDesignTime); // Function SidebarPartyPortrait.SidebarPartyPortrait_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarPartyPortrait(int32_t EntryPoint); // Function SidebarPartyPortrait.SidebarPartyPortrait_C.ExecuteUbergraph_SidebarPartyPortrait // (Final|UbergraphFunction) // @ game+0xdef49c
};

