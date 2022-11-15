// WidgetBlueprintGeneratedClass ConvertedMarkerInfo.ConvertedMarkerInfo_C
// Size: 0x388 (Inherited: 0x290)
struct UConvertedMarkerInfo_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* Image_Avatar; // 0x298(0x08)
	struct UImage* Image_Command; // 0x2a0(0x08)
	struct UCommonVisibilitySwitcher* ImageSwitcher; // 0x2a8(0x08)
	struct UImage* SquadMarker; // 0x2b0(0x08)
	struct FTimerHandle DBNOPulseTimer; // 0x2b8(0x08)
	struct FGameplayTagContainer RelevantPlaylistTags; // 0x2c0(0x20)
	bool bIsTalking; // 0x2e0(0x01)
	bool bShowBackgroundOverridden; // 0x2e1(0x01)
	bool bEnemyVersion; // 0x2e2(0x01)
	char pad_2E3[0x5]; // 0x2e3(0x05)
	struct TSoftObjectPtr<UTexture2D> Icon_Move; // 0x2e8(0x28)
	struct TSoftObjectPtr<UTexture2D> Icon_Hold; // 0x310(0x28)
	struct TSoftObjectPtr<UTexture2D> Icon_BackToMe; // 0x338(0x28)
	struct TSoftObjectPtr<UTexture2D> Icon_Revive; // 0x360(0x28)

	void SetBackgroundVisibility(bool bOverride, bool bBackgroundVisible); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.SetBackgroundVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_68559753464A154900ECA9BC6BB940C0(struct UObject* Loaded); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_68559753464A154900ECA9BC6BB940C0 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3(struct UObject* Loaded); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OnLoaded_25BCEE7642585A8BD6CE1CAFC70FEAF3 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OverrideShowBackground(bool bShowBackground); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.OverrideShowBackground // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void InitPlayerIconState(struct AFortPlayerStateAthena* PSA); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitPlayerIconState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCommandIcon(enum class PingCommandType PingCommand, struct AFortPlayerStateAthena* PSA); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.UpdateCommandIcon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitNPCCommandIcon(struct AFortPlayerStateAthena* PSA); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.InitNPCCommandIcon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ConvertedMarkerInfo(int32_t EntryPoint); // Function ConvertedMarkerInfo.ConvertedMarkerInfo_C.ExecuteUbergraph_ConvertedMarkerInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

