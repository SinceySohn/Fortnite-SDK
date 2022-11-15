// BlueprintGeneratedClass B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C
// Size: 0xbe8 (Inherited: 0x9d8)
struct AB_BGA_Athena_SilverBlazer_V2_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0x9e0(0x08)
	struct USphereEdgeAudioComponent_C* SphereEdgeAudioComponent; // 0x9e8(0x08)
	struct USphereComponent* CollisionSphere; // 0x9f0(0x08)
	struct UParticleSystemComponent* P_ShieldBubble_SilverBlazer_Deploy; // 0x9f8(0x08)
	struct USceneComponent* Root; // 0xa00(0x08)
	struct UStaticMeshComponent* SafeZone; // 0xa08(0x08)
	float Timeline_Warning_WarningEmissive_0F672540439858CBFFDC68AC167DD1A5; // 0xa10(0x04)
	enum class ETimelineDirection Timeline_Warning__Direction_0F672540439858CBFFDC68AC167DD1A5; // 0xa14(0x01)
	char pad_A15[0x3]; // 0xa15(0x03)
	struct UTimelineComponent* Timeline_Warning; // 0xa18(0x08)
	float TimeLine_Death_Opacity_DABF44C9495658D1ACA2669E712E5AB3; // 0xa20(0x04)
	float TimeLine_Death_ShrinkWPO_DABF44C9495658D1ACA2669E712E5AB3; // 0xa24(0x04)
	float TimeLine_Death_FadeOut_DABF44C9495658D1ACA2669E712E5AB3; // 0xa28(0x04)
	enum class ETimelineDirection TimeLine_Death__Direction_DABF44C9495658D1ACA2669E712E5AB3; // 0xa2c(0x01)
	char pad_A2D[0x3]; // 0xa2d(0x03)
	struct UTimelineComponent* TimeLine_Death; // 0xa30(0x08)
	float ScaleSafeZone_DeployDoneEmis_EFFA995D4F7A89E42AA0A3963AD1FFE2; // 0xa38(0x04)
	float ScaleSafeZone_DeployScanIn_EFFA995D4F7A89E42AA0A3963AD1FFE2; // 0xa3c(0x04)
	float ScaleSafeZone_ScaleSafeZone_EFFA995D4F7A89E42AA0A3963AD1FFE2; // 0xa40(0x04)
	enum class ETimelineDirection ScaleSafeZone__Direction_EFFA995D4F7A89E42AA0A3963AD1FFE2; // 0xa44(0x01)
	char pad_A45[0x3]; // 0xa45(0x03)
	struct UTimelineComponent* ScaleSafeZone; // 0xa48(0x08)
	struct FScalableFloat LifespanTime; // 0xa50(0x28)
	struct USoundBase* SoundDeactivate; // 0xa78(0x08)
	struct UParticleSystem* FX_Death; // 0xa80(0x08)
	struct UParticleSystem* FX_Activate; // 0xa88(0x08)
	struct FScalableFloat MaxScale; // 0xa90(0x28)
	struct USoundBase* SoundHitSafeZone; // 0xab8(0x08)
	struct UParticleSystem* FX_HitSafeZone; // 0xac0(0x08)
	bool BeginSafeZone; // 0xac8(0x01)
	char pad_AC9[0x7]; // 0xac9(0x07)
	struct USoundBase* SoundActivate; // 0xad0(0x08)
	bool FinishedScaling; // 0xad8(0x01)
	char pad_AD9[0x7]; // 0xad9(0x07)
	struct FScalableFloat InitialVelocitySlow; // 0xae0(0x28)
	struct FScalableFloat ScaleDuration; // 0xb08(0x28)
	struct UParticleSystemComponent* FX_SafezoneDeploy; // 0xb30(0x08)
	struct FVector HitWaveLocation; // 0xb38(0x18)
	struct UParticleSystemComponent* FX_SafezoneImpact; // 0xb50(0x08)
	double Damage; // 0xb58(0x08)
	bool IsEnding; // 0xb60(0x01)
	char pad_B61[0x7]; // 0xb61(0x07)
	struct UParticleSystemComponent* FX_OnPlayer; // 0xb68(0x08)
	struct FVector PlayerGoesInLoc; // 0xb70(0x18)
	struct FVector PlayerGoesOutLoc; // 0xb88(0x18)
	struct UParticleSystemComponent* FX_OutOfSafezone; // 0xba0(0x08)
	struct TScriptInterface<ICameraLensEffectInterface> RunOutLensEffectInterface; // 0xba8(0x10)
	struct TScriptInterface<ICameraLensEffectInterface> RunInLensEffectInterface; // 0xbb8(0x10)
	struct TArray<enum class EFortTeamAffiliation> CanSeeIndicator; // 0xbc8(0x10)
	struct TArray<struct AActor*> ActorsToIgnoreWhileMoving; // 0xbd8(0x10)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SetIgnoreActor(struct AActor* Actor); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.SetIgnoreActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set_RippleFX_Param(struct FVector HitWave-Loc, double HitWave-SizeMultiplierOuterRing, double HitWave-SizeMultiplierInnerRing, double HitWave-DurationNew, double HitGridBrightness); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.Set_RippleFX_Param // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set_FX_Pos(struct FVector Pos); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.Set_FX_Pos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetResistenceInformation(struct FVector& BasePos, double& Radius, double& ResistanceLength); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.GetResistenceInformation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ScaleSafeZone__FinishedFunc(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.ScaleSafeZone__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void ScaleSafeZone__UpdateFunc(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.ScaleSafeZone__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void TimeLine_Death__FinishedFunc(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.TimeLine_Death__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void TimeLine_Death__UpdateFunc(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.TimeLine_Death__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void TimeLine_Death__TriggerDeathFX__EventFunc(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.TimeLine_Death__TriggerDeathFX__EventFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_Warning__FinishedFunc(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.Timeline_Warning__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_Warning__UpdateFunc(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.Timeline_Warning__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_Warning__Audio Pulse__EventFunc(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.Timeline_Warning__Audio Pulse__EventFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DeathCosmetics(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.DeathCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void End(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void EventScaleSafeZone(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.EventScaleSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HitByRocket(struct FVector ImpactLoc); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.HitByRocket // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HitByShotgun(struct FVector ImpactLoc); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.HitByShotgun // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayWarningEffectBeforeShieldGoAway(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.PlayWarningEffectBeforeShieldGoAway // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void RunIn(struct AActor* Actor); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.RunIn // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RunOut(struct AActor* Actor); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.RunOut // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__B_BGA_Athena_SilverBlazer_V2_SafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.BndEvt__B_BGA_Athena_SilverBlazer_V2_SafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PlaySpawnSound(); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.PlaySpawnSound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMoveIgnoreActorDestroyed(struct AActor* DestroyedActor); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.OnMoveIgnoreActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_BGA_Athena_SilverBlazer_V2(int32_t EntryPoint); // Function B_BGA_Athena_SilverBlazer_V2.B_BGA_Athena_SilverBlazer_V2_C.ExecuteUbergraph_B_BGA_Athena_SilverBlazer_V2 // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

