// BlueprintGeneratedClass OctopusVehicle.OctopusVehicle_C
// Size: 0x2728 (Inherited: 0x24e0)
struct AOctopusVehicle_C : AFortOctopusVehicle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24e0(0x08)
	struct UFortVehicleSeatWeaponComponent* FortVehicleSeatWeapon; // 0x24e8(0x08)
	struct UStaticMeshComponent* SeatCollisionSub1; // 0x24f0(0x08)
	struct UStaticMeshComponent* SeatCollisionSub0; // 0x24f8(0x08)
	struct UStaticMeshComponent* SeatCollision; // 0x2500(0x08)
	struct UStaticMeshComponent* Reticle; // 0x2508(0x08)
	struct UStaticMeshComponent* SM_Grapple_Rope; // 0x2510(0x08)
	struct UFortVehicleAudioVoice* AudioTowCable; // 0x2518(0x08)
	struct UFortVehicleAudioVoice* AudioWind1P; // 0x2520(0x08)
	struct UFortCollisionAudioComponent* BoostCollisionAudio; // 0x2528(0x08)
	struct UAudioComponent* AudioBoost; // 0x2530(0x08)
	struct UAudioComponent* AudioGetInOut; // 0x2538(0x08)
	struct UFortCollisionAudioComponent* NormalCollisionAudio; // 0x2540(0x08)
	struct UFortVehicleAudioVoice* AudioMovement; // 0x2548(0x08)
	struct UParticleSystemComponent* P_Octopus_DustFX; // 0x2550(0x08)
	struct UParticleSystemComponent* P_Octopus_Boost; // 0x2558(0x08)
	struct UParticleSystemComponent* P_Octopus_Coil_Idle_LowL; // 0x2560(0x08)
	struct UParticleSystemComponent* P_Octopus_Coil_Idle_TopL; // 0x2568(0x08)
	struct UParticleSystemComponent* P_Octopus_Coil_Idle_LowR; // 0x2570(0x08)
	struct UParticleSystemComponent* P_Octopus_Coil_Idle_TopR; // 0x2578(0x08)
	float ReturnTimeline_NewTrack_0_DACA08F0459073610F3E73A2BF465BDC; // 0x2580(0x04)
	enum class ETimelineDirection ReturnTimeline__Direction_DACA08F0459073610F3E73A2BF465BDC; // 0x2584(0x01)
	char pad_2585[0x3]; // 0x2585(0x03)
	struct UTimelineComponent* ReturnTimeline; // 0x2588(0x08)
	float BoostTimeline_NewTrack_0_02116727453CB8E3AEA5B3B956AF8B89; // 0x2590(0x04)
	float BoostTimeline_Rumble_02116727453CB8E3AEA5B3B956AF8B89; // 0x2594(0x04)
	enum class ETimelineDirection BoostTimeline__Direction_02116727453CB8E3AEA5B3B956AF8B89; // 0x2598(0x01)
	char pad_2599[0x7]; // 0x2599(0x07)
	struct UTimelineComponent* BoostTimeline; // 0x25a0(0x08)
	float Startup_Intensity_86604D5D46B5CFA68D4F23AE51FF8D5D; // 0x25a8(0x04)
	enum class ETimelineDirection Startup__Direction_86604D5D46B5CFA68D4F23AE51FF8D5D; // 0x25ac(0x01)
	char pad_25AD[0x3]; // 0x25ad(0x03)
	struct UTimelineComponent* Startup; // 0x25b0(0x08)
	struct TArray<struct UParticleSystemComponent*> IdleFXArray; // 0x25b8(0x10)
	double ImpactResetTimer; // 0x25c8(0x08)
	double BounceThreshold; // 0x25d0(0x08)
	bool bBoostCameraActive; // 0x25d8(0x01)
	char pad_25D9[0x7]; // 0x25d9(0x07)
	double BoostTimelinePlayRate; // 0x25e0(0x08)
	double BoostFOVOffset; // 0x25e8(0x08)
	double BoostCameraDistanceOffset; // 0x25f0(0x08)
	double BoostRumbleValue; // 0x25f8(0x08)
	double BoostReversePlayRate; // 0x2600(0x08)
	double BounceEffectsThreshold; // 0x2608(0x08)
	double InRangeMax; // 0x2610(0x08)
	double InMax; // 0x2618(0x08)
	double OutMax; // 0x2620(0x08)
	struct ULegacyCameraShake* BounceCameraShake; // 0x2628(0x08)
	bool Debug_NoCameraShake; // 0x2630(0x01)
	char pad_2631[0x7]; // 0x2631(0x07)
	struct APlayerController* DrivingPlayerController; // 0x2638(0x08)
	struct USoundBase* SoundOnGetIn; // 0x2640(0x08)
	struct USoundBase* SoundOnGetOut; // 0x2648(0x08)
	struct UGameplayEffect* GE_GrantWeapon; // 0x2650(0x08)
	struct FActiveGameplayEffectHandle GE_EnterTurret; // 0x2658(0x08)
	double PickaxeImpulseStrength; // 0x2660(0x08)
	bool bCanPlayBoostBounceAudio; // 0x2668(0x01)
	char pad_2669[0x7]; // 0x2669(0x07)
	struct USoundBase* SoundOnDamageThreshold; // 0x2670(0x08)
	struct FVector CableStart; // 0x2678(0x18)
	struct FVector CableEnd; // 0x2690(0x18)
	double RetractScaleStart; // 0x26a8(0x08)
	struct FTimerHandle CableLoopTimer; // 0x26b0(0x08)
	double OutgoingWiggleFactor; // 0x26b8(0x08)
	double WiggleAmount; // 0x26c0(0x08)
	struct UStaticMeshComponent* CableReturnMeshComponent; // 0x26c8(0x08)
	bool bTowhookMissed; // 0x26d0(0x01)
	char pad_26D1[0x7]; // 0x26d1(0x07)
	struct UParticleSystemComponent* InWaterFX; // 0x26d8(0x08)
	struct UAudioComponent* InWaterLoop; // 0x26e0(0x08)
	bool bHasRopeRetracted; // 0x26e8(0x01)
	char pad_26E9[0x3]; // 0x26e9(0x03)
	struct FActiveGameplayEffectHandle CooldownCueEvent; // 0x26ec(0x08)
	char pad_26F4[0x4]; // 0x26f4(0x04)
	struct UGameplayEffect* GE_Boost_Cooldown; // 0x26f8(0x08)
	struct FGameplayTag ImpactCue; // 0x2700(0x04)
	int32_t DamageStateIndex; // 0x2704(0x04)
	struct TArray<double> DamageStates; // 0x2708(0x10)
	struct TArray<double> DamageScalarParameterValues; // 0x2718(0x10)

	void Handle On Health Changed(); // Function OctopusVehicle.OctopusVehicle_C.Handle On Health Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveCooldownCueEvent(struct AFortPlayerPawn* Player Pawn); // Function OctopusVehicle.OctopusVehicle_C.RemoveCooldownCueEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddCooldownCueEvent(struct AFortPlayerPawn* Player Pawn); // Function OctopusVehicle.OctopusVehicle_C.AddCooldownCueEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function OctopusVehicle.OctopusVehicle_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Startup__FinishedFunc(); // Function OctopusVehicle.OctopusVehicle_C.Startup__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Startup__UpdateFunc(); // Function OctopusVehicle.OctopusVehicle_C.Startup__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void BoostTimeline__FinishedFunc(); // Function OctopusVehicle.OctopusVehicle_C.BoostTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BoostTimeline__UpdateFunc(); // Function OctopusVehicle.OctopusVehicle_C.BoostTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReturnTimeline__FinishedFunc(); // Function OctopusVehicle.OctopusVehicle_C.ReturnTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReturnTimeline__UpdateFunc(); // Function OctopusVehicle.OctopusVehicle_C.ReturnTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function OctopusVehicle.OctopusVehicle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBoostBegin(); // Function OctopusVehicle.OctopusVehicle_C.OnBoostBegin // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBoostEnd(); // Function OctopusVehicle.OctopusVehicle_C.OnBoostEnd // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPawnEnterVehicle(struct AFortPlayerPawn* PlayerPawn, int32_t SeatIdx); // Function OctopusVehicle.OctopusVehicle_C.OnPawnEnterVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPawnExitVehicle(struct AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName); // Function OctopusVehicle.OctopusVehicle_C.OnPawnExitVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBoostBounce(struct FVector& Location, struct FVector& Normal, float Force, struct AActor* HitActor, int32_t BounceCount); // Function OctopusVehicle.OctopusVehicle_C.OnBoostBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ImpactReset(); // Function OctopusVehicle.OctopusVehicle_C.ImpactReset // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BoostCameraBegin(); // Function OctopusVehicle.OctopusVehicle_C.BoostCameraBegin // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BoostCameraReverse(); // Function OctopusVehicle.OctopusVehicle_C.BoostCameraReverse // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReverseBoostTimeline(); // Function OctopusVehicle.OctopusVehicle_C.ReverseBoostTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CameraShake(double Scale); // Function OctopusVehicle.OctopusVehicle_C.CameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartDriverCameraShake(); // Function OctopusVehicle.OctopusVehicle_C.StartDriverCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHit(struct FVector& Location, struct FVector& Normal, float Force, struct AActor* HitActor); // Function OctopusVehicle.OctopusVehicle_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void StopCameraShake(); // Function OctopusVehicle.OctopusVehicle_C.StopCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GroundHit(double Scale); // Function OctopusVehicle.OctopusVehicle_C.GroundHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStopTick(); // Function OctopusVehicle.OctopusVehicle_C.OnStopTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetGrappleVisible(bool Visible); // Function OctopusVehicle.OctopusVehicle_C.SetGrappleVisible // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookAttached(); // Function OctopusVehicle.OctopusVehicle_C.TowhookAttached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookDetached(); // Function OctopusVehicle.OctopusVehicle_C.TowhookDetached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookShot(); // Function OctopusVehicle.OctopusVehicle_C.TowhookShot // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookLoop(); // Function OctopusVehicle.OctopusVehicle_C.TowhookLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function OctopusVehicle.OctopusVehicle_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged(float Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, struct AController* EventInstigator, struct AActor* DamageCauser); // Function OctopusVehicle.OctopusVehicle_C.OnDamaged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HitWithPickaxe(struct FVector HitDirection); // Function OctopusVehicle.OctopusVehicle_C.HitWithPickaxe // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ApplyCosmeticWrap(struct UAthenaItemWrapDefinition* LoadedWrap); // Function OctopusVehicle.OctopusVehicle_C.K2_ApplyCosmeticWrap // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Bounce Collision Audio Cooldown(); // Function OctopusVehicle.OctopusVehicle_C.Bounce Collision Audio Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function OctopusVehicle.OctopusVehicle_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void TowhookMissed(); // Function OctopusVehicle.OctopusVehicle_C.TowhookMissed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RetractCable(); // Function OctopusVehicle.OctopusVehicle_C.RetractCable // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredWaterVolume(struct FVector& WaterSurfacePoint); // Function OctopusVehicle.OctopusVehicle_C.OnEnteredWaterVolume // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterVolume(struct FVector& WaterSurfacePoint); // Function OctopusVehicle.OctopusVehicle_C.OnExitedWaterVolume // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void CheckWater(); // Function OctopusVehicle.OctopusVehicle_C.CheckWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateTargetPoint(bool bAimAssistHitsTarget, struct FVector& TargetPoint); // Function OctopusVehicle.OctopusVehicle_C.OnUpdateTargetPoint // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnHoldExitStarted(struct AFortPawn* ExitingPawn, float ExitDuration); // Function OctopusVehicle.OctopusVehicle_C.OnHoldExitStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnHoldExitStopped(struct AFortPawn* ExitingPawn); // Function OctopusVehicle.OctopusVehicle_C.OnHoldExitStopped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventOnTowhookAttached(); // Function OctopusVehicle.OctopusVehicle_C.EventOnTowhookAttached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowCooldownCue(struct AFortPlayerPawn* Pawn, float Duration); // Function OctopusVehicle.OctopusVehicle_C.ShowCooldownCue // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_OctopusVehicle(int32_t EntryPoint); // Function OctopusVehicle.OctopusVehicle_C.ExecuteUbergraph_OctopusVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

