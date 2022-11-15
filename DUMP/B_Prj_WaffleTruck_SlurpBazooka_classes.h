// BlueprintGeneratedClass B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C
// Size: 0xca8 (Inherited: 0xa20)
struct AB_Prj_WaffleTruck_SlurpBazooka_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xa28(0x08)
	struct UNiagaraComponent* NS_SlurpBazooka_Trail; // 0xa30(0x08)
	struct USkeletalMeshComponent* SK_SlurpJuice; // 0xa38(0x08)
	struct UAudioComponent* FlightSound; // 0xa40(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xa48(0x08)
	bool bHasExploded?; // 0xa50(0x01)
	char pad_A51[0x7]; // 0xa51(0x07)
	struct FHitResult HitResult; // 0xa58(0xe0)
	double FX Linger Time; // 0xb38(0x08)
	struct FVector SpawnPositionOffset; // 0xb40(0x18)
	struct FScalableFloat ShouldSpawnSlurpJuice; // 0xb58(0x28)
	struct USoundBase* SpawnSlurpJuiceSound; // 0xb80(0x08)
	struct USoundBase* BounceOffWallSound; // 0xb88(0x08)
	struct UParticleSystem* ExplosionVFX; // 0xb90(0x08)
	double WaterTraceRadius; // 0xb98(0x08)
	struct TArray<enum class EObjectTypeQuery> WaterTraceObjectTypes; // 0xba0(0x10)
	double LandscapeExtinguishRadius; // 0xbb0(0x08)
	struct FGameplayTag Explosion Cue Parameter; // 0xbb8(0x04)
	int32_t Count; // 0xbbc(0x04)
	bool SomethingWasPutOut; // 0xbc0(0x01)
	char pad_BC1[0x7]; // 0xbc1(0x07)
	struct FHitResult Hit; // 0xbc8(0xe0)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void ApplyWaterInRadiusIfCurieEnabled(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.ApplyWaterInRadiusIfCurieEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShieldPercent(struct AFortPlayerPawn* FortPawn, double& ShieldPercent); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.ShieldPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_Impact Location(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.OnRep_Impact Location // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Play Explosion Sound(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.Play Explosion Sound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reset Explosion Sound(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.Reset Explosion Sound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHomingPassedTarget(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.OnHomingPassedTarget // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnReachedLockTargetDistanceThreshold(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.OnReachedLockTargetDistanceThreshold // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBounce(struct FHitResult& Hit); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SpawnedBandageFx(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.SpawnedBandageFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void SpawnSlurpJuice(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.SpawnSlurpJuice // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CloseGate(); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.CloseGate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnExplosionVFX(struct FHitResult& Hit); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.SpawnExplosionVFX // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_WaffleTruck_SlurpBazooka(int32_t EntryPoint); // Function B_Prj_WaffleTruck_SlurpBazooka.B_Prj_WaffleTruck_SlurpBazooka_C.ExecuteUbergraph_B_Prj_WaffleTruck_SlurpBazooka // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

