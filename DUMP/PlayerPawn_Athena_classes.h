// BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C
// Size: 0x5d19 (Inherited: 0x5450)
struct APlayerPawn_Athena_C : APlayerPawn_Athena_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5450(0x08)
	struct UFortContrailsComponent* FortContrails; // 0x5458(0x08)
	struct UFortUnderwaterDamageComponent* FortUnderwaterDamage; // 0x5460(0x08)
	float Timeline_0_BlendWeight_A4943458400C3662DB243099F9EAC7E8; // 0x5468(0x04)
	enum class ETimelineDirection Timeline_0__Direction_A4943458400C3662DB243099F9EAC7E8; // 0x546c(0x01)
	char pad_546D[0x3]; // 0x546d(0x03)
	struct UTimelineComponent* ; // 0x5470(0x08)
	struct USkeletalMeshComponent* TargetHead; // 0x5478(0x08)
	struct USkeletalMeshComponent* TargetBody; // 0x5480(0x08)
	struct TArray<struct UMaterialInterface*> ; // 0x5488(0x10)
	struct TArray<struct UMaterialInterface*> ; // 0x5498(0x10)
	struct FGameplayTagContainer TC_FlakVest; // 0x54a8(0x20)
	struct FGameplayEventData Event Data; // 0x54c8(0xb0)
	struct FGameplayTag EventSpawnEffect; // 0x5578(0x04)
	bool IsMale; // 0x557c(0x01)
	char pad_557D[0x3]; // 0x557d(0x03)
	struct AFortWeapon* MenuGoingCommandowWeapon; // 0x5580(0x08)
	struct USoundBase* SafeZonePassThroughSound; // 0x5588(0x08)
	bool bHasBeenOutsideSafeZone; // 0x5590(0x01)
	char pad_5591[0x3]; // 0x5591(0x03)
	struct FLinearColor ThreatColor; // 0x5594(0x10)
	char pad_55A4[0x4]; // 0x55a4(0x04)
	struct USoundBase* PlayerKilledSound; // 0x55a8(0x08)
	struct UParticleSystemComponent* WindDebrisParticles; // 0x55b0(0x08)
	struct UParticleSystemComponent* FallingRainParticles; // 0x55b8(0x08)
	struct UParticleSystemComponent* StormAuraParticles; // 0x55c0(0x08)
	struct FVector LightningSpawnLocation; // 0x55c8(0x18)
	double LightningIntensityMin; // 0x55e0(0x08)
	double LightningIntensityMax; // 0x55e8(0x08)
	struct AActor* SafeZoneActor; // 0x55f0(0x08)
	double LightningIntensity; // 0x55f8(0x08)
	struct UPointLightComponent* RandomLightningLight; // 0x5600(0x08)
	double LightningTimelinePlaySpeedMin; // 0x5608(0x08)
	double LightningTimelinePlaySpeedMax; // 0x5610(0x08)
	double LightningFlashDiameter; // 0x5618(0x08)
	double LightningFlashHeight; // 0x5620(0x08)
	double LightningFlashRepeatDelayMin; // 0x5628(0x08)
	double LightningFlashRepeatDelayMax; // 0x5630(0x08)
	struct AEmitterCameraLensEffectBase* RainCameraLensParticles; // 0x5638(0x08)
	double %ChanceOfLightningMesh; // 0x5640(0x08)
	bool ShowInvulnerableVisuals; // 0x5648(0x01)
	char pad_5649[0x7]; // 0x5649(0x07)
	struct UAudioComponent* StormAudioLoop_Inst; // 0x5650(0x08)
	double StormAudioVolume; // 0x5658(0x08)
	struct UAudioComponent* FallingAudioLoop_Inst; // 0x5660(0x08)
	bool bIsPlayingFallingSound; // 0x5668(0x01)
	char pad_5669[0x7]; // 0x5669(0x07)
	double PlayerAttributes_Speed_Walk; // 0x5670(0x08)
	double PlayerAttributes_Speed_Run; // 0x5678(0x08)
	double PlayerAttributes_Speed_Sprint; // 0x5680(0x08)
	int32_t MaxTrailsLOD; // 0x5688(0x04)
	char pad_568C[0x4]; // 0x568c(0x04)
	struct UPostProcessComponent* MobilePostProcess; // 0x5690(0x08)
	bool bIsOutsideSafeZoneCached; // 0x5698(0x01)
	char pad_5699[0x7]; // 0x5699(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> ResOutMaterials; // 0x56a0(0x10)
	struct ADuplicateResOutMesh_C* RezInFXActor; // 0x56b0(0x08)
	bool bQueueRezIn; // 0x56b8(0x01)
	char pad_56B9[0x7]; // 0x56b9(0x07)
	struct ADuplicateResOutMesh_C* RezOutFXActor; // 0x56c0(0x08)
	bool bQueueRezOut; // 0x56c8(0x01)
	bool bWasEverInWarmUp; // 0x56c9(0x01)
	bool bStormAudioCleanedUp; // 0x56ca(0x01)
	char pad_56CB[0x5]; // 0x56cb(0x05)
	struct FTransform Box Local Transform; // 0x56d0(0x60)
	double BoundsRadius; // 0x5730(0x08)
	struct UPointLightComponent* TeleportationPointLight; // 0x5738(0x08)
	double MaxLightIntensity; // 0x5740(0x08)
	struct FName Socket_MeshTop; // 0x5748(0x04)
	struct FName Socket_MeshBot; // 0x574c(0x04)
	struct FName MIDParam_Transition; // 0x5750(0x04)
	struct FName MIDParam_DissolvePercent; // 0x5754(0x04)
	struct FName MIDParam_DissolveDirection; // 0x5758(0x04)
	struct FName MIDParam_DissolveBaseLoc; // 0x575c(0x04)
	struct FName MIDParam_DissolveDistance; // 0x5760(0x04)
	struct FName MIDParam_DissolveFirstSpawn; // 0x5764(0x04)
	struct UMaterialInterface* Mat_CharacterDissolve; // 0x5768(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DissolveMIDs; // 0x5770(0x10)
	bool bUseNewTeleportFX; // 0x5780(0x01)
	char pad_5781[0x3]; // 0x5781(0x03)
	struct FGameplayTag OutsideSafeZoneGameplayCueTag; // 0x5784(0x04)
	int32_t SafeZonePhase; // 0x5788(0x04)
	int32_t WhichSafeZoneTag; // 0x578c(0x04)
	bool bOutsideSafeZoneGameplayCueActive; // 0x5790(0x01)
	char pad_5791[0x7]; // 0x5791(0x07)
	struct FScalableFloat SafeZoneDamageScalableFloat; // 0x5798(0x28)
	bool bFrontendPartyInProgress; // 0x57c0(0x01)
	bool bLockOnInteractionComplete; // 0x57c1(0x01)
	char pad_57C2[0x6]; // 0x57c2(0x06)
	struct FMulticastInlineDelegate ResIn; // 0x57c8(0x10)
	struct FMulticastInlineDelegate ResOut; // 0x57d8(0x10)
	struct FMulticastInlineDelegate SwingRight; // 0x57e8(0x10)
	struct FMulticastInlineDelegate SwingLeft; // 0x57f8(0x10)
	bool bSkeletalArrayReady; // 0x5808(0x01)
	char pad_5809[0x3]; // 0x5809(0x03)
	int32_t CurDissolveSetupAttempt; // 0x580c(0x04)
	struct USoundBase* DBNOEnterSound; // 0x5810(0x08)
	struct FMulticastInlineDelegate onFadeToWhiteTeleported; // 0x5818(0x10)
	bool Is_Ashton; // 0x5828(0x01)
	char pad_5829[0x7]; // 0x5829(0x07)
	struct UParticleSystemComponent* Ashton; // 0x5830(0x08)
	struct FMulticastInlineDelegate SwingRightEnd; // 0x5838(0x10)
	struct FMulticastInlineDelegate SwingLeftEnd; // 0x5848(0x10)
	struct FGameplayTag PhoneGhostCue; // 0x5858(0x04)
	struct FGameplayTag WhiteoutCue; // 0x585c(0x04)
	struct FGameplayTag OutsideSafeZoneCue; // 0x5860(0x04)
	struct FGameplayTag OutsideSafeZone2Cue; // 0x5864(0x04)
	struct FGameplayTag OutsideSafeZone3Cue; // 0x5868(0x04)
	bool PlayRespawnFXOnSpawn; // 0x586c(0x01)
	char pad_586D[0x3]; // 0x586d(0x03)
	struct AFortPlayerPawnAthena* PlayerPawnAthena; // 0x5870(0x08)
	struct FMulticastInlineDelegate SwingRight2; // 0x5878(0x10)
	struct FMulticastInlineDelegate SwingLeft2; // 0x5888(0x10)
	bool TestProceduralWaterInIsolation; // 0x5898(0x01)
	bool ; // 0x5899(0x01)
	bool Is First Water Body; // 0x589a(0x01)
	bool Is Last Water Body; // 0x589b(0x01)
	char pad_589C[0x4]; // 0x589c(0x04)
	double AccumulatedNormalizedDiveSpeed; // 0x58a0(0x08)
	struct FGameplayTag WaterSprintBoostTag; // 0x58a8(0x04)
	char pad_58AC[0x4]; // 0x58ac(0x04)
	struct FMulticastInlineDelegate CCPM_isHiddenInProp; // 0x58b0(0x10)
	struct TMap<struct UObject*, struct FPawnHighlight> PawnHighlights; // 0x58c0(0x50)
	struct UObject* Current Highlight Source; // 0x5910(0x08)
	double Current Highlight Priority; // 0x5918(0x08)
	struct FPawnHighlight Invulnerable Highlight; // 0x5920(0x30)
	struct FFCreativeEffectColorIndex LastCreativeEffectColorIndex; // 0x5950(0x08)
	bool IsGalileo; // 0x5958(0x01)
	char pad_5959[0x7]; // 0x5959(0x07)
	struct FScalableFloat HotFixSnow; // 0x5960(0x28)
	struct TSet<struct FName> NoSnowPlaylists; // 0x5988(0x50)
	struct FGameplayTag GalileoPlaylistTag; // 0x59d8(0x04)
	char pad_59DC[0x4]; // 0x59dc(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> WeaponMIDs; // 0x59e0(0x10)
	int32_t AmountOfTimesToAttemptRestoreMats; // 0x59f0(0x04)
	struct FGameplayTag TC_PawnAthenaNPC; // 0x59f4(0x04)
	double HitGlowBrightnessScalar; // 0x59f8(0x08)
	struct TArray<struct UMaterialInterface*> CurrentWeaponMaterials; // 0x5a00(0x10)
	struct TArray<struct USkeletalMeshComponent*> CurrentWeaponMeshes; // 0x5a10(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> WeaponDissolveMIDs; // 0x5a20(0x10)
	double HitGlowBrightnessScalar_Mobile; // 0x5a30(0x08)
	struct FGameplayTag TC_PawnAthenaDecoy; // 0x5a38(0x04)
	char pad_5A3C[0x4]; // 0x5a3c(0x04)
	double ScaleRate; // 0x5a40(0x08)
	struct FGameplayTagContainer TetherQuestTag; // 0x5a48(0x20)
	struct FName FirefliesTag; // 0x5a68(0x04)
	char pad_5A6C[0x4]; // 0x5a6c(0x04)
	struct FTransform RightSideRim_Transform; // 0x5a70(0x60)
	struct USpotLightComponent* Right Side Rim Light; // 0x5ad0(0x08)
	double Rim light Shadow Bias; // 0x5ad8(0x08)
	double Rim Light Attenuation Radius; // 0x5ae0(0x08)
	double Rim Light Intensity; // 0x5ae8(0x08)
	struct FRotator PlayerAimRotation; // 0x5af0(0x18)
	struct FScalableFloat ControlRotationReplicationTickRate; // 0x5b08(0x28)
	struct FGameplayTag Elimination Rez Sequence GC; // 0x5b30(0x04)
	struct FGameplayTag Creative Respawn Teleportation GC; // 0x5b34(0x04)
	struct FGameplayTag Teleport In GC; // 0x5b38(0x04)
	char pad_5B3C[0x4]; // 0x5b3c(0x04)
	double RimlightDistanceFromCamera; // 0x5b40(0x08)
	double RimlightOffsetFromCamera; // 0x5b48(0x08)
	struct FLinearColor Rim Light Color - Night; // 0x5b50(0x10)
	struct FLinearColor Rim Light Color - Day; // 0x5b60(0x10)
	struct FGameplayTag PhoneModeratorModeGameplayCue; // 0x5b70(0x04)
	struct FGameplayTag PhoneInvulnerableGameplayCue; // 0x5b74(0x04)
	bool Swinging_HandsUp; // 0x5b78(0x01)
	bool Swinging_LockedToHip; // 0x5b79(0x01)
	char pad_5B7A[0x6]; // 0x5b7a(0x06)
	double InputDragCoefficient; // 0x5b80(0x08)
	bool ToggleSwingNativized; // 0x5b88(0x01)
	char pad_5B89[0x7]; // 0x5b89(0x07)
	struct UAudioComponent* SwingingSound; // 0x5b90(0x08)
	struct UCurveFloat* Swinging_ReelingInCurve; // 0x5b98(0x08)
	struct UCurveFloat* Swinging_NotReelingInCurve; // 0x5ba0(0x08)
	struct FVector Swinging_OriginalVecToTarget; // 0x5ba8(0x18)
	bool Swinging_ReelingIn; // 0x5bc0(0x01)
	char pad_5BC1[0x7]; // 0x5bc1(0x07)
	double Swinging_Goal Length; // 0x5bc8(0x08)
	struct UCurveFloat* Swinging_ReelingTimeCurve; // 0x5bd0(0x08)
	bool Swinging_ColliderBigger; // 0x5bd8(0x01)
	char pad_5BD9[0x7]; // 0x5bd9(0x07)
	struct TArray<struct FAudioParameter> SoundParams; // 0x5be0(0x10)
	bool Swinging_UseNewRotationAlgorithm; // 0x5bf0(0x01)
	char pad_5BF1[0x7]; // 0x5bf1(0x07)
	struct FVector AttachedWallInverseNormal; // 0x5bf8(0x18)
	double WallCheckDistance; // 0x5c10(0x08)
	struct FVector VelocityOnSlideStart; // 0x5c18(0x18)
	double SlideStartTime; // 0x5c30(0x08)
	double MaxSlideTime; // 0x5c38(0x08)
	struct UCurveVector* WallSlidingVelocityMultiplierCurve; // 0x5c40(0x08)
	struct UCurveFloat* WallSlidingAddedDownwardVelocityMultiplierCurve; // 0x5c48(0x08)
	double WallSlidingAddedDownwardVelocityMax; // 0x5c50(0x08)
	struct FVector AttachedWallNormal; // 0x5c58(0x18)
	struct FVector WallSlidingVelocity; // 0x5c70(0x18)
	double DesiredDistanceToAttachedWall; // 0x5c88(0x08)
	double MinGroundSlopeToLeaveAttachedWall; // 0x5c90(0x08)
	struct FFCreativeEffectDirectColor LastCreativeEffectDirectColor; // 0x5c98(0x14)
	char pad_5CAC[0x4]; // 0x5cac(0x04)
	struct FFortGameplayAbilityMontageInfo OverrideSearchMontageInfo; // 0x5cb0(0x58)
	struct FMulticastInlineDelegate DisplayHitNotify; // 0x5d08(0x10)
	bool RimLightMaterialsHaveBeenInitialized; // 0x5d18(0x01)

	void GoToHUBIslandIfOutOfBounds(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GoToHUBIslandIfOutOfBounds // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttemptToSetRimLight(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AttemptToSetRimLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetPawnIsInLocalSquad(bool& IsInLocalSquad); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetPawnIsInLocalSquad // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Swinging_AttachLocation(struct FVector& Location, bool& AttachPointExists); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_AttachLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swinging_ResetMeshTransform(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_ResetMeshTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swinging_SetJumpHeight(double Jump ZVelocity); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_SetJumpHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsSwingGrounded(bool& IsSwingingGrounded); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwingGrounded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector SwingingVectorToAttachPoint(struct FString caller ID); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingingVectorToAttachPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Swinging_StopReelingIn(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_StopReelingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swinging_StartReelingIn(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_StartReelingIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FVector Swing_GetStartPoint(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swing_GetStartPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsSwingAttached(bool& IsSwingAttached); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwingAttached // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingDetached(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingDetached // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingAttached(struct FVector AttachLocation, struct AActor* AttachedActor); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingAttached // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsSwinging(bool& IsSwinging); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.IsSwinging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swinging_CheckGrounded(bool& Grounded?, struct FVector& HitNormal, double& Distance); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Swinging_CheckGrounded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_UpdateCustomMovement(float DeltaTime); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_UpdateCustomMovement // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Hide Character Parts(bool IsHidden); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Hide Character Parts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Rim Light Location(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Update Rim Light Location // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void handleCvarsUpdated(struct FString CVarName); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.handleCvarsUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_PlayerAimRotation(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayerAimRotation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetAimPoint(struct FRotator& ControlRotation); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetAimPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Validate Rim Light(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Validate Rim Light // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool PawnIsDecoy(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsDecoy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool PawnIsNPC(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsNPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void RemoveSkeletalMeshComponentsFromWeaponObject(struct AFortWeapon* WeaponObject); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSkeletalMeshComponentsFromWeaponObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddSkeletalMeshComponentsFromWeaponObject(struct AFortWeapon* WeaponObject); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSkeletalMeshComponentsFromWeaponObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GalileoMaterialSetup(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Highest Priority Highlight(struct UObject*& Source, struct FPawnHighlight& Top Priority); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Highlight Pawn from Source(struct UObject* Source, struct FPawnHighlight Highlight, bool Only Update If Current); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Remove Pawn Highlight from Source(struct UObject* Source); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyPawnHighlight(struct UObject* Source, struct FPawnHighlight HitGlow); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_PlayRespawnFXOnSpawn(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LockonSearchCompleteTimedOut(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLockOnSearchCompleted(bool& bConsumeEvent); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPartyInProgress(bool bIsPartyInProgress); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanUpTeleportationFXLight(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RestoreCharacterMats(bool& bFullyCompleted); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPetHidden(bool NewHidden); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupDissolveFx(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanupDissolveFX(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanupDissolveFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateDissolveFx(double Scalar_Transition, double Scalar_ZHeight, double Scalar_LightIntensity); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnTeleportationLight(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FindBounds(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void QueueTeleportOut(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void QueueTeleportIn(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStartLongInteract(struct AActor* ReceivingActor, bool& Out_bConsumeEvent, bool& Out_bSkipSetInteractDuration, bool& Out_bSkipStartAnimation, enum class EItemInteractionType& Out_ItemInteractionType); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InWarmup(bool& bInWarmup); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopLoopingAudio(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnableWaterAudio(bool Is Entering Water); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetLocationInCircle_XY(struct FVector& LocationLocalSpace); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UserConstructionScript(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnReady_978607004CDEB137CACF38831BECEF40(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReady_978607004CDEB137CACF38831BECEF40 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SafeZoneStatusChanged(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Athena.Equipping(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Athena.Player.BeingRevivedFromDBNO(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveStormFX(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.Activation.DBNOResurrect(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredWaterVolume(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterVolume(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceivePossessed(struct AController* NewController); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void NotifyTeammateSkydivedFromBus(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLeftReplayRelevancy(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredReplayRelevancy(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCharacterCustomizationCompleted(struct AFortPlayerPawn* Pawn); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnResInDuringWarmup(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddStormFX(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSafeZonePhaseAndGameplayCueTag(int32_t InSafeZonePhase, bool bSpawnGameplayCue); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSafeZoneTagWhenChanged(int32_t NewWhichSafeZoneTag, struct FGameplayTag GameplayTag, bool bSpawnGameplayCue); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOutsideSafeZonePhaseChanged(int32_t SafeZonePhase); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RemoveSafeZoneGameplayCue(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReceivedStormSurgeDamage(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void MeleeSwingLeft(bool First Left); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MeleeSwingRight(bool First Right); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.Activation.DBNOEnter(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateInvincibleVisuals(double Duration); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Athena.Reloading(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TeleportInNSeconds(double SecondsTillTeleport, struct FVector DestLocation, struct FRotator DestRotation); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClientRunSnowGC(bool Instant); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WhiteoutAndTeleport(struct FVector DestLocation, struct FRotator DestRotation, bool Instant, double Gravity); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Athena.Boost(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCreativeStopGhost(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCreativeStartGhost(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void MeleeSwingLeft_End(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MeleeSwingRight_End(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddSafeZoneGameplayCue(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveSafeZoneGameplayCueServerToClient(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSuccessfulBuildingEdit(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Play Respawn FX(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSpawnImmunityTimeReset(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsFirstBody); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsLastBody); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBeginWaterSprintBoost(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void isHiddingInProp(bool IsHidden); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLandscapeCheckFailedAndTeleported(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLandscapeCheckFailedAndTeleported // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ScalePlayerUp(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerUp // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ScalePlayerDown(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerDown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTetheredExitPressed(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitPressed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTetheredExitReleased(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitReleased // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTetherStarted(struct APawn* LastTetherPawn); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTetherEnded(struct APawn* LastTetherPawn); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherEnded // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void StartAImRotationTick(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartAImRotationTick // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EndRotationTick(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.EndRotationTick // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReplicateAimRotation(struct FRotator PlayerAimRotation); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReplicateAimRotation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AimTick(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AimTick // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Damage(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Healing(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Healing // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Damage.Shielded(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage.Shielded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Shield.PotionConsumed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Shield.PotionConsumed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupColdTag(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyColdTag(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyColdTag_Retry(struct UFortAbilitySystemComponent* AbilitySystemComponent, struct AFortPlayerPawn* AffectedPawn); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag_Retry // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCreativeModeratorModeActivate(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeActivate // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCreativeModeratorModeDeactivate(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeDeactivate // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCreativeStartInvulnerable(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartInvulnerable // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnCreativeStopInvulnerable(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopInvulnerable // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void AddHighlightFromSource(struct UObject* Source, struct FPawnHighlight Highlight, bool OnlyUpdateIfCurrent); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddHighlightFromSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveHighlightFromSource(struct UObject* Source); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveHighlightFromSource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDisplayHitNotify(float DamageDealt, bool bCriticalHit, bool bFatalHit, bool bShieldHit, struct AActor* HitActor, struct FGameplayTagContainer HitTags); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDisplayHitNotify // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerPawn_Athena(int32_t EntryPoint); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void DisplayHitNotify__DelegateSignature(double Damage, bool Critical, bool Fatal, bool Shield, struct AFortPawn* HitPawn, struct FVector HitLocation); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.DisplayHitNotify__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CCPM_isHiddenInProp__DelegateSignature(bool IsHidden); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingLeft2__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingRight2__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingLeftEnd__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingRightEnd__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void onFadeToWhiteTeleported__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingLeft__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingRight__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResOut__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResIn__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

