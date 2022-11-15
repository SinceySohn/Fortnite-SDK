// WidgetBlueprintGeneratedClass SidebarUserActionMenu.SidebarUserActionMenu_C
// Size: 0x520 (Inherited: 0x4f0)
struct USidebarUserActionMenu_C : UFortSidebarSocialInteractionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x4f8(0x08)
	struct UWidgetAnimation* Opened; // 0x500(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x508(0x08)
	struct UBorder* EntryBorder; // 0x510(0x08)
	struct UFortMobileImage* Image_Platform; // 0x518(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function SidebarUserActionMenu.SidebarUserActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOpened(); // Function SidebarUserActionMenu.SidebarUserActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarUserActionMenu(int32_t EntryPoint); // Function SidebarUserActionMenu.SidebarUserActionMenu_C.ExecuteUbergraph_SidebarUserActionMenu // (Final|UbergraphFunction) // @ game+0xdef49c
};

