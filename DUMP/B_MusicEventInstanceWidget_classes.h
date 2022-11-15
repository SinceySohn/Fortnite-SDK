// WidgetBlueprintGeneratedClass B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C
// Size: 0x290 (Inherited: 0x268)
struct UB_MusicEventInstanceWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UUEFN_TextBlock_C* Text; // 0x270(0x08)
	struct UMusicEventInstance* EventInstance; // 0x278(0x08)
	double Distance; // 0x280(0x08)
	struct UB_MusicEventDebugWidget_C* DebugWidget; // 0x288(0x08)

	struct FSlateColor GetTextColor(); // Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.GetTextColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetFormatText(struct FText& Result); // Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.GetFormatText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void BP_OnEntryReleased(); // Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_MusicEventInstanceWidget(int32_t EntryPoint); // Function B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.ExecuteUbergraph_B_MusicEventInstanceWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

