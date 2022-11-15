// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// Size: 0x750 (Inherited: 0x600)
struct ASafeZoneIndicator_C : AFortSafeZoneIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct UChildActorComponent* AGV_Storm; // 0x608(0x08)
	struct UChildActorComponent* BP_StormMeshRotator; // 0x610(0x08)
	float VolumetricStormFadeTimeline_StormFadeIn_5D8CED344AED096A33ABDAA94E2E18CD; // 0x618(0x04)
	enum class ETimelineDirection VolumetricStormFadeTimeline__Direction_5D8CED344AED096A33ABDAA94E2E18CD; // 0x61c(0x01)
	char pad_61D[0x3]; // 0x61d(0x03)
	struct UTimelineComponent* VolumetricStormFadeTimeline; // 0x620(0x08)
	float StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C; // 0x628(0x04)
	enum class ETimelineDirection StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C; // 0x62c(0x01)
	char pad_62D[0x3]; // 0x62d(0x03)
	struct UTimelineComponent* StormFadeTimeline; // 0x630(0x08)
	float Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C; // 0x638(0x04)
	enum class ETimelineDirection Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	struct UTimelineComponent* Pre Damage Audio Ramp; // 0x640(0x08)
	struct USoundBase* ShieldBoundaryLoopSound; // 0x648(0x08)
	struct USoundBase* HoldingLoopSound; // 0x650(0x08)
	double ; // 0x658(0x08)
	struct USoundBase* HoldingLoopTickSound; // 0x660(0x08)
	struct UMaterialInstanceDynamic* SafeZoneMID; // 0x668(0x08)
	struct FTimerHandle MegaStormDamageTimer; // 0x670(0x08)
	double MegastormAudioDuration; // 0x678(0x08)
	struct FMulticastInlineDelegate OnSafeZoneStateChangeDispatcher; // 0x680(0x10)
	enum class EFortSafeZoneState SafeZoneState; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	struct TMap<enum class EFortSafeZoneState, struct FVector2D> SafeZoneStateThunderFreqs; // 0x698(0x50)
	struct TMap<enum class EFortSafeZoneState, double> SafeZoneStateThunderDuration; // 0x6e8(0x50)
	bool OceanEnabled; // 0x738(0x01)
	char pad_739[0x3]; // 0x739(0x03)
	int32_t NumberofImpactEffects; // 0x73c(0x04)
	double ImapctFX_MaxHeight; // 0x740(0x08)
	double ImapctFX_MinHeight; // 0x748(0x08)

	void GetSafeZoneIndicatorMID(struct UMaterialInstanceDynamic*& Mid); // Function SafeZoneIndicator.SafeZoneIndicator_C.GetSafeZoneIndicatorMID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetRandomPointInPlayerDir(struct FVector& Position); // Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointInPlayerDir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetRandomPointOnBoundary(struct FVector& Position); // Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointOnBoundary // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetAthenaGameState(struct AAthena_GameState_C*& AthenaGS); // Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void HandleInsideOutsideMix(); // Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitClosestPointAudio(); // Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Pre Damage Audio Ramp__FinishedFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Pre Damage Audio Ramp__UpdateFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void StormFadeTimeline__FinishedFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void StormFadeTimeline__UpdateFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void VolumetricStormFadeTimeline__FinishedFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void VolumetricStormFadeTimeline__UpdateFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void stormy(double NewParam); // Function SafeZoneIndicator.SafeZoneIndicator_C.stormy // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBeginStartingStateEffectsEvent(); // Function SafeZoneIndicator.SafeZoneIndicator_C.OnBeginStartingStateEffectsEvent // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Megastorm Pre Damage Tell(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Megastorm Pre Damage Tell // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start Megastorm Audio(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Start Megastorm Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Storm Grow Audio(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Play Storm Grow Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Trigger Distant Storm Oneshot(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Trigger Distant Storm Oneshot // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Stop Distant Storm Oneshots(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Stop Distant Storm Oneshots // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetSafeZoneScale(); // Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSafeZoneStateChange(enum class EFortSafeZoneState NewState, bool bInitial); // Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DestroySafeZone(); // Function SafeZoneIndicator.SafeZoneIndicator_C.DestroySafeZone // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnForceResetCloudStartingBias(); // Function SafeZoneIndicator.SafeZoneIndicator_C.OnForceResetCloudStartingBias // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnForceStopStormFadeTimer(); // Function SafeZoneIndicator.SafeZoneIndicator_C.OnForceStopStormFadeTimer // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SafeZoneIndicator(int32_t EntryPoint); // Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnSafeZoneStateChangeDispatcher__DelegateSignature(enum class EFortSafeZoneState SafeZoneState); // Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChangeDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

