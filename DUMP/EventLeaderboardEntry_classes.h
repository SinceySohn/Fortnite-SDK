// WidgetBlueprintGeneratedClass EventLeaderboardEntry.EventLeaderboardEntry_C
// Size: 0x14e9 (Inherited: 0x1450)
struct UEventLeaderboardEntry_C : UFortEventLeaderboardEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* Selected; // 0x1458(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0x1460(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0x1468(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Rank; // 0x1470(0x08)
	struct UImage* Image_OnlineStatus; // 0x1478(0x08)
	struct UImage* Image_Qualified; // 0x1480(0x08)
	struct UImage* Image_SelectedBG; // 0x1488(0x08)
	struct UOverlay* Overlay_OnlineStatus; // 0x1490(0x08)
	struct UOverlay* Overlay_QualifiedContent; // 0x1498(0x08)
	struct UCommonTextBlock* Text_Rank; // 0x14a0(0x08)
	struct UCommonTextBlock* Text_Rank_First; // 0x14a8(0x08)
	struct UCommonTextBlock* Text_Score; // 0x14b0(0x08)
	bool isZebra; // 0x14b8(0x01)
	bool isPlayer; // 0x14b9(0x01)
	char pad_14BA[0x6]; // 0x14ba(0x06)
	struct TSoftObjectPtr<UDataTable> TEMPDatatableIdentities; // 0x14c0(0x28)
	bool isMatchPoint; // 0x14e8(0x01)

	void SetEntryDetails(struct UFortEventLeaderboardEntryData* EntryData); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetEntryDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventStyleEntry(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventStyleEntry // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventColorize(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeTeamTextEntry(struct UUserWidget* TeamEntryWidget, struct FText& Usernames); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.InitializeTeamTextEntry // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventLeaderboardEntry(int32_t EntryPoint); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.ExecuteUbergraph_EventLeaderboardEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

