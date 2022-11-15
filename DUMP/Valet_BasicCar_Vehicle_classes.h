// BlueprintGeneratedClass Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C
// Size: 0x2d10 (Inherited: 0x2010)
struct AValet_BasicCar_Vehicle_C : AFortDagwoodVehicle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2010(0x08)
	struct UFortVehiclePhysicsCollisionDamageComponent* PhysicsDamageCauserComponent; // 0x2018(0x08)
	struct UFortVehicleFuelComponent* FuelComponent; // 0x2020(0x08)
	struct UValetLightSpawnerComponent_C* ValetLightSpawnerComponent; // 0x2028(0x08)
	struct UChildActorComponent* AudioControllerBP; // 0x2030(0x08)
	struct UParticleSystemComponent* FireSystem; // 0x2038(0x08)
	struct UBoxComponent* OverlapVolume; // 0x2040(0x08)
	float BoostFOVRumbleTimeline_Rumble_4398A5E6444D49F8629D269235124894; // 0x2048(0x04)
	float BoostFOVRumbleTimeline_FoV_4398A5E6444D49F8629D269235124894; // 0x204c(0x04)
	enum class ETimelineDirection BoostFOVRumbleTimeline__Direction_4398A5E6444D49F8629D269235124894; // 0x2050(0x01)
	char pad_2051[0x7]; // 0x2051(0x07)
	struct UTimelineComponent* BoostFOVRumbleTimeline; // 0x2058(0x08)
	float TimeLineBoostFast_JetSparksCounts_23CFE84A48582AA363A21891FC410F04; // 0x2060(0x04)
	float TimeLineBoostFast_JetFlameHight_23CFE84A48582AA363A21891FC410F04; // 0x2064(0x04)
	enum class ETimelineDirection TimeLineBoostFast__Direction_23CFE84A48582AA363A21891FC410F04; // 0x2068(0x01)
	char pad_2069[0x7]; // 0x2069(0x07)
	struct UTimelineComponent* TimeLineBoostFast; // 0x2070(0x08)
	float TimeLineBoost_JetFlameHight_46B59FC64BBD70FB1C84F292AABA9218; // 0x2078(0x04)
	enum class ETimelineDirection TimeLineBoost__Direction_46B59FC64BBD70FB1C84F292AABA9218; // 0x207c(0x01)
	char pad_207D[0x3]; // 0x207d(0x03)
	struct UTimelineComponent* TimeLineBoost; // 0x2080(0x08)
	float OutOfFuel_Intensity_C83D96E348E80AB3A7B67182D3F6C892; // 0x2088(0x04)
	enum class ETimelineDirection OutOfFuel__Direction_C83D96E348E80AB3A7B67182D3F6C892; // 0x208c(0x01)
	char pad_208D[0x3]; // 0x208d(0x03)
	struct UTimelineComponent* OutOfFuel; // 0x2090(0x08)
	struct USoundBase* OnDeathSound; // 0x2098(0x08)
	double MaxSpeedForAccelFX; // 0x20a0(0x08)
	struct AFortPlayerPawn* PassengerPawn; // 0x20a8(0x08)
	struct APlayerController* DrivingPlayerController; // 0x20b0(0x08)
	struct AFortPlayerPawn* DriverPawn; // 0x20b8(0x08)
	struct AFortPlayerPawn* LastDriver; // 0x20c0(0x08)
	struct AFortPlayerPawnAthena* LastHitPlayer; // 0x20c8(0x08)
	bool IgnoreHitLastDriver; // 0x20d0(0x01)
	bool PassengerIsInstigator; // 0x20d1(0x01)
	char pad_20D2[0x6]; // 0x20d2(0x06)
	struct FScalableFloat CanLaunchPlayer; // 0x20d8(0x28)
	struct APlayerController* PassengerPlayerController; // 0x2100(0x08)
	struct TArray<struct AFortPlayerPawn*> Passengers; // 0x2108(0x10)
	bool Debug_NoCameraShake; // 0x2118(0x01)
	char pad_2119[0x7]; // 0x2119(0x07)
	struct TArray<struct AFortPlayerPawn*> BounceIgnoreList; // 0x2120(0x10)
	double DestructionAngle; // 0x2130(0x08)
	double EngineSoundMaxDistance; // 0x2138(0x08)
	double SavedDamageValueForMID; // 0x2140(0x08)
	struct UParticleSystemComponent* InWaterFX; // 0x2148(0x08)
	struct FGameplayCueParameters GCParamsEmpty; // 0x2150(0xd0)
	struct FGameplayTag HitPlayerCue; // 0x2220(0x04)
	struct FGameplayTag HitFiendCue; // 0x2224(0x04)
	struct USoundBase* WaterMovementSound; // 0x2228(0x08)
	struct USoundBase* InWaterLoopSound; // 0x2230(0x08)
	struct UParticleSystem* InWaterSplashFX; // 0x2238(0x08)
	struct UParticleSystem* InWaterLoopingFX; // 0x2240(0x08)
	double AccelRumbleIntensityFalloff; // 0x2248(0x08)
	struct UParticleSystem* DestroyedFX; // 0x2250(0x08)
	struct UForceFeedbackEffect* MovementForceFeedback; // 0x2258(0x08)
	struct ULegacyCameraShake* Movement_CameraShake; // 0x2260(0x08)
	struct ULegacyCameraShake* Driver_CameraShake; // 0x2268(0x08)
	bool bLocalPlayerADS; // 0x2270(0x01)
	char pad_2271[0x7]; // 0x2271(0x07)
	struct ULegacyCameraShake* BigHit_CameraShake; // 0x2278(0x08)
	struct UForceFeedbackEffect* BigHitForceFeedback; // 0x2280(0x08)
	struct UForceFeedbackEffect* SmallHitForceFeedback; // 0x2288(0x08)
	struct ULegacyCameraShake* SmallHit_CameraShake; // 0x2290(0x08)
	struct UForceFeedbackEffect* SpringCompressionForceFeedback; // 0x2298(0x08)
	struct ULegacyCameraShake* DriverCameraShake; // 0x22a0(0x08)
	struct ULegacyCameraShake* OffRoadCamera_Shake; // 0x22a8(0x08)
	double OffRoadCameraShakeFalloff; // 0x22b0(0x08)
	double OffRoadCameraSpeedForShakes; // 0x22b8(0x08)
	double OffRoadNormalizedSpeedForRumble; // 0x22c0(0x08)
	double OffRoadCameraMinFrequency; // 0x22c8(0x08)
	double OffRoadCameraMaxFrequency; // 0x22d0(0x08)
	double OffRoadCameraY_Amp; // 0x22d8(0x08)
	double OffRoadCameraZ_Amp; // 0x22e0(0x08)
	double OffRoadCameraRot_Amp; // 0x22e8(0x08)
	double AccelRumbleIntensityPower; // 0x22f0(0x08)
	double AccelRumbleIntensity; // 0x22f8(0x08)
	bool LargeRumble; // 0x2300(0x01)
	char pad_2301[0x7]; // 0x2301(0x07)
	struct ULegacyCameraShake* OffRoad_CameraShake; // 0x2308(0x08)
	double VehicleMaxSpeed; // 0x2310(0x08)
	double ImpactEjectUpVelocity; // 0x2318(0x08)
	double ImpactEjectForwardVelocity; // 0x2320(0x08)
	struct ULegacyCameraShake* OutOfFuelCameraShake; // 0x2328(0x08)
	double MaxSpeedForAccelRumble; // 0x2330(0x08)
	double MinSkidAmountRequired; // 0x2338(0x08)
	double TireSkidRumbleFalloff; // 0x2340(0x08)
	double MinSpeedForTireSkid; // 0x2348(0x08)
	double MinSpeedForBrakingSkid; // 0x2350(0x08)
	double MinDamageToEjectDriver; // 0x2358(0x08)
	struct UParticleSystem* WindshieldBreakFX; // 0x2360(0x08)
	struct FTimerHandle HandbrakeSmoke; // 0x2368(0x08)
	struct ULegacyCameraShake* AccelCameraShake; // 0x2370(0x08)
	struct ULegacyCameraShake* HandbrakeCameraShake; // 0x2378(0x08)
	struct ULegacyCameraShake* Handbrake_CameraShake; // 0x2380(0x08)
	double HandbrakeCameraShakeFalloff; // 0x2388(0x08)
	double HandbrakeCameraSpeedForShakes; // 0x2390(0x08)
	double NormalizedSpeedForRumble; // 0x2398(0x08)
	double HandbrakeCameraMinFrequency; // 0x23a0(0x08)
	double HandbrakeCameraMaxFrequency; // 0x23a8(0x08)
	double HandbrakeCameraY_Amp; // 0x23b0(0x08)
	double HandbrakeCameraZ_Amp; // 0x23b8(0x08)
	double HandbrakeCameraRot_Amp; // 0x23c0(0x08)
	double FuelLeakPerDrop; // 0x23c8(0x08)
	double FuelLeakFrequency; // 0x23d0(0x08)
	struct FTimerHandle LeakingFuelTimer; // 0x23d8(0x08)
	bool bFuelLeaking; // 0x23e0(0x01)
	char pad_23E1[0x7]; // 0x23e1(0x07)
	struct TArray<enum class EObjectTypeQuery> LeakObjectTrace; // 0x23e8(0x10)
	bool bIsOnFire; // 0x23f8(0x01)
	char pad_23F9[0x3]; // 0x23f9(0x03)
	int32_t DripOntoFuelCount; // 0x23fc(0x04)
	struct FVector DripDistanceCheck; // 0x2400(0x18)
	struct AAthena_PlayerController_C* DamagingPlayerController; // 0x2418(0x08)
	struct AFortPlayerPawn* DamagingPlayerPawn; // 0x2420(0x08)
	struct UGameplayEffect* GE_DamagePlayerHit; // 0x2428(0x08)
	struct ULegacyCameraShake* CameraShakeBoost; // 0x2430(0x08)
	struct ULegacyCameraShake* BoostCameraShake; // 0x2438(0x08)
	struct UParticleSystem* ExplodeFX; // 0x2440(0x08)
	struct UGameplayEffect* GE_RimScrapeDamage; // 0x2448(0x08)
	double LowFuelThreshold; // 0x2450(0x08)
	struct USoundBase* LowFuelWarningSound; // 0x2458(0x08)
	struct USoundBase* ; // 0x2460(0x08)
	struct UParticleSystem* PopTireFX; // 0x2468(0x08)
	struct FName WheelSocket_FR; // 0x2470(0x04)
	struct FName WheelSocket_FL; // 0x2474(0x04)
	struct FName WheelSocket_BR; // 0x2478(0x04)
	struct FName WheelSocket_BL; // 0x247c(0x04)
	struct FName WheelSocketBR_Mid; // 0x2480(0x04)
	struct FName WheelSocketBL_Mid; // 0x2484(0x04)
	bool MidR_TirePop; // 0x2488(0x01)
	bool MidL_TirePop; // 0x2489(0x01)
	bool IsBigRig; // 0x248a(0x01)
	char pad_248B[0x5]; // 0x248b(0x05)
	struct UMaterialInstanceDynamic* BodyMID; // 0x2490(0x08)
	double DamageValue; // 0x2498(0x08)
	struct FVector LaunchVelocity; // 0x24a0(0x18)
	struct TArray<struct AActor*> TargetedActors; // 0x24b8(0x10)
	struct AFortPawn* ExplodeInstigator; // 0x24c8(0x08)
	struct UGameplayEffect* GE_ExplodeBuildingDamage; // 0x24d0(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectArray; // 0x24d8(0x10)
	double ExplodeRadius; // 0x24e8(0x08)
	struct UGameplayEffect* GE_ExplodePlayerDamage; // 0x24f0(0x08)
	struct UGameplayEffect* GE_ExplodeVehicleDamage; // 0x24f8(0x08)
	struct FVector ExplodeVehicleSpin; // 0x2500(0x18)
	double ExplodeVehicleImpulse; // 0x2518(0x08)
	double Turn Signal Update Frequencey; // 0x2520(0x08)
	double BasePontoonRadiusFront; // 0x2528(0x08)
	double BasePontoonRadiusRear; // 0x2530(0x08)
	double MinPontoonRadiusToSink; // 0x2538(0x08)
	double ReduceRadiusTerTickRear; // 0x2540(0x08)
	double ReduceRadiusTerTickFront; // 0x2548(0x08)
	double ScalePontoonTickRateFront; // 0x2550(0x08)
	double ScalePontoonTickRateRear; // 0x2558(0x08)
	double ScaledPontoonRadiusRear; // 0x2560(0x08)
	double ScaledPontoonRadiusFront; // 0x2568(0x08)
	struct FTimerHandle ScalePontoonTimerFront; // 0x2570(0x08)
	struct FTimerHandle ScalePontoonTimerRear; // 0x2578(0x08)
	double FuelGainPerInteract; // 0x2580(0x08)
	struct UNiagaraComponent* FX Road Interaction And Exhaust; // 0x2588(0x08)
	struct FTimerHandle TimerSnapFoamToWaterSurface; // 0x2590(0x08)
	struct UNiagaraComponent* NS_LargeSplashFX; // 0x2598(0x08)
	struct UNiagaraComponent* FX_LowFuelSputterSmoke; // 0x25a0(0x08)
	bool Tire_Popped_FL; // 0x25a8(0x01)
	bool Tire_Popped_FR; // 0x25a9(0x01)
	bool Tire_Popped_RL; // 0x25aa(0x01)
	bool Tire_Popped_RR; // 0x25ab(0x01)
	char pad_25AC[0x4]; // 0x25ac(0x04)
	struct FVector Wheel_Scale_Rear; // 0x25b0(0x18)
	struct FVector Wheel_Scale_Front; // 0x25c8(0x18)
	struct FVector Tire_Scale_Rear; // 0x25e0(0x18)
	struct FVector Tire_Scale_Front; // 0x25f8(0x18)
	double MinSpeedForDust; // 0x2610(0x08)
	struct FLinearColor FX_Dust_Color_Dirt; // 0x2618(0x10)
	struct FLinearColor FX_Dust_Color_Default; // 0x2628(0x10)
	struct UNiagaraComponent* FX_LeakingFuel; // 0x2638(0x08)
	struct FTransform WindowTransform_F; // 0x2640(0x60)
	struct FTransform WindowTransform_FL; // 0x26a0(0x60)
	struct FTransform WindowTransform_FR; // 0x2700(0x60)
	struct FTransform WindowTransform_BL; // 0x2760(0x60)
	struct FTransform WindowTransform_BR; // 0x27c0(0x60)
	struct FTransform WindowTransform_B; // 0x2820(0x60)
	bool CanExplodeHack; // 0x2880(0x01)
	bool VehicleImpulseOnExplode; // 0x2881(0x01)
	char pad_2882[0x6]; // 0x2882(0x06)
	double ExplodeSpinThrustMagnitude; // 0x2888(0x08)
	struct UNiagaraSystem* PopTireFXNiagara; // 0x2890(0x08)
	struct UNiagaraSystem* ExplodeFXNiagara; // 0x2898(0x08)
	struct UNiagaraComponent* FX_TireSkid; // 0x28a0(0x08)
	double Damage_Stage1; // 0x28a8(0x08)
	double Damage_Stage2; // 0x28b0(0x08)
	double Damage_Stage3Critical; // 0x28b8(0x08)
	double VehicleFallSpeed; // 0x28c0(0x08)
	struct UNiagaraSystem* WreckFXNiagara; // 0x28c8(0x08)
	struct ABP_Vehicle_Radio_C* VehicleRadio; // 0x28d0(0x08)
	double LastCollisionTime; // 0x28d8(0x08)
	double MinTimeBetweenCollision; // 0x28e0(0x08)
	double ScrapeImpact_Strength; // 0x28e8(0x08)
	bool isVehicleOccupied?; // 0x28f0(0x01)
	char pad_28F1[0x7]; // 0x28f1(0x07)
	struct FString SportCar; // 0x28f8(0x10)
	struct FString SportCarUpgrade; // 0x2908(0x10)
	struct FString SemiTruck; // 0x2918(0x10)
	struct UNiagaraComponent* FX_LeakingFuel_r; // 0x2928(0x08)
	bool IsInDeepWater; // 0x2930(0x01)
	char pad_2931[0x3]; // 0x2931(0x03)
	int32_t NumWheels; // 0x2934(0x04)
	struct TArray<double> WheelSpringLength; // 0x2938(0x10)
	double SurfaceChangeTime; // 0x2948(0x08)
	struct ABP_Valet_AudioController_Parent_C* AudioControllerClass; // 0x2950(0x08)
	double MaxDepthToEject; // 0x2958(0x08)
	struct AFortWaterBodyActor* WaterBody; // 0x2960(0x08)
	struct FTimerHandle WaterDepthCheckTimer; // 0x2968(0x08)
	double Explosion_CameraShake_Radius; // 0x2970(0x08)
	double SpawnImpactFX_VehicleSpeed; // 0x2978(0x08)
	double SpawnImpactFX_VehicleSpeed_Limit; // 0x2980(0x08)
	double ExplodeImpulseZ_Magnitude; // 0x2988(0x08)
	double MaxSpeedToHandbrakeHaptics; // 0x2990(0x08)
	double ExplodePlayerImpulse; // 0x2998(0x08)
	double ScalePlayerHitImpulseBySpeed; // 0x29a0(0x08)
	double ScalePlayerHitImpulseNoDriver; // 0x29a8(0x08)
	int32_t RandomMatInt; // 0x29b0(0x04)
	char pad_29B4[0x4]; // 0x29b4(0x04)
	struct TArray<struct UMaterialInterface*> SK_RandomMat2_Array; // 0x29b8(0x10)
	struct TArray<struct UMaterialInterface*> SK_RandomMat0_Array; // 0x29c8(0x10)
	struct TArray<struct UMaterialInterface*> SK_RandomMat1_Array; // 0x29d8(0x10)
	struct UTexture* Diffuse; // 0x29e8(0x08)
	struct UTexture* Mask; // 0x29f0(0x08)
	struct UTexture* Normal; // 0x29f8(0x08)
	struct UTexture* ScratchGrime; // 0x2a00(0x08)
	struct UTexture* SpecularMask; // 0x2a08(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x2a10(0x08)
	struct UMaterialInstanceDynamic* DestroyedMID; // 0x2a18(0x08)
	struct FLinearColor Primary Color; // 0x2a20(0x10)
	struct UGameplayEffect* GE_ApplyInValetTag; // 0x2a30(0x08)
	struct FGameplayTagContainer InValetVehicleTag; // 0x2a38(0x20)
	struct UGameplayEffect* GE_ApplyAllowFlippingTag; // 0x2a58(0x08)
	struct FGameplayTagContainer VehicleAllowFlippingTag; // 0x2a60(0x20)
	struct FScalableFloat HotfixCurieEnabled; // 0x2a80(0x28)
	struct UAudioComponent* FuelGainedLoop; // 0x2aa8(0x08)
	struct USoundBase* GainFuelSound; // 0x2ab0(0x08)
	double CurrentFuelGainPercent; // 0x2ab8(0x08)
	struct UNiagaraComponent* DamageFX; // 0x2ac0(0x08)
	struct FScalableFloat RagdollEnabled; // 0x2ac8(0x28)
	struct AFN_RadialForce_C* FN_RadialForce; // 0x2af0(0x08)
	struct FScalableFloat Row_ShouldDropLootOnDamage; // 0x2af8(0x28)
	struct FScalableFloat LootDropDamageThresholds; // 0x2b20(0x28)
	int32_t LootDropCurentThreshold; // 0x2b48(0x04)
	struct FName LootOnDamagePackage; // 0x2b4c(0x04)
	double LootTossOffset; // 0x2b50(0x08)
	struct UParticleSystem* FX_LootDropOnDamagedSpawn; // 0x2b58(0x08)
	double LootTossMin; // 0x2b60(0x08)
	struct FGameplayTag Boost_GC; // 0x2b68(0x04)
	char pad_2B6C[0x4]; // 0x2b6c(0x04)
	struct UNiagaraComponent* NS_TurboBoost_FX; // 0x2b70(0x08)
	struct FRotator BoostFXRotation; // 0x2b78(0x18)
	bool bBoostUsesQuadExhaust; // 0x2b90(0x01)
	char pad_2B91[0x7]; // 0x2b91(0x07)
	double BoostQuadExhaustHorizontalOffset; // 0x2b98(0x08)
	double BoostJetLocationOffsetX; // 0x2ba0(0x08)
	double BoostJetLocationOffsetZ; // 0x2ba8(0x08)
	double BoostJetFlameHeight; // 0x2bb0(0x08)
	double BoostJetFlameHeightMax; // 0x2bb8(0x08)
	bool ; // 0x2bc0(0x01)
	char pad_2BC1[0x7]; // 0x2bc1(0x07)
	double WheelWidth; // 0x2bc8(0x08)
	double WheelWidthBack; // 0x2bd0(0x08)
	struct FLinearColor ExhaustColor; // 0x2bd8(0x10)
	double ExhaustScale; // 0x2be8(0x08)
	bool BoostCameraActive; // 0x2bf0(0x01)
	bool IsBoosting; // 0x2bf1(0x01)
	char pad_2BF2[0x6]; // 0x2bf2(0x06)
	double BoostRumbleIntensity; // 0x2bf8(0x08)
	double MaxBoostFOV; // 0x2c00(0x08)
	double HealthPctMissingToShowDmgCrinkle; // 0x2c08(0x08)
	double MaxCrinkleSeverity; // 0x2c10(0x08)
	struct FScalableFloat ExplosionDamageBuildings; // 0x2c18(0x28)
	double CachedExplosionDamageBuildings; // 0x2c40(0x08)
	struct FScalableFloat ExplosionDamagePlayers; // 0x2c48(0x28)
	double CachedExplosionDamagePlayers; // 0x2c70(0x08)
	struct FScalableFloat ExplosionDamageVehicles; // 0x2c78(0x28)
	double CachedExplosionDamageVehicles; // 0x2ca0(0x08)
	struct UGameplayEffect* GE_Explode_BuildingDamage; // 0x2ca8(0x08)
	struct UNiagaraComponent* NS_WreckFX; // 0x2cb0(0x08)
	bool VehicleExploded; // 0x2cb8(0x01)
	bool HandbrakeDown?; // 0x2cb9(0x01)
	char pad_2CBA[0x2]; // 0x2cba(0x02)
	struct FGameplayTag GC_ApplyTireMod; // 0x2cbc(0x04)
	double PreFadeCleanupDelay; // 0x2cc0(0x08)
	struct UFXSystemAsset* NiagaraFX_PlayerImpact; // 0x2cc8(0x08)
	struct UNiagaraSystem* TemplateWaterSplashFX; // 0x2cd0(0x08)
	struct UFXSystemAsset* TemplateScrapeImpactFX; // 0x2cd8(0x08)
	struct UNiagaraSystem* TemplateBoostFX; // 0x2ce0(0x08)
	struct UNiagaraSystem* FX Tire Skid Template; // 0x2ce8(0x08)
	struct UNiagaraSystem* FX Road Interaction and Exhaust Template; // 0x2cf0(0x08)
	struct UNiagaraSystem* FX Large Impact; // 0x2cf8(0x08)
	struct TArray<struct APlayerController*> ValidPlayerControllers; // 0x2d00(0x10)

	void getAttachmentMeshComponents(struct TArray<struct UMeshComponent*>& Meshes); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.getAttachmentMeshComponents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void setHeadlightEmissiveOn(bool IsOn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.setHeadlightEmissiveOn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddToPlayerControllerArray(struct APawn* PlayerPawn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.AddToPlayerControllerArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsVehicleOccupied(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.IsVehicleOccupied // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ApplyBuildingExplosionDamage(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ApplyBuildingExplosionDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CacheExplosionDamageValues(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CacheExplosionDamageValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Is Driver Restricted By Team Setting(struct AFortPlayerPawn* PlayerPawn, bool& Restricted); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Is Driver Restricted By Team Setting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateBaseMID(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CreateBaseMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateDestroyedMIDApply(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CreateDestroyedMIDApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GenerateRandomInt(struct TArray<struct UMaterialInterface*>& TargetArray); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.GenerateRandomInt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_RandomMatInt(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnRep_RandomMatInt // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DamgeStateSetAmount(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DamgeStateSetAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleGlassFX(struct FName AttachPointName, struct FTransform& InTransform); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ToggleGlassFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleDustFX(bool InValue); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ToggleDustFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetFxSettingsForVehicleType(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SetFxSettingsForVehicleType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TurnSignalsandBrakes(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TurnSignalsandBrakes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FVector CalcImpulseDirection(struct AActor* Vehicle, double Magnitude); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CalcImpulseDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetFallInstigator(struct AFortPlayerPawnAthena* Pawn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SetFallInstigator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Damageable Part Changed(struct FVehicleDamageablePartConfig PartConfig, struct FVehicleDamageablePart Part, bool NewlyDisabled); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Damageable Part Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsVehicleAccelerating?(double MaxSpeed, bool& Return); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.IsVehicleAccelerating? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	double CalcAccelRumbleIntensity(double MaxIntensity); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CalcAccelRumbleIntensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SendDamageValueToMaterials(double ParameterValue); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SendDamageValueToMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetTurnSlowMagnitude(double SteeringAngle, double& SlowResult); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.GetTurnSlowMagnitude // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetIconPlacement(struct AActor* SelfActor, struct AActor* ViewingActor, struct FVector& OutLocation, struct FVector& OutExtents); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.GetIconPlacement // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void PlayHapticsOnHit(double HitMagnitude); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.PlayHapticsOnHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OutOfFuel__FinishedFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OutOfFuel__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void OutOfFuel__UpdateFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OutOfFuel__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void TimeLineBoostFast__FinishedFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TimeLineBoostFast__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void TimeLineBoostFast__UpdateFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TimeLineBoostFast__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void TimeLineBoost__FinishedFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TimeLineBoost__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void TimeLineBoost__UpdateFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TimeLineBoost__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void BoostFOVRumbleTimeline__FinishedFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BoostFOVRumbleTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BoostFOVRumbleTimeline__UpdateFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BoostFOVRumbleTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnCurieActive_1D9CDF534780404ABF0AA6893CD541A6(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnCurieActive_1D9CDF534780404ABF0AA6893CD541A6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_04DD3D3E4FBD21BFC0E43DAB4B40FA90(struct AGameStateBase* GameState); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnReady_04DD3D3E4FBD21BFC0E43DAB4B40FA90 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateMovementCosmeticParameters(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.UpdateMovementCosmeticParameters // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPawnEnterVehicle(struct AFortPlayerPawn* PlayerPawn, int32_t SeatIdx); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnPawnEnterVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPawnExitVehicle(struct AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnPawnExitVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged(float Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnDamaged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Update Damage State(double Damage); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Update Damage State // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSpringCompression(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BP_OnSpringCompression // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void LocalPassengerADS(bool IsADS); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.LocalPassengerADS // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Handle Spring Compression Audio(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Handle Spring Compression Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PawnHitByVehicle(struct AFortPawn* Pawn, struct FVector& ImpactPoint, struct FVector& ImpactNormal, struct FVector LaunchVector); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.PawnHitByVehicle // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnStopTick(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnStopTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnHoldExitStarted(struct AFortPawn* ExitingPawn, float ExitDuration); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnHoldExitStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnHoldExitStopped(struct AFortPawn* ExitingPawn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnHoldExitStopped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnHonk(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnHonk // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnFireStart(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnFireStart // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnFireStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnFireStop // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void StopAccelRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopAccelRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartAccelRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartAccelRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleTireSmoke(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.HandleTireSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateTireSmoke(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ActivateTireSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateTireSmoke(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DeactivateTireSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnGainedFuel(float NewPercent); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnGainedFuel // (BlueprintEvent) // @ game+0xdef49c
	void EventOutOfFuel(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.EventOutOfFuel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartOutOfGasRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartOutOfGasRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopOutOfGasRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopOutOfGasRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ManageAccelRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ManageAccelRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TireSkid(bool Condition); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TireSkid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SkidRumbleStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SkidRumbleStop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SkidRumbleStart(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SkidRumbleStart // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BrakingRumbleStart(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BrakingRumbleStart // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BrakingRumbleStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BrakingRumbleStop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStartHandbrake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnStartHandbrake // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnStopHandbrake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnStopHandbrake // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void StopHandbrakeHaptics(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopHandbrakeHaptics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandbrakeSkid(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.HandbrakeSkid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AccelCameraShakeBegin(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.AccelCameraShakeBegin // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AccelCameraShakeEnd(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.AccelCameraShakeEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartHandbrakeCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartHandbrakeCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopHandbrakeCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopHandbrakeCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateHandbrakeCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.UpdateHandbrakeCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnBoostStarted(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BP_OnBoostStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnBoostFinished(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BP_OnBoostFinished // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void StopBoostCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopBoostCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BoostRumbleStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BoostRumbleStop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRimScrapeDamage(int32_t TireIndex); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnRimScrapeDamage // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ResetLastHitPlayer(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ResetLastHitPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageablePartHealthChanged_Event(struct FVehicleDamageablePartConfig& PartConfig, struct FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnDamageablePartHealthChanged_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ScalePontoonFront(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ScalePontoonFront // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ScalePontoonRear(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ScalePontoonRear // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FX_Init_Settings(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.FX_Init_Settings // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExplodeCosmetics(struct AActor* DestroyedActor); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ExplodeCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SnapFoamtoWaterSurface(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SnapFoamtoWaterSurface // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CE_WaterFX_ResetDeepWaterEffectActivate(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CE_WaterFX_ResetDeepWaterEffectActivate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BrakingSkid(bool Condition); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BrakingSkid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void VFX_DamageState(double Damage); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.VFX_DamageState // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FadeoutCosmetics(struct AActor* DestroyedActor); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.FadeoutCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateRadio(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CreateRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RadioGo(bool Start, int32_t RadioStationIndex); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.RadioGo // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyRadio(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DestroyRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SpawnWreckFX(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SpawnWreckFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CE_PawnEnterVehicleWhileInWater(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CE_PawnEnterVehicleWhileInWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CE_PawnExitVehicleWhileInWater(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CE_PawnExitVehicleWhileInWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSleepStateChanged(bool bAwake); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnSleepStateChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTickAudioController(float DeltaTime); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnTickAudioController // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PickRandomMaterial(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.PickRandomMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisolveVehicle(double Fade); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DisolveVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSurfaceTypeVehicleIsOnChanged(enum class EPhysicalSurface SurfaceTypeVehicleIsOn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnSurfaceTypeVehicleIsOnChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HealthChanged(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckSpeed(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CheckSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTickAudioFade(float FadeParam); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnTickAudioFade // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void DropLootOnDamage(struct AActor* DamagingActor, struct FHitResult HitResult); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DropLootOnDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateBoostFX(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DeactivateBoostFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateBoostFX(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ActivateBoostFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopHandbrakeRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopHandbrakeRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShiftBlip(bool bUpshift); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ShiftBlip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BoostFOV_Rumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BoostFOV_Rumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReverseBoostTimeline(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ReverseBoostTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateBoostRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.UpdateBoostRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopBoostRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopBoostRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BoostCameraReverse(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BoostCameraReverse // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartBoostRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartBoostRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWaterTooDeep(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnWaterTooDeep // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnModAppliedOnClient(struct FGameplayTag& ModTag); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnModAppliedOnClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnCurieContainerAcquired_BP(struct FCurieContainerHandle CurieContainerHandle); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnCurieContainerAcquired_BP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleOnExplode(struct AController* LastDamageInstigator, struct AFortAthenaVehicle* Vehicle); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.HandleOnExplode // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOnStartCriticalHealth(struct AController* LastDamageInstigator); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.HandleOnStartCriticalHealth // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCollisionHitEffects(struct FVector& HitLocation, struct FVector& HitNormalImpulse, struct FVector& HitFrictionImpulse, struct FVector& HitNormal, struct AActor* HitActor, enum class EPhysicalSurface HitSurfaceType); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnCollisionHitEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnCollisionHitAudio(struct AActor* ActorHit, struct FVector Impact Point); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnCollisionHitAudio // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PawnExitSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.PawnExitSeat // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PawnEnterSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.PawnEnterSeat // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnExitLandscape(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnExitLandscape // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnterLandscape(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnEnterLandscape // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnIsSprintingChanged(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnIsSprintingChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void StartDriverCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartDriverCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopDriverCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopDriverCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CanHitLastDriver(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CanHitLastDriver // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Valet_BasicCar_Vehicle(int32_t EntryPoint); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ExecuteUbergraph_Valet_BasicCar_Vehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

