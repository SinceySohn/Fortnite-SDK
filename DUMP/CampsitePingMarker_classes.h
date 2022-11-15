// WidgetBlueprintGeneratedClass CampsitePingMarker.CampsitePingMarker_C
// Size: 0x758 (Inherited: 0x748)
struct UCampsitePingMarker_C : UAthenaSquadIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x748(0x08)
	struct UCampsiteMarkerInfo_C* CampsiteMarkerInfo; // 0x750(0x08)

	void OnSetMarkerData(struct FFortWorldMarkerData& FortWorldMarkerData); // Function CampsitePingMarker.CampsitePingMarker_C.OnSetMarkerData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CampsitePingMarker(int32_t EntryPoint); // Function CampsitePingMarker.CampsitePingMarker_C.ExecuteUbergraph_CampsitePingMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

