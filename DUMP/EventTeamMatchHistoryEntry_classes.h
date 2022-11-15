// WidgetBlueprintGeneratedClass EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C
// Size: 0x14e0 (Inherited: 0x1490)
struct UEventTeamMatchHistoryEntry_C : UFortEventTeamMatchHistoryEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Selected; // 0x1498(0x08)
	struct UCommonBorder* Border_Zebra; // 0x14a0(0x08)
	struct UImage* Image_OnlineStatus; // 0x14a8(0x08)
	struct UImage* Image_SelectedBG; // 0x14b0(0x08)
	struct UCommonTextBlock* Text_ReplayInteraction; // 0x14b8(0x08)
	struct FMulticastInlineDelegate Hovered; // 0x14c0(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x14d0(0x10)

	void BP_OnHovered(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventTeamMatchHistoryEntry(int32_t EntryPoint); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.ExecuteUbergraph_EventTeamMatchHistoryEntry // (Final|UbergraphFunction) // @ game+0xdef49c
	void Unhovered__DelegateSignature(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Hovered__DelegateSignature(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

