// WidgetBlueprintGeneratedClass CampsiteMarkerInfo.CampsiteMarkerInfo_C
// Size: 0x2e3 (Inherited: 0x2a0)
struct UCampsiteMarkerInfo_C : UCampsiteMarkerInfoBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UImage* Image_Avatar; // 0x2a8(0x08)
	struct UImage* Image_PingMarker; // 0x2b0(0x08)
	struct FTimerHandle DBNOPulseTimer; // 0x2b8(0x08)
	struct FGameplayTagContainer RelevantPlaylistTags; // 0x2c0(0x20)
	bool bIsTalking; // 0x2e0(0x01)
	bool bShowBackgroundOverridden; // 0x2e1(0x01)
	bool bEnemyVersion; // 0x2e2(0x01)

	void SetBackgroundVisibility(bool bOverride, bool bBackgroundVisible); // Function CampsiteMarkerInfo.CampsiteMarkerInfo_C.SetBackgroundVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_E4E2D6834C8DEFBB195DAFB481D364F0(struct UObject* Loaded); // Function CampsiteMarkerInfo.CampsiteMarkerInfo_C.OnLoaded_E4E2D6834C8DEFBB195DAFB481D364F0 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OverrideShowBackground(bool bShowBackground); // Function CampsiteMarkerInfo.CampsiteMarkerInfo_C.OverrideShowBackground // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetPlayerState(struct AFortPlayerStateAthena* PSA); // Function CampsiteMarkerInfo.CampsiteMarkerInfo_C.OnSetPlayerState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function CampsiteMarkerInfo.CampsiteMarkerInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CampsiteMarkerInfo(int32_t EntryPoint); // Function CampsiteMarkerInfo.CampsiteMarkerInfo_C.ExecuteUbergraph_CampsiteMarkerInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

