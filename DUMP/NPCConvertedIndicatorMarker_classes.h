// WidgetBlueprintGeneratedClass NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C
// Size: 0x5e0 (Inherited: 0x5c0)
struct UNPCConvertedIndicatorMarker_C : UAthenaMarkedActorIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UImage* IrwinIndicator; // 0x5c8(0x08)
	struct UConvertedMarkerInfo_C* RidingMarkerInfo; // 0x5d0(0x08)
	struct AFortPlayerStateAthena* CachedPlayerState; // 0x5d8(0x08)

	void OnSetMarkerData(struct FFortWorldMarkerData& FortWorldMarkerData); // Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnSetMarkerData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPingCommandEvent(enum class PingCommandType CommandType); // Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnPingCommandEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPCConvertedIndicatorMarker(int32_t EntryPoint); // Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.ExecuteUbergraph_NPCConvertedIndicatorMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

