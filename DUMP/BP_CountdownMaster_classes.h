// BlueprintGeneratedClass BP_CountdownMaster.BP_CountdownMaster_C
// Size: 0x410 (Inherited: 0x288)
struct ABP_CountdownMaster_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* HologramSkybeam; // 0x290(0x08)
	struct UStaticMeshComponent* HologramCountdown; // 0x298(0x08)
	struct UStaticMeshComponent* CountdownScreen; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	bool Debug_Phase2; // 0x2b0(0x01)
	bool Debug_Phase3; // 0x2b1(0x01)
	char pad_2B2[0x2]; // 0x2b2(0x02)
	int32_t NumberofDigits; // 0x2b4(0x04)
	double HologramHeight; // 0x2b8(0x08)
	bool ScreenVisible; // 0x2c0(0x01)
	bool HologramVisible; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct UMaterialInterface* CountdownScreen_Override; // 0x2c8(0x08)
	struct UMaterialInterface* Beam_Override; // 0x2d0(0x08)
	struct UMaterialInterface* CountdownHologram_Override; // 0x2d8(0x08)
	struct UMaterialInstanceDynamic* MI_CountdownScreen; // 0x2e0(0x08)
	struct UMaterialInstanceDynamic* MI_Countdown_Hologram; // 0x2e8(0x08)
	struct UMaterialInstanceDynamic* MI_Skybeam; // 0x2f0(0x08)
	struct FColor Color; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	double UV_Padding_x; // 0x300(0x08)
	double UV_Padding_y; // 0x308(0x08)
	double UV_Offset_x; // 0x310(0x08)
	double UV_Offset_y; // 0x318(0x08)
	double ScaleHologram_x; // 0x320(0x08)
	double ScaleHologram_y; // 0x328(0x08)
	double HologramVignette; // 0x330(0x08)
	struct UTexture* BackgroundTexture; // 0x338(0x08)
	struct UTexture* PostCountdownTexture; // 0x340(0x08)
	bool ShowHologramInHLOD; // 0x348(0x01)
	bool ShowScreenInHLOD; // 0x349(0x01)
	bool ExcludefromMediumHLOD; // 0x34a(0x01)
	char pad_34B[0x5]; // 0x34b(0x05)
	struct UMaterialInstanceDynamic* DontUSEMI_Countdown_Hologram_HLOD; // 0x350(0x08)
	double DistanceFadeLength; // 0x358(0x08)
	double DistanceFadeOffset; // 0x360(0x08)
	struct UMaterialInterface* HLOD Override_Hologram; // 0x368(0x08)
	struct UMaterialInterface* HLOD Override_SkyBeam; // 0x370(0x08)
	int32_t HLODElementIndex; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FString OptionalCalendarEvent; // 0x380(0x10)
	bool bManuallyTrackCalendarEvent; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UAudioComponent* CountdownAudioComp; // 0x398(0x08)
	struct USoundBase* CountdownAsset; // 0x3a0(0x08)
	struct USoundBase* CountdownEndAsset; // 0x3a8(0x08)
	struct USoundMix* CountdownSoundMix; // 0x3b0(0x08)
	bool bUseAudioLocationOverride; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct FVector AudioLocationOverride; // 0x3c0(0x18)
	double CountdownAudioFadeOut; // 0x3d8(0x08)
	struct TSoftObjectPtr<ABP_Generic_TimerManager_C> TimerManagerSoftRef; // 0x3e0(0x28)
	struct ABP_Generic_TimerManager_C* CachedTimerManager; // 0x408(0x08)

	void InitializeWithTimerManager(); // Function BP_CountdownMaster.BP_CountdownMaster_C.InitializeWithTimerManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopCountdownAudio(); // Function BP_CountdownMaster.BP_CountdownMaster_C.StopCountdownAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartCountdownAudio(); // Function BP_CountdownMaster.BP_CountdownMaster_C.StartCountdownAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupVisibility(); // Function BP_CountdownMaster.BP_CountdownMaster_C.SetupVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSetupMIDs(); // Function BP_CountdownMaster.BP_CountdownMaster_C.HandleSetupMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHLODMaterialOverrides(); // Function BP_CountdownMaster.BP_CountdownMaster_C.HandleHLODMaterialOverrides // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetHologramRelativeTransform(); // Function BP_CountdownMaster.BP_CountdownMaster_C.SetHologramRelativeTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OverrideComponentMaterial(struct UPrimitiveComponent* InComponent, struct UMaterialInterface* OverrideMaterial, int32_t ElementIndex, bool& bSuccesful); // Function BP_CountdownMaster.BP_CountdownMaster_C.OverrideComponentMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleMaterialPropertyOverrides(); // Function BP_CountdownMaster.BP_CountdownMaster_C.HandleMaterialPropertyOverrides // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_CountdownMaster.BP_CountdownMaster_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryFindTimerManager(); // Function BP_CountdownMaster.BP_CountdownMaster_C.TryFindTimerManager // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_CountdownMaster.BP_CountdownMaster_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_CountdownMaster.BP_CountdownMaster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTimerFinished(); // Function BP_CountdownMaster.BP_CountdownMaster_C.OnTimerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimerStateChanged(int32_t NewTimerState); // Function BP_CountdownMaster.BP_CountdownMaster_C.OnTimerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimerActive(); // Function BP_CountdownMaster.BP_CountdownMaster_C.OnTimerActive // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_CountdownMaster(int32_t EntryPoint); // Function BP_CountdownMaster.BP_CountdownMaster_C.ExecuteUbergraph_BP_CountdownMaster // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

