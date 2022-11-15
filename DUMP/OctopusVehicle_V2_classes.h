// BlueprintGeneratedClass OctopusVehicle_V2.OctopusVehicle_V2_C
// Size: 0x2c20 (Inherited: 0x24e0)
struct AOctopusVehicle_V2_C : AFortOctopusVehicle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x24e0(0x08)
	struct UFortSoundIndicatorComponent* Towhook Sound Indicator; // 0x24e8(0x08)
	struct UNiagaraComponent* CoilDustVisuals; // 0x24f0(0x08)
	struct UAudioComponent* AudioBoost; // 0x24f8(0x08)
	struct UFortVehicleAudioVoice* AudioMovement; // 0x2500(0x08)
	struct UFortVehicleAudioVoice* AudioTowCable; // 0x2508(0x08)
	struct UFortVehicleAudioVoice* AudioWind1P; // 0x2510(0x08)
	struct UAudioComponent* AudioGetInOut; // 0x2518(0x08)
	struct UFortVehicleFuelComponent* FortVehicleFuel; // 0x2520(0x08)
	struct UFortVehicleSeatWeaponComponent* FortVehicleSeatWeapon; // 0x2528(0x08)
	struct UStaticMeshComponent* Reticle; // 0x2530(0x08)
	struct UStaticMeshComponent* SM_Grapple_Rope; // 0x2538(0x08)
	struct UFortCollisionAudioComponent* BoostCollisionAudio; // 0x2540(0x08)
	struct UFortCollisionAudioComponent* NormalCollisionAudio; // 0x2548(0x08)
	float Coaster_Speed_FOV_Timeline_Alpha_7A4FACBB448DF662BF75038C9A473133; // 0x2550(0x04)
	enum class ETimelineDirection Coaster_Speed_FOV_Timeline__Direction_7A4FACBB448DF662BF75038C9A473133; // 0x2554(0x01)
	char pad_2555[0x3]; // 0x2555(0x03)
	struct UTimelineComponent* Coaster Speed FOV Timeline; // 0x2558(0x08)
	float Coaster_Lurch_FOV_Timeline_BoostCurve_9A0AF05E415326DC180215B4726545DE; // 0x2560(0x04)
	enum class ETimelineDirection Coaster_Lurch_FOV_Timeline__Direction_9A0AF05E415326DC180215B4726545DE; // 0x2564(0x01)
	char pad_2565[0x3]; // 0x2565(0x03)
	struct UTimelineComponent* Coaster Lurch FOV Timeline; // 0x2568(0x08)
	enum class ETimelineDirection Spark_Gate_Timeline__Direction_4CFDE7E14FA70F338508FDBF2454042F; // 0x2570(0x01)
	char pad_2571[0x7]; // 0x2571(0x07)
	struct UTimelineComponent* Spark Gate Timeline; // 0x2578(0x08)
	enum class ETimelineDirection Splash_Gate_Timeline__Direction_0E9F1AF24AF99E17DF4811B80F19F2E9; // 0x2580(0x01)
	char pad_2581[0x7]; // 0x2581(0x07)
	struct UTimelineComponent* Splash Gate Timeline; // 0x2588(0x08)
	float ReturnTimeline_NewTrack_0_5F8AF51948CB96BC977049A2E1347BB6; // 0x2590(0x04)
	enum class ETimelineDirection ReturnTimeline__Direction_5F8AF51948CB96BC977049A2E1347BB6; // 0x2594(0x01)
	char pad_2595[0x3]; // 0x2595(0x03)
	struct UTimelineComponent* ReturnTimeline; // 0x2598(0x08)
	float BoostTimeline_NewTrack_0_8E89D6904E79787B53F52282B84BA6ED; // 0x25a0(0x04)
	float BoostTimeline_Rumble_8E89D6904E79787B53F52282B84BA6ED; // 0x25a4(0x04)
	enum class ETimelineDirection BoostTimeline__Direction_8E89D6904E79787B53F52282B84BA6ED; // 0x25a8(0x01)
	char pad_25A9[0x7]; // 0x25a9(0x07)
	struct UTimelineComponent* BoostTimeline; // 0x25b0(0x08)
	float Startup_Intensity_7084D1F046EBD5CE3BC1209DB97D090C; // 0x25b8(0x04)
	enum class ETimelineDirection Startup__Direction_7084D1F046EBD5CE3BC1209DB97D090C; // 0x25bc(0x01)
	char pad_25BD[0x3]; // 0x25bd(0x03)
	struct UTimelineComponent* Startup; // 0x25c0(0x08)
	struct TArray<struct UParticleSystemComponent*> IdleFXArray; // 0x25c8(0x10)
	double ImpactResetTimer; // 0x25d8(0x08)
	double BounceThreshold; // 0x25e0(0x08)
	bool bBoostCameraActive; // 0x25e8(0x01)
	char pad_25E9[0x7]; // 0x25e9(0x07)
	double BoostTimelinePlayRate; // 0x25f0(0x08)
	double BoostFOVOffset; // 0x25f8(0x08)
	double BoostCameraDistanceOffset; // 0x2600(0x08)
	double BoostRumbleValue; // 0x2608(0x08)
	double BoostReversePlayRate; // 0x2610(0x08)
	double BounceEffectsThreshold; // 0x2618(0x08)
	double InRangeMax; // 0x2620(0x08)
	double InMax; // 0x2628(0x08)
	double OutMax; // 0x2630(0x08)
	struct ULegacyCameraShake* BounceCameraShake; // 0x2638(0x08)
	bool Debug_NoCameraShake; // 0x2640(0x01)
	char pad_2641[0x7]; // 0x2641(0x07)
	struct APlayerController* DrivingPlayerController; // 0x2648(0x08)
	struct USoundBase* SoundOnGetIn; // 0x2650(0x08)
	struct USoundBase* SoundOnGetOut; // 0x2658(0x08)
	struct UGameplayEffect* GE_GrantWeapon; // 0x2660(0x08)
	struct FActiveGameplayEffectHandle GE_EnterTurret; // 0x2668(0x08)
	double PickaxeImpulseStrength; // 0x2670(0x08)
	bool bCanPlayBoostBounceAudio; // 0x2678(0x01)
	char pad_2679[0x7]; // 0x2679(0x07)
	struct USoundBase* SoundOnDamageThreshold; // 0x2680(0x08)
	struct FVector CableStart; // 0x2688(0x18)
	struct FVector CableEnd; // 0x26a0(0x18)
	double RetractScaleStart; // 0x26b8(0x08)
	struct FTimerHandle CableLoopTimer; // 0x26c0(0x08)
	double OutgoingWiggleFactor; // 0x26c8(0x08)
	double WiggleAmount; // 0x26d0(0x08)
	struct UStaticMeshComponent* CableReturnMeshComponent; // 0x26d8(0x08)
	bool bTowhookMissed; // 0x26e0(0x01)
	char pad_26E1[0x7]; // 0x26e1(0x07)
	struct UParticleSystemComponent* InWaterFX; // 0x26e8(0x08)
	struct UAudioComponent* InWaterLoop; // 0x26f0(0x08)
	bool bHasRopeRetracted; // 0x26f8(0x01)
	char pad_26F9[0x3]; // 0x26f9(0x03)
	struct FActiveGameplayEffectHandle CooldownCueEvent; // 0x26fc(0x08)
	char pad_2704[0x4]; // 0x2704(0x04)
	struct UGameplayEffect* GE_Boost_Cooldown; // 0x2708(0x08)
	struct FGameplayTag ImpactCue; // 0x2710(0x04)
	int32_t DamageStateIndex; // 0x2714(0x04)
	struct TArray<double> DamageStates; // 0x2718(0x10)
	struct TArray<double> DamageScalarParameterValues; // 0x2728(0x10)
	bool bGlassBroken; // 0x2738(0x01)
	char pad_2739[0x7]; // 0x2739(0x07)
	struct AFortWaterBodyActor* Water Body; // 0x2740(0x08)
	char pad_2748[0x8]; // 0x2748(0x08)
	struct FSphericalPontoon Pontoon; // 0x2750(0x2d0)
	struct UNiagaraComponent* Water Splash FX Niagra; // 0x2a20(0x08)
	struct UNiagaraSystem* Looping Water FX Asset; // 0x2a28(0x08)
	struct UNiagaraComponent* Looping Water FX Component; // 0x2a30(0x08)
	bool Is in Water; // 0x2a38(0x01)
	char pad_2A39[0x3]; // 0x2a39(0x03)
	struct FGameplayTag GC Enter Water; // 0x2a3c(0x04)
	struct FMulticastInlineDelegate Dispatch_BoostStarted; // 0x2a40(0x10)
	struct FMulticastInlineDelegate Dispatch_BoostEnded; // 0x2a50(0x10)
	struct FMulticastInlineDelegate Dispatch_FuelChanged; // 0x2a60(0x10)
	struct FMulticastInlineDelegate Dispatch_FuelEmpty; // 0x2a70(0x10)
	struct FGameplayTag GC Exit Water; // 0x2a80(0x04)
	char pad_2A84[0x4]; // 0x2a84(0x04)
	struct FGameplayTagContainer HideHUD_Tag; // 0x2a88(0x20)
	struct FTimerHandle Water FX Timer; // 0x2aa8(0x08)
	bool Can Splash; // 0x2ab0(0x01)
	char pad_2AB1[0x7]; // 0x2ab1(0x07)
	double WaterSpeedAudio; // 0x2ab8(0x08)
	struct FTimerHandle HandleWaterAudio; // 0x2ac0(0x08)
	struct UNiagaraComponent* BoostFX; // 0x2ac8(0x08)
	bool Can Spark; // 0x2ad0(0x01)
	bool Coil FX Locked; // 0x2ad1(0x01)
	char pad_2AD2[0x2]; // 0x2ad2(0x02)
	struct FGameplayTag Sparks FX Cue Tag; // 0x2ad4(0x04)
	struct FMulticastInlineDelegate Dispatch_CoasterDestruction; // 0x2ad8(0x10)
	struct FGameplayTag Riding Coaster Tag; // 0x2ae8(0x04)
	char pad_2AEC[0x4]; // 0x2aec(0x04)
	double Coaster FOV Speed Offset; // 0x2af0(0x08)
	double Coaster FOV Timeline Play Rate; // 0x2af8(0x08)
	double Speed Coaster FOV Target; // 0x2b00(0x08)
	double Previous FOV; // 0x2b08(0x08)
	struct FTimerHandle Coaster FOV Timer; // 0x2b10(0x08)
	struct FVector On Hit Location; // 0x2b18(0x18)
	struct FVector On Hit Normal; // 0x2b30(0x18)
	double On Hit Force; // 0x2b48(0x08)
	struct AActor* On Hit Actor; // 0x2b50(0x08)
	struct FScalableFloat Coaster FOV Multiplier; // 0x2b58(0x28)
	struct UAudioComponent* CoasterBoostAudio; // 0x2b80(0x08)
	bool Can Spawn Coaster Boost Noise; // 0x2b88(0x01)
	char pad_2B89[0x7]; // 0x2b89(0x07)
	double Coaster Boost Cooldown; // 0x2b90(0x08)
	double Min Speed Increase; // 0x2b98(0x08)
	double Speed Coaster Audio Target; // 0x2ba0(0x08)
	double Previous Audio Target; // 0x2ba8(0x08)
	struct FGameplayTagContainer Actors to Handle Tags; // 0x2bb0(0x20)
	struct UAudioComponent* TowhookInAirLoop; // 0x2bd0(0x08)
	bool NewVar; // 0x2bd8(0x01)
	char pad_2BD9[0x7]; // 0x2bd9(0x07)
	struct USoundBase* TowhookImpactSound; // 0x2be0(0x08)
	struct USoundBase* TowhookDriverAttachedSound; // 0x2be8(0x08)
	struct USoundBase* DestroySound; // 0x2bf0(0x08)
	struct FScalableFloat TowhookRangeOverride; // 0x2bf8(0x28)

	void RefreshTowhookRange(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.RefreshTowhookRange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_NewVar(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnRep_NewVar // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTowhookInAirAudio(bool ShouldPlay); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.UpdateTowhookInAirAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisplayTowhook Audio Visualizer(struct UAudioComponent* InTowhookSoundPlayed); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.DisplayTowhook Audio Visualizer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Should Update Speed Target(double Target, bool& Should Update); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Should Update Speed Target // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Coaster Boost Sound(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Coaster Boost Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Spawn Sparks VFX(struct AActor* Hit Actor, struct FVector Actor Location, struct FVector Actor Normal, struct FGameplayTag GameplayCue Tag); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Spawn Sparks VFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Boost VFX(bool Activate); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Boost VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateWaterAudioParam(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.UpdateWaterAudioParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Exit Water(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.On Exit Water // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleHUDElements(struct AActor* Actor, bool ShouldHide); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ToggleHUDElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Enter Water(struct AFortWaterBodyActor* Water Body); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.On Enter Water // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Update Water(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.On Update Water // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Damage On Death(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Damage On Death // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Damage Driver(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Damage Driver // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Handle On Health Changed(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Handle On Health Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveCooldownCueEvent(struct AFortPlayerPawn* Player Pawn); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.RemoveCooldownCueEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddCooldownCueEvent(struct AFortPlayerPawn* Player Pawn); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.AddCooldownCueEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Startup__FinishedFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Startup__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Startup__UpdateFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Startup__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void BoostTimeline__FinishedFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.BoostTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BoostTimeline__UpdateFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.BoostTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReturnTimeline__FinishedFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ReturnTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReturnTimeline__UpdateFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ReturnTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Splash Gate Timeline__FinishedFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Splash Gate Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Splash Gate Timeline__UpdateFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Splash Gate Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Spark Gate Timeline__FinishedFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Spark Gate Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Spark Gate Timeline__UpdateFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Spark Gate Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Coaster Lurch FOV Timeline__FinishedFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Coaster Lurch FOV Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Coaster Lurch FOV Timeline__UpdateFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Coaster Lurch FOV Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Coaster Speed FOV Timeline__FinishedFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Coaster Speed FOV Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Coaster Speed FOV Timeline__UpdateFunc(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Coaster Speed FOV Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Removed_58EED64B4B7595D0F1617B952EF18F7C(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Removed_58EED64B4B7595D0F1617B952EF18F7C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBoostBegin(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnBoostBegin // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBoostEnd(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnBoostEnd // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPawnEnterVehicle(struct AFortPlayerPawn* PlayerPawn, int32_t SeatIdx); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnPawnEnterVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPawnExitVehicle(struct AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnPawnExitVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBoostBounce(struct FVector& Location, struct FVector& Normal, float Force, struct AActor* HitActor, int32_t BounceCount); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnBoostBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ImpactReset(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ImpactReset // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BoostCameraBegin(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.BoostCameraBegin // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BoostCameraReverse(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.BoostCameraReverse // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReverseBoostTimeline(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ReverseBoostTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CameraShake(double Scale); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.CameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartDriverCameraShake(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.StartDriverCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHit(struct FVector& Location, struct FVector& Normal, float Force, struct AActor* HitActor); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void StopCameraShake(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.StopCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GroundHit(double Scale); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.GroundHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStopTick(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnStopTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetGrappleVisible(bool Visible); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.SetGrappleVisible // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookAttached(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.TowhookAttached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookDetached(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.TowhookDetached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookShot(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.TowhookShot // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookLoop(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.TowhookLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged(float Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, struct AController* EventInstigator, struct AActor* DamageCauser); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnDamaged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HitWithPickaxe(struct FVector HitDirection); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.HitWithPickaxe // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ApplyCosmeticWrap(struct UAthenaItemWrapDefinition* LoadedWrap); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.K2_ApplyCosmeticWrap // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Bounce Collision Audio Cooldown(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Bounce Collision Audio Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void TowhookMissed(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.TowhookMissed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RetractCable(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.RetractCable // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckWater(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.CheckWater // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateTargetPoint(bool bAimAssistHitsTarget, struct FVector& TargetPoint); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnUpdateTargetPoint // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnHoldExitStarted(struct AFortPawn* ExitingPawn, float ExitDuration); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnHoldExitStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnHoldExitStopped(struct AFortPawn* ExitingPawn); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnHoldExitStopped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventOnTowhookAttached(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.EventOnTowhookAttached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowCooldownCue(struct AFortPlayerPawn* Pawn, float Duration); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ShowCooldownCue // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OctopusVehicle_V2_FortVehicleFuel_K2Node_ComponentBoundEvent_0_OnFortAthenaVehicleOutOfFuel__DelegateSignature(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.BndEvt__OctopusVehicle_V2_FortVehicleFuel_K2Node_ComponentBoundEvent_0_OnFortAthenaVehicleOutOfFuel__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Turn Off Dust(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Turn Off Dust // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Coaster FOV(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Coaster FOV // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateWaterAudio(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.UpdateWaterAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Speed to FOV(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Update Speed to FOV // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FOV Reset(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.FOV Reset // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Coaster Boost SFX(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Coaster Boost SFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reset Coaster Boost SFX(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Reset Coaster Boost SFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reset Dust(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Reset Dust // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_OctopusVehicle_V2(int32_t EntryPoint); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.ExecuteUbergraph_OctopusVehicle_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void Dispatch_CoasterDestruction__DelegateSignature(struct FVector Location, struct FVector Normal, double Force, struct AActor* Hit Actor); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Dispatch_CoasterDestruction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Dispatch_FuelEmpty__DelegateSignature(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Dispatch_FuelEmpty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Dispatch_FuelChanged__DelegateSignature(double CurrentFuelPercent); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Dispatch_FuelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Dispatch_BoostEnded__DelegateSignature(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Dispatch_BoostEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Dispatch_BoostStarted__DelegateSignature(); // Function OctopusVehicle_V2.OctopusVehicle_V2_C.Dispatch_BoostStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

