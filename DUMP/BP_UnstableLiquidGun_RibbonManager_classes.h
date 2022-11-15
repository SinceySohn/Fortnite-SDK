// BlueprintGeneratedClass BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C
// Size: 0x950 (Inherited: 0x640)
struct ABP_UnstableLiquidGun_RibbonManager_C : ABP_LiquidGun_RibbonManager_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x640(0x08)
	struct UNiagaraComponent* ; // 0x648(0x08)
	double TimePerPoint; // 0x650(0x08)
	double FireRate; // 0x658(0x08)
	double DelayMultiplier; // 0x660(0x08)
	bool DoneExploding; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	double DistanceSinceExploded; // 0x670(0x08)
	int32_t PointsToExplode; // 0x678(0x04)
	int32_t CurrentExplosionPosition; // 0x67c(0x04)
	struct FTimerHandle NextExplosionTimer; // 0x680(0x08)
	struct FVector PreviousPosition; // 0x688(0x18)
	double NextExplosionDelay; // 0x6a0(0x08)
	struct UForceFeedbackEffect* ImpactForceFeedback; // 0x6a8(0x08)
	struct UGameplayEffect* ExplosionGE; // 0x6b0(0x08)
	double DamagePerPoint; // 0x6b8(0x08)
	struct FString In String; // 0x6c0(0x10)
	struct UCurveFloat* PointsConsumptionCurve; // 0x6d0(0x08)
	bool HitWater; // 0x6d8(0x01)
	bool bDebug; // 0x6d9(0x01)
	char pad_6DA[0x6]; // 0x6da(0x06)
	double EnvironmentDamageMultiplier; // 0x6e0(0x08)
	struct FScalableFloat MaxDamagePerExplosion; // 0x6e8(0x28)
	struct FScalableFloat MinDamagePerExplosion; // 0x710(0x28)
	struct FScalableFloat IndividualExplosionDelayMultiplier; // 0x738(0x28)
	struct FScalableFloat MinDistanceForExplosion; // 0x760(0x28)
	struct FScalableFloat MaxPointsPerExplosion_; // 0x788(0x28)
	struct FScalableFloat MinPointsPerExplosion_; // 0x7b0(0x28)
	struct FScalableFloat TimeBeforeExplosionStarts_; // 0x7d8(0x28)
	struct FScalableFloat ExplosionRadius_; // 0x800(0x28)
	struct FScalableFloat ExplosionRadiusMultiplierWhenIntense; // 0x828(0x28)
	struct FScalableFloat EnvironmentDamageMultiplier_; // 0x850(0x28)
	struct FScalableFloat AttachToPlayers; // 0x878(0x28)
	struct FScalableFloat AttachToVehicles; // 0x8a0(0x28)
	struct USoundBase* ExplodingSound; // 0x8c8(0x08)
	struct FScalableFloat WaitToStartFuseUntilFirstProjectileTouchesGround; // 0x8d0(0x28)
	struct FScalableFloat TimeBeforeFailsafeExplosionStarts; // 0x8f8(0x28)
	struct FTimerHandle StartExplodingFailsafeTimer; // 0x920(0x08)
	struct FScalableFloat VehicleDamageMultiplier; // 0x928(0x28)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void DamageFunc(bool isIntenseVersion); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.DamageFunc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetNormalAtPosition(int32_t Position, struct FVector& Normal); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.GetNormalAtPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Apply Damage(struct TArray<struct AActor*>& Array); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.Apply Damage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_GetFirstVisibleIndex(int32_t& FirstVisible); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.BP_GetFirstVisibleIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void StartExploding(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.StartExploding // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetUpNextExplosion(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.SetUpNextExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerNextExplosion(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.TriggerNextExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Damage(bool isIntenseVersion); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.Damage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AlllowAnotherAudioVisualizer(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.AlllowAnotherAudioVisualizer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FirstProjectileStopped (server only)(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.FirstProjectileStopped (server only) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartFuse(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.StartFuse // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartExploding_Multicast(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.StartExploding_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartExplodingFailsafe(); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.StartExplodingFailsafe // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_UnstableLiquidGun_RibbonManager(int32_t EntryPoint); // Function BP_UnstableLiquidGun_RibbonManager.BP_UnstableLiquidGun_RibbonManager_C.ExecuteUbergraph_BP_UnstableLiquidGun_RibbonManager // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

