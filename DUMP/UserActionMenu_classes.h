// WidgetBlueprintGeneratedClass UserActionMenu.UserActionMenu_C
// Size: 0x4d0 (Inherited: 0x4a0)
struct UUserActionMenu_C : UFortSocialInteractionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x4a8(0x08)
	struct UWidgetAnimation* Opened; // 0x4b0(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x4b8(0x08)
	struct UBorder* EntryBorder; // 0x4c0(0x08)
	struct UFortMobileImage* Image_Platform; // 0x4c8(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOpened(); // Function UserActionMenu.UserActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_UserActionMenu(int32_t EntryPoint); // Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu // (Final|UbergraphFunction) // @ game+0xdef49c
};

