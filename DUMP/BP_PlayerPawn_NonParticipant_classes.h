// BlueprintGeneratedClass BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C
// Size: 0x5ef0 (Inherited: 0x5d2c)
struct ABP_PlayerPawn_NonParticipant_C : ABP_PlayerPawn_Athena_Phoebe_C {
	char pad_5D2C[0x4]; // 0x5d2c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d30(0x08)
	struct UFortAthenaAlertStateComponent* FortAthenaAlertState; // 0x5d38(0x08)
	struct UAudioComponent* VOAudioComponent; // 0x5d40(0x08)
	bool UseAlertness; // 0x5d48(0x01)
	bool UseVO; // 0x5d49(0x01)
	bool UseIdleVO; // 0x5d4a(0x01)
	bool UseDropExtraLootOnDeath; // 0x5d4b(0x01)
	bool UseFullBodyHitReact; // 0x5d4c(0x01)
	enum class EAlertLevel AlertLevel; // 0x5d4d(0x01)
	enum class EAlertLevel OldAlertLevel; // 0x5d4e(0x01)
	char pad_5D4F[0x1]; // 0x5d4f(0x01)
	struct FGameplayTag GameplayCueAlertState; // 0x5d50(0x04)
	char pad_5D54[0x4]; // 0x5d54(0x04)
	struct UGameplayEffect* GE_NPC_Status_Stressed_Infinite; // 0x5d58(0x08)
	struct UGameplayEffect* GE_NPC_Status_Stressed_Cooldown; // 0x5d60(0x08)
	double MinDistanceToTargetToPlayCombatAlertAnimation; // 0x5d68(0x08)
	struct FScalableFloat MinIdleVODelay; // 0x5d70(0x28)
	struct FScalableFloat MaxIdleVODelay; // 0x5d98(0x28)
	struct FName LootTierNameToSpawnWhenDead; // 0x5dc0(0x04)
	struct FName LootTier_Medium; // 0x5dc4(0x04)
	struct FName LootTier_Shell; // 0x5dc8(0x04)
	struct FName LootTier_Heavy; // 0x5dcc(0x04)
	struct FName LootTier_Light; // 0x5dd0(0x04)
	struct FName LootTier_Rockets; // 0x5dd4(0x04)
	struct UFortGameplayDataTrackerComponentManager* DataTrackerComponentManager; // 0x5dd8(0x08)
	struct FGameplayTag AlertLevelUnawareTag; // 0x5de0(0x04)
	struct FGameplayTag AlertLevelAlertedTag; // 0x5de4(0x04)
	struct FGameplayTag AlertLevelAggressiveTag; // 0x5de8(0x04)
	struct FGameplayTag TC_DisguiseTag; // 0x5dec(0x04)
	struct UGameplayEffect* GE_RemoveDisguise; // 0x5df0(0x08)
	struct UFortAbilitySet* HitReactAbilitySet; // 0x5df8(0x08)
	struct UAnimMontage* DefaultFullbodyHitReactionMontage; // 0x5e00(0x08)
	struct UFortPatrolAnimAsset* CurrentPatrolAnimAsset; // 0x5e08(0x08)
	struct UAnimInstance* PatrolLayerAnimBP; // 0x5e10(0x08)
	struct TArray<struct FFortPatrolAnimSetWeaponPair> PatrolAnimSetPairs; // 0x5e18(0x10)
	bool bShouldDoFullAnimationUpdate; // 0x5e28(0x01)
	char pad_5E29[0x3]; // 0x5e29(0x03)
	struct FActiveGameplayEffectHandle GEDuelHandle; // 0x5e2c(0x08)
	char pad_5E34[0x4]; // 0x5e34(0x04)
	struct UGameplayEffect* GE_DuelTag; // 0x5e38(0x08)
	struct AFortPlayerPawn* Challenger; // 0x5e40(0x08)
	struct UAnimInstance* OverrideLayerAnimBP; // 0x5e48(0x08)
	struct UFortPatrolAnimAsset* FallbackPatrolAnimAsset; // 0x5e50(0x08)
	bool Quantize VO To Music; // 0x5e58(0x01)
	char pad_5E59[0x7]; // 0x5e59(0x07)
	struct FQuartzQuantizationBoundary QuantizationBoundary; // 0x5e60(0x20)
	struct FName VO QuantizationClockName; // 0x5e80(0x04)
	bool bIsInVehicleThatSupportsNoAlertState; // 0x5e84(0x01)
	char pad_5E85[0x3]; // 0x5e85(0x03)
	struct FActiveGameplayEffectHandle GE_Quest_Converted_Handle; // 0x5e88(0x08)
	struct UGameplayEffect* GE_Quest_Converted_HireNPC; // 0x5e90(0x08)
	struct USoundBase* DeathFX Sound; // 0x5e98(0x08)
	struct AFortPawn* PawnConverter; // 0x5ea0(0x08)
	struct FGameplayTagContainer TagsToApplyOnConvertedPawn; // 0x5ea8(0x20)
	struct FGameplayTagContainer TagsToApplyOnConvertingPawn; // 0x5ec8(0x20)
	struct USoundLibrary* PawnSoundLibrary; // 0x5ee8(0x08)

	void SoundLibrarySetup(bool IsAdding); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SoundLibrarySetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandlePawnUnconverted(struct AFortPawn* UnconvertedPawn); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnUnconverted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandlePawnConverted(struct AFortPawn* InstigatorPawn, struct AFortPawn* ConvertedPawn); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnConverted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayAlertLevelVO(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayAlertLevelVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleAlertStateUpdates(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandleAlertStateUpdates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bIsInVehicleThatSupportsNoAlertState(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_bIsInVehicleThatSupportsNoAlertState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateAlertStateVehicleCheck(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdateAlertStateVehicleCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetIconPlacement(struct AActor* SelfActor, struct AActor* ViewingActor, struct FVector& OutLocation, struct FVector& OutExtents); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetIconPlacement // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void ClientOnAlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ClientOnAlertLevelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeAnimInstanceSettings(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.InitializeAnimInstanceSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdatePatrolAnimSet(struct AFortWeapon* NewWeapon); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdatePatrolAnimSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetCurrentFullbodyHitReactionMontage(struct UAnimMontage*& CurrentMontage); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetCurrentFullbodyHitReactionMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetDataTrackerActorStateFromAlertLevel(enum class EAlertLevel AlertLevel); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetDataTrackerActorStateFromAlertLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DataTrackerSetup(bool Is Registering); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.DataTrackerSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetupLootTierNameWithWeapon(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetupLootTierNameWithWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel InputPin); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AlertLevelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayVoiceComponentSoundByTag(struct FGameplayTag SoundBankTag, struct UAudioComponent*& AudioComponent); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceComponentSoundByTag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetAlertedStateGameplayCue(bool Alerted, bool Combat); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetAlertedStateGameplayCue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_AlertLevel(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_AlertLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDBNOStateChanged_Event(struct AFortPawn* FortPawn, bool bInIsDBNO); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDBNOStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateAlertDBNOCleanUp(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ActivateAlertDBNOCleanUp // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAlertLEvelCHangedEvent(struct AFortAthenaAIBotController* BotController, enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAlertLEvelCHangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerIdleVO(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.TriggerIdleVO // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnWeaponEquipped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnCharacterCustomizationCompleted(struct AFortPlayerPawn* Pawn); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnCharacterCustomizationCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Player.Interrogation.Voice.PickedUp(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GameplayCue.Player.Interrogation.Voice.PickedUp // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ChallengerDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ChallengerDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetChallenger(struct AFortPlayerPawn* Challenger); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetChallenger // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LinkPatrolAnimLayer(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkPatrolAnimLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LinkOverrideAnimLayer(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkOverrideAnimLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAnimInputEvent(struct UFortAnimInputEvent* AnimInputEvent); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAnimInputEvent // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReLinkAnimLayer(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReLinkAnimLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayVoiceSoundByTag(struct FGameplayTag SoundBankTag); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceSoundByTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredVehicleEvent(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnEnteredVehicleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnExitedVehicleEvent(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature(struct AFortPawn* InstigatorPawn, struct AFortPawn* ConvertedPawn); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(struct AFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnExitedVehicle(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_PlayerPawn_NonParticipant(int32_t EntryPoint); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ExecuteUbergraph_BP_PlayerPawn_NonParticipant // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

