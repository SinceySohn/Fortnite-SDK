// WidgetBlueprintGeneratedClass SocialPanelTab.SocialPanelTab_C
// Size: 0x14b8 (Inherited: 0x1490)
struct USocialPanelTab_C : UFortSocialTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Unselected; // 0x1498(0x08)
	struct UWidgetAnimation* OnFriendsOnlineUpdated; // 0x14a0(0x08)
	struct UWidgetAnimation* Hovered; // 0x14a8(0x08)
	struct UWidgetAnimation* Selected; // 0x14b0(0x08)

	void BP_OnHovered(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function SocialPanelTab.SocialPanelTab_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialPanelTab(int32_t EntryPoint); // Function SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab // (Final|UbergraphFunction) // @ game+0xdef49c
};

