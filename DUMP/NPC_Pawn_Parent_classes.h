// BlueprintGeneratedClass NPC_Pawn_Parent.NPC_Pawn_Parent_C
// Size: 0x39b8 (Inherited: 0x3210)
struct ANPC_Pawn_Parent_C : AFortAIPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3210(0x08)
	struct UFortPawnComponent_CustomDepth* FortPawnComponent_CustomDepth; // 0x3218(0x08)
	struct UCapsuleComponent* WeaponCapsuleCollision; // 0x3220(0x08)
	struct UFortTaggedNavFiltersComponent* FortTaggedNavFilters; // 0x3228(0x08)
	struct UFortActorComponent_Affiliation* FortActorComponent_Affiliation; // 0x3230(0x08)
	struct USoundLibraryComponent* SoundLibrary_Component; // 0x3238(0x08)
	struct UAudioComponent* MovementAudioComponent; // 0x3240(0x08)
	struct UNPC_VoiceComponent_C* NPC_VoiceComponent; // 0x3248(0x08)
	struct UAudioComponent* VOAudioComponent; // 0x3250(0x08)
	struct UFortWidgetComponent* NPCStatusWidget; // 0x3258(0x08)
	float Timeline_ScaleMeshInOrOut_MeshScaleAlpha_9DAAC0B243D26E4160CEC3A458AE0E86; // 0x3260(0x04)
	enum class ETimelineDirection Timeline_ScaleMeshInOrOut__Direction_9DAAC0B243D26E4160CEC3A458AE0E86; // 0x3264(0x01)
	char pad_3265[0x3]; // 0x3265(0x03)
	struct UTimelineComponent* Timeline_ScaleMeshInOrOut; // 0x3268(0x08)
	struct UGameplayEffect* GE_NPC_RecentlyDamaged; // 0x3270(0x08)
	enum class Enum_NPC_AlertLevel NPC_AlertLevel; // 0x3278(0x01)
	enum class Enum_NPC_AlertLevel NPC_AlertLevelPrevious; // 0x3279(0x01)
	char pad_327A[0x6]; // 0x327a(0x06)
	struct TMap<enum class Enum_NPC_AlertLevel, struct FGameplayTag> NPC AlertLevelToTagMap; // 0x3280(0x50)
	bool NPC StatusWidgetHealthBarDisabled; // 0x32d0(0x01)
	char pad_32D1[0x3]; // 0x32d1(0x03)
	struct FGameplayTag GameplayCue_PickupGrabbed; // 0x32d4(0x04)
	enum class EFortRarity NPC BestLootRarityInInventory; // 0x32d8(0x01)
	bool NPC DebugPawn; // 0x32d9(0x01)
	bool NPC ShowInventoryRarityVisuals; // 0x32da(0x01)
	char pad_32DB[0x5]; // 0x32db(0x05)
	double InventoryGlowDelay; // 0x32e0(0x08)
	struct FScalableFloat NPC NumberOfInventoryItemsToDeliverHF; // 0x32e8(0x28)
	bool NPC SpawnInvisible; // 0x3310(0x01)
	bool NPC ScaleMeshInOnSpawn; // 0x3311(0x01)
	char pad_3312[0x6]; // 0x3312(0x06)
	struct FGameplayTagContainer TC_NPC SpawnAbilityTag; // 0x3318(0x20)
	struct FGameplayTagContainer TC_NPC AlternateSpawnAbilityTag; // 0x3338(0x20)
	bool NPC IsSpawning; // 0x3358(0x01)
	char pad_3359[0x7]; // 0x3359(0x07)
	double NPC OriginalGravityScale; // 0x3360(0x08)
	struct FRotator NPC OriginalRotationRate; // 0x3368(0x18)
	bool NPC HasPawnGoal; // 0x3380(0x01)
	char pad_3381[0x7]; // 0x3381(0x07)
	struct AActor* NPC PawnGoalActor; // 0x3388(0x08)
	struct FScalableFloat NPC NumberOfInventoryItemsToConsumeBeforeFullHF; // 0x3390(0x28)
	bool NPC PawnIsDestroyingBuildingForNavigation; // 0x33b8(0x01)
	char pad_33B9[0x7]; // 0x33b9(0x07)
	struct FScalableFloat MaxIdleVODelay; // 0x33c0(0x28)
	struct FScalableFloat MinIdleVODelay; // 0x33e8(0x28)
	struct FScalableFloat NPC DeathDropLootDelay; // 0x3410(0x28)
	struct FName NPC DeathDropLootTierGroupName; // 0x3438(0x04)
	char pad_343C[0x4]; // 0x343c(0x04)
	struct FGameplayTagContainer NPC DeathDropLootRequiredDamageTags; // 0x3440(0x20)
	struct FGameplayTagContainer NPC DeathDropLootForbiddenDamageTags; // 0x3460(0x20)
	struct FGameplayTagContainer GrantStartingItemsAbilityTC; // 0x3480(0x20)
	bool NPC HasItemInInventory; // 0x34a0(0x01)
	char pad_34A1[0x3]; // 0x34a1(0x03)
	struct FGameplayTag VoiceTag_FullAlertIdle; // 0x34a4(0x04)
	struct FGameplayTag VoiceTag_Idle; // 0x34a8(0x04)
	struct FGameplayTag VoiceTag_ReturnToIdle; // 0x34ac(0x04)
	struct FGameplayTag VoiceTag_LostTarget; // 0x34b0(0x04)
	struct FGameplayTag VoiceTag_Suspicious; // 0x34b4(0x04)
	struct FGameplayTag VoiceTag_FullAlert; // 0x34b8(0x04)
	char pad_34BC[0x4]; // 0x34bc(0x04)
	struct TArray<struct FStruct_NPC_TargetSlots> NPC TargetSlotsHF; // 0x34c0(0x10)
	bool NPC DamageCanCancelIntroPhase; // 0x34d0(0x01)
	char pad_34D1[0x7]; // 0x34d1(0x07)
	struct FGameplayTagQuery TQ_NPC DamageTagsThatCanCancelIntroPhase; // 0x34d8(0x48)
	struct UGameplayEffect* GE_NPC_IntroPhaseBehaviorCooldown; // 0x3520(0x08)
	struct FGameplayTagContainer TC_IntroBehaviorActive; // 0x3528(0x20)
	bool Debug_NPC_AlertLevelForced; // 0x3548(0x01)
	bool NPC PawnCanInteractInternal; // 0x3549(0x01)
	char pad_354A[0x6]; // 0x354a(0x06)
	struct FScalableFloat NPC PrimtiveDataFloatSetRandomlyInRange; // 0x3550(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatIndexHF; // 0x3578(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatMinRangeHF; // 0x35a0(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatMaxRangeHF; // 0x35c8(0x28)
	struct AActor* NPC Leader; // 0x35f0(0x08)
	struct FGameplayTag GameplayCue_LeaderSet; // 0x35f8(0x04)
	char pad_35FC[0x4]; // 0x35fc(0x04)
	double NPC Skeletal Mesh Index; // 0x3600(0x08)
	struct USoundBase* TamedSound; // 0x3608(0x08)
	struct UAudioComponent* StateChangeSound; // 0x3610(0x08)
	struct FScalableFloat NPC ShouldDespawnFromStormHF; // 0x3618(0x28)
	struct FScalableFloat NPC DespawnTimerHF; // 0x3640(0x28)
	struct FGameplayTag NPC DespawnGameplayTag; // 0x3668(0x04)
	char pad_366C[0x4]; // 0x366c(0x04)
	struct FTimerHandle NPC TestIsInSafeZoneTimer; // 0x3670(0x08)
	struct FTimerHandle NPC DespawnFromStormTimer; // 0x3678(0x08)
	bool NPC isTryingToDespawn; // 0x3680(0x01)
	char pad_3681[0x3]; // 0x3681(0x03)
	struct FGameplayTag NPC ResetIntroGameplayTags; // 0x3684(0x04)
	double SelectedPrimitiveDataFloat; // 0x3688(0x08)
	struct FGameplayTag GameplayCue_Death; // 0x3690(0x04)
	char pad_3694[0x4]; // 0x3694(0x04)
	struct TArray<struct UMaterialInterface*> OG Materials; // 0x3698(0x10)
	bool NPC Apply GE for Swimming; // 0x36a8(0x01)
	char pad_36A9[0x7]; // 0x36a9(0x07)
	struct UGameplayEffect* NPC GE_ClassToApplyForSwimming; // 0x36b0(0x08)
	bool Exit Burst GC; // 0x36b8(0x01)
	char pad_36B9[0x3]; // 0x36b9(0x03)
	struct FActiveGameplayEffectHandle NPC GE_AppliedForSwimming; // 0x36bc(0x08)
	struct FName GoalActorBBKey; // 0x36c4(0x04)
	struct FGameplayTag GameplayCueLureInterest; // 0x36c8(0x04)
	char pad_36CC[0x4]; // 0x36cc(0x04)
	struct UObject* NPC PreviousLureGoal; // 0x36d0(0x08)
	struct FGameplayTag Exit Water; // 0x36d8(0x04)
	struct FGameplayTag Enter Water; // 0x36dc(0x04)
	struct FScalableFloat NPC MaxDistanceFromDamagedNPCToDrawHeallthBarHF; // 0x36e0(0x28)
	struct FScalableFloat NPC HealthBarHideTimeAfterDeathHF; // 0x3708(0x28)
	struct FScalableFloat NPC PlayEffectWhenLuredHF; // 0x3730(0x28)
	struct FScalableFloat NPC PawnCanInteractHF; // 0x3758(0x28)
	struct FScalableFloat NPC AllowInteractOnlyWhenUnawareHF; // 0x3780(0x28)
	struct FScalableFloat NPC AllowInteractWhenHasLeaderHF; // 0x37a8(0x28)
	struct FScalableFloat NPC AllowDrownInShallowWaterHF; // 0x37d0(0x28)
	bool NPC_IsInventoryInitialized; // 0x37f8(0x01)
	char pad_37F9[0x3]; // 0x37f9(0x03)
	float LeaderClearedCueDelay; // 0x37fc(0x04)
	struct FGameplayTag GameplayCue_LeaderCleared; // 0x3800(0x04)
	bool isGCForLeaderSetLooping; // 0x3804(0x01)
	char pad_3805[0x3]; // 0x3805(0x03)
	struct FGameplayTag NPC DeathByStormTag; // 0x3808(0x04)
	bool NPC TryDespawnAbility; // 0x380c(0x01)
	char pad_380D[0x3]; // 0x380d(0x03)
	struct FActiveGameplayEffectHandle GeOutsideSafeZoneDamageHandle; // 0x3810(0x08)
	bool IsGEStormDamageInit; // 0x3818(0x01)
	bool NPC MeshScalingInProgress; // 0x3819(0x01)
	bool NPC DisableCapsuleOverlapsWhenScalingOut; // 0x381a(0x01)
	char pad_381B[0x5]; // 0x381b(0x05)
	struct FVector NPC OriginalMeshScale; // 0x3820(0x18)
	struct FMulticastInlineDelegate NPCScaleMeshInCompleted; // 0x3838(0x10)
	struct FMulticastInlineDelegate NPCScaleMeshOutCompleted; // 0x3848(0x10)
	bool NPC_CanDropLoot; // 0x3858(0x01)
	char pad_3859[0x7]; // 0x3859(0x07)
	struct FScalableFloat NPC StaleDespawnTestDistance HF; // 0x3860(0x28)
	struct FScalableFloat NPC StaleDespawnTimeThreshold HF; // 0x3888(0x28)
	double NPC LastNonStaleCheckTime; // 0x38b0(0x08)
	bool bCanBeDamagedByNullInstigator; // 0x38b8(0x01)
	bool IsEnteringWater; // 0x38b9(0x01)
	char pad_38BA[0x6]; // 0x38ba(0x06)
	struct FMulticastInlineDelegate NPCPawnInteractWithDispatcher; // 0x38c0(0x10)
	bool NPCDynamicBlockConversionOnInteract; // 0x38d0(0x01)
	bool NPC TempInteractOverride; // 0x38d1(0x01)
	char pad_38D2[0x6]; // 0x38d2(0x06)
	struct USoundBase* HeadShot_Sound; // 0x38d8(0x08)
	struct FName Headshot FX Socket; // 0x38e0(0x04)
	bool UseHeadShotFX; // 0x38e4(0x01)
	char pad_38E5[0x3]; // 0x38e5(0x03)
	struct FGameplayTagContainer TC_WeaponTypesAllowedForHeadshotFX; // 0x38e8(0x20)
	bool AllowHeadshot; // 0x3908(0x01)
	char pad_3909[0x7]; // 0x3909(0x07)
	double AdditiveHitReactRetriggerDelay; // 0x3910(0x08)
	struct UAnimMontage* Additive Hit React Montage; // 0x3918(0x08)
	struct USoundBase* Death Normal Sound; // 0x3920(0x08)
	struct UParticleSystem* HeadshotFXEmitterTemplate; // 0x3928(0x08)
	struct TArray<struct USoundLibrary*> SoundLibs_Default; // 0x3930(0x10)
	struct TArray<struct USoundLibrary*> SoundLibs_Alert; // 0x3940(0x10)
	struct USoundLibrary* CurrentSoundLib; // 0x3950(0x08)
	struct TArray<struct USoundLibrary*> SoundLibs_Aggressive; // 0x3958(0x10)
	struct TArray<struct USoundLibrary*> SoundLibs_Foley; // 0x3968(0x10)
	struct TArray<struct USoundLibrary*> SoundLibs_Foley_Water; // 0x3978(0x10)
	struct USoundLibrary* CurrentFoleyLib; // 0x3988(0x08)
	double Custom Depth Update Rate; // 0x3990(0x08)
	struct USoundLibraryContext* Class; // 0x3998(0x08)
	struct UGameplayEffect* GE_Converted; // 0x39a0(0x08)
	struct FActiveGameplayEffectHandle GE_Converted_Handle; // 0x39a8(0x08)
	double NPC Death Time; // 0x39b0(0x08)

	void Orphaned(bool& IsOrphaned, struct AFortPawn*& AttachedPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Orphaned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_NPC Death Time(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Death Time // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayStateChangeAudio(enum class Enum_NPC_AlertLevel Index); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayStateChangeAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsConverted(bool& IsConverted); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.IsConverted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC GhostCollisionSettings(bool NoCollisionForRanged, bool NoCollisionForMelee, bool NoCollisionForProjectiles, bool OnlyOverlapCollisionForPawns); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GhostCollisionSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool CanUpdateSoundLib(struct TArray<struct USoundLibrary*>& TargetArray); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CanUpdateSoundLib // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void PlayAdditiveHitReacts(struct FVector& Hit Direction, struct UAnimMontage* Anim Montage); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayAdditiveHitReacts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC DamageRemovesIdlePhaseTagGE(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageRemovesIdlePhaseTagGE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSoundFoleyLibrary(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GetSoundFoleyLibrary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC CanBeInteractedWith(bool& CanInteract); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CanBeInteractedWith // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC CheckForDespawnIfStaleToPlayers(struct AFortPlayerPawn* ClosestFortPlayerPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckForDespawnIfStaleToPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC SetCanDropLoot(bool CanDropLoot); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetCanDropLoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC GetSafeZonePhase(int32_t& SafeZonePhase); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetSafeZonePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_NPC Leader(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Leader // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Water Splash at Water Surface(struct AFortWaterBodyActor* Water Body, bool Enter Water); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Play Water Splash at Water Surface // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetMaterialFromDeath(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ResetMaterialFromDeath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_SelectedPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_SelectedPrimitiveDataFloat // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckSoundLibraryRemoved(struct TArray<struct USoundLibrary*>& Libraries); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryRemoved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckSoundLibraryAdded(struct TArray<struct USoundLibrary*>& Libraries); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryAdded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateSoundLibrary(enum class Enum_NPC_AlertLevel Alert Level); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibrary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC ClearOutTargetSlots(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ClearOutTargetSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC UpdateInteract(bool CanInteract, bool& EnabledInteract); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateInteract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC HasLeader?(bool& HasLeader?, struct AActor*& Leader); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HasLeader? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC SetLeader(struct AActor* Leader, bool& Success?, struct AActor*& LeaderSet); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLeader // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC AttemptToSetLeader(struct AActor* PossibleLeader, enum class EUnconvertReason UnconvertReason); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AttemptToSetLeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SetPrimitiveDataFloat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SelectPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SelectPrimitiveDataFloat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StoreOriginalGravityAndRotation(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StoreOriginalGravityAndRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC DisableIntroPhaseBehavior(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DisableIntroPhaseBehavior // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC DamageAttemptDisableIntroPhaseBehavior(struct FGameplayTagContainer DamageTags); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageAttemptDisableIntroPhaseBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC TargetSlotIsUsingOverride(enum class Enum_NPC_TargetSlots TargetSlotType, struct AActor* TargetWeWantToSlotOnto, bool& Override); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotIsUsingOverride // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC TargetSlotInfo(enum class Enum_NPC_TargetSlots TargetSlotType, struct AActor* TargetWeWantToSlotOnto, int32_t& TargetSlotCount, int32_t& TargetSlotMax, int32_t& NPC TargetSlotsRequired, bool& TargetSlotsMaxOrMore, bool& TargetSlotCountIsExactlyMax, bool& NPC IsTargetSlotOwner, bool& NPC HasSpaceToSlotOnTarget, enum class Enum_NPC_TargetSlots& TargetSlotTypeOut, struct UGameplayEffect*& TargetSlotCountingGE, struct FScalableFloat& AI TargetSlotSizeHF, struct FScalableFloat& AI TargetSlotDurationHF, struct UGameplayEffect*& TargetSlotOverrideGE, struct UGameplayEffect*& TargetSlotOwnerGE, struct UGameplayEffect*& TargetSlotCountingMaxedGE); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC CheckIsInSafeZone(bool& TestSucceeded, bool& isInSafeZone); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC HandleAlertLevelVoice(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC TryToDropLootOnDeath(struct FGameplayTagContainer DamageTags, bool& CanDropLoot); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC ApplyGameplayEffectWithMMRScaling(struct AActor* Actor, struct UGameplayEffect* GE Class); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC SetLootCollectionPhaseCompleteToBlackboard(bool LootCollectionPhaseComplete); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC ResetOriginalRotationRate(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC ResetOriginalGravityScale(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC SetReturnGatheredLootToBlackboard(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC GetScalableFloatHotfixValue(struct FScalableFloat& ScalableFloatHotfix, double AtLevel, bool& AsBool, int32_t& AsIntRounded, double& AsFloat); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC ScalableFloatIsValid(struct FScalableFloat& ScalableFloat, bool& Valid); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC PickupDropped(struct AFortPickup* FortPickupDropped); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC PickupGrabbed_Destroyed(struct AActor* ActorGrabbed); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC PickupGrabbed(struct AFortPickup* FortPickupGrabbed); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_NPC BestLootRarityInInventory(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC SendGameplayCuePickupGrabbed(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC PawnDebugMessage(struct FString String, bool OnlyWhenDebug); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC GetInventoryInformation(bool& HasItemInInventory, int32_t& TotalNumberOfInventoryItems, int32_t& LastInventoryItemIndex, bool& HasEnoughItemsToDeliver, bool& ConsumedEnoughItemsToBeConsideredFull); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC SetBestLootRarityInInventory(enum class EFortRarity& NPC BestLootRarityInInventory); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_NPC_AlertLevel(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC GetAlertLevelInfo(enum class Enum_NPC_AlertLevel& AlertLevel, struct FGameplayTag& AlertLevelTag, bool& ValidDataFound); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC ApplyRecentlyDamagedTagGE(struct UGameplayEffect* RecentlyDamagedOverride); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTagGE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldUpdateSkeletalMesh(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_ScaleMeshInOrOut__FinishedFunc(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_ScaleMeshInOrOut__UpdateFunc(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Timeline_ScaleMeshInOrOut__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void TriggerDeathFX(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDeathFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void GrantStartingItems(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void WidgetVisibilityChanged(bool bVisible); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC ParentLaunchVehicle(struct AActor* Vehicle, struct FVector Velocity); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TestLoot(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void NPC UpdateHealthBarComponentVisibility(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateHealthBarComponentVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceivePossessed(struct AController* NewController); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RequestUpdateNPCAlertLevel(enum class Enum_NPC_AlertLevel NPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCAlertLevelChangedClient(enum class Enum_NPC_AlertLevel NPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChangedClient // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC InitializeIdleVO(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerIdleVO(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void NPCEnableHealthBars(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCDisableHealthBars(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Debug_AlertLevel_ForceLevel(enum class Enum_NPC_AlertLevel NewNPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ForceLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Debug_AlertLevel_ClearDebug(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ClearDebug // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Debug_ForceAlertLevel_Invalid(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Invalid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Debug_ForceAlertLevel_Unaware(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Unaware // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Debug_ForceAlertLevel_NA(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_NA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Debug_ForceAlertLevel_Alerted(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Alerted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Debug_ForceAlertLevel_Aggressive(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Aggressive // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleInteracts(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.HandleInteracts // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC Pawn Interact(struct AFortAIPawn* AI, struct AFortPlayerController* InteractingPlayerController, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC Pawn Interact // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On NPC PawnInteractedWith(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.On NPC PawnInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBeginDeepWaterInteraction(struct FVector WaterSurfaceLocation, float WaterDepth); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDeepWaterInteraction // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void NPC LeaderSet(bool Success?, struct AActor* Leader, enum class EUnconvertReason UnconvertReason); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC LeaderSet // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TestIsInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestIsInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryToDespawnDueToStorm(bool Reset Timer); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryToDespawnDueToStorm // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeTestInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeTestInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DespawnDueToStorm(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.DespawnDueToStorm // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void End Music Tracker(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.End Music Tracker // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BeginMusicTracker(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.BeginMusicTracker // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopUpdatingHealthBarWidget(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopUpdatingHealthBarWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveSoundSystemLibraries(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RemoveSoundSystemLibraries // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddSoundSystemLibraries(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AddSoundSystemLibraries // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeInventory(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeInventory // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartUpdatingHleathBarWidget(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StartUpdatingHleathBarWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AlertLevelChangedServer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsFirstBody); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsLastBody); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnEndDance(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEndDance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBeginDance(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LuredOnServer(enum class Enum_NPC_AlertLevel AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredOnServer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LuredInterest(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredInterest // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayEnterWaterSplash(struct AFortWaterBodyActor* Water Body); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayEnterWaterSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayExitWaterSplash(struct AFortWaterBodyActor* Water Body); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayExitWaterSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TryWaterInteractionDrown(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryWaterInteractionDrown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopTestingIsInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopTestingIsInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCScaleMeshIn(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshIn // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCScaleMeshOut(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOut // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerDespawnAbility(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerDespawnAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC MulticastGameplayCueDeath(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC MulticastGameplayCueDeath // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateSoundLibFoley(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibFoley // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void AdditiveHitReactDelay(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AdditiveHitReactDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCustomDepth(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateCustomDepth // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_Parent(int32_t EntryPoint); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void NPCPawnInteractWithDispatcher__DelegateSignature(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCPawnInteractWithDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCScaleMeshOutCompleted__DelegateSignature(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshOutCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCScaleMeshInCompleted__DelegateSignature(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCScaleMeshInCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

