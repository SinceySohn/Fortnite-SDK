// WidgetBlueprintGeneratedClass JoinablePartyActionMenu.JoinablePartyActionMenu_C
// Size: 0x4d8 (Inherited: 0x4b0)
struct UJoinablePartyActionMenu_C : UFortJoinablePartyActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x4b8(0x08)
	struct UWidgetAnimation* Opened; // 0x4c0(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x4c8(0x08)
	struct UBorder* EntryBorder; // 0x4d0(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOpened(); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_JoinablePartyActionMenu(int32_t EntryPoint); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu // (Final|UbergraphFunction) // @ game+0xdef49c
};

