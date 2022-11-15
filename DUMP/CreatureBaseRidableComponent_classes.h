// BlueprintGeneratedClass CreatureBaseRidableComponent.CreatureBaseRidableComponent_C
// Size: 0xb18 (Inherited: 0x5b0)
struct UCreatureBaseRidableComponent_C : UControllableRidableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct FGameplayTagContainer T_CreatureIsBeingRidden; // 0x5b8(0x20)
	struct UGameplayEffect* GE_CreatureIsBeingRidden; // 0x5d8(0x08)
	struct UGameplayEffect* GE_CreatureIsBeingRidden_Passive; // 0x5e0(0x08)
	bool bDebugDisplay; // 0x5e8(0x01)
	char pad_5E9[0x7]; // 0x5e9(0x07)
	double DebugTickRate; // 0x5f0(0x08)
	struct FVector DebugServerRiderLocation; // 0x5f8(0x18)
	double CapsuleRadiusOffset; // 0x610(0x08)
	double CapsuleHalfHeightOffset; // 0x618(0x08)
	struct FGameplayTagContainer T_RidingSpecialAbility; // 0x620(0x20)
	struct UAnimSequence* IdleAnim_Add; // 0x640(0x08)
	struct UAnimSequence* RunAnim_Add; // 0x648(0x08)
	struct UBlendSpace* TurnBS; // 0x650(0x08)
	double MinSpeedToRun; // 0x658(0x08)
	double Run_RampIntoSpeed; // 0x660(0x08)
	double Run_RampIntoSpeed_ADS; // 0x668(0x08)
	double Run_PlayRate; // 0x670(0x08)
	double Run_PlayRate_ADS; // 0x678(0x08)
	double SpringAlpha; // 0x680(0x08)
	double SpringAlpha_ADS; // 0x688(0x08)
	double Idle_Alpha; // 0x690(0x08)
	double Idle_Alpha_ADS; // 0x698(0x08)
	double Run_Alpha; // 0x6a0(0x08)
	double Run_Alpha_ADS; // 0x6a8(0x08)
	double Turn_Alpha; // 0x6b0(0x08)
	double Turn_Alpha_ADS; // 0x6b8(0x08)
	struct UAnimSequence* Clamp_AnimPose_LastResort; // 0x6c0(0x08)
	struct FRotator Clamp_Foot_R_Adjust; // 0x6c8(0x18)
	struct FRotator Clamp_Foot_L_Adjust; // 0x6e0(0x18)
	double CapsuleRadiusOffset_Emote; // 0x6f8(0x08)
	double CapsuleHalfHeightOffset_Emote; // 0x700(0x08)
	struct FVector Clamp_Location_Offset; // 0x708(0x18)
	struct FRotator Clamp_Rotation_Offset; // 0x720(0x18)
	struct FVector Clamp_ScaleAdjust; // 0x738(0x18)
	struct FName RidableSocketName; // 0x750(0x04)
	char pad_754[0x4]; // 0x754(0x04)
	double RidableSocket_Alpha; // 0x758(0x08)
	struct UGameplayEffect* GE_CooldownOverride; // 0x760(0x08)
	struct FGameplayTagContainer T_CreatureOverrideCooldown; // 0x768(0x20)
	struct TMap<enum class ECollisionChannel, enum class ECollisionResponse> OriginalCollisionResponseMap; // 0x788(0x50)
	struct FSoundIndicatorIconPicker RidingSoundIndicatorIconOverride; // 0x7d8(0x28)
	struct FMulticastInlineDelegate AudioOnJump; // 0x800(0x10)
	struct FMulticastInlineDelegate AudioOnJumpApex; // 0x810(0x10)
	char MovementMode; // 0x820(0x01)
	bool bFalling; // 0x821(0x01)
	char pad_822[0x6]; // 0x822(0x06)
	struct FScalableFloat RidingAbilityEnable_HF; // 0x828(0x28)
	double JumpAttach_GroundHeightMin; // 0x850(0x08)
	double JumpAttach_GroundHeightBuffer; // 0x858(0x08)
	bool UseAltRidingMessage; // 0x860(0x01)
	char pad_861[0x7]; // 0x861(0x07)
	struct FText Riding Interaction Text; // 0x868(0x18)
	double currentEnergyValue; // 0x880(0x08)
	struct UPlayerRiderComponent_C* PlayerRiderComponentRef; // 0x888(0x08)
	struct ANPC_Pawn_Wildlife_Parent_C* NPCPawnWildlifeRef; // 0x890(0x08)
	double previousTimeTracked; // 0x898(0x08)
	double energyTrackingDeltaTime; // 0x8a0(0x08)
	bool ShouldHaveEnergy; // 0x8a8(0x01)
	char pad_8A9[0x7]; // 0x8a9(0x07)
	double EnergyRateOfDecayStopped; // 0x8b0(0x08)
	bool allowUpdateEnergyTrackingTick; // 0x8b8(0x01)
	bool lastBeingRiddenState; // 0x8b9(0x01)
	char pad_8BA[0x6]; // 0x8ba(0x06)
	struct FCurveTableRowHandle EnergyRateOfDecayMoving; // 0x8c0(0x10)
	struct FCurveTableRowHandle EnergyRateOfDecaySprinting; // 0x8d0(0x10)
	double CurrentEnergyRateOfRecharge; // 0x8e0(0x08)
	struct FCurveTableRowHandle ExhaustedEnergyRateOfRecharge; // 0x8e8(0x10)
	double EnergyWarningThreshold; // 0x8f8(0x08)
	double EnergyCriticalThreshold; // 0x900(0x08)
	bool energyWarningActive; // 0x908(0x01)
	bool energyCriticalActive; // 0x909(0x01)
	char pad_90A[0x6]; // 0x90a(0x06)
	double minMovementSpeedTreshold; // 0x910(0x08)
	bool IsJumping; // 0x918(0x01)
	char pad_919[0x7]; // 0x919(0x07)
	struct UGameplayEffect* GE_EnergyWarning; // 0x920(0x08)
	struct UGameplayEffect* GE_EnergyCritical; // 0x928(0x08)
	struct UGameplayEffect* GE_EnergyDepleted; // 0x930(0x08)
	struct FGameplayTagContainer T_EnergyWarning; // 0x938(0x20)
	struct FGameplayTagContainer T_EnergyCritical; // 0x958(0x20)
	struct FGameplayTagContainer T_EnergyDepleted; // 0x978(0x20)
	struct FGameplayTagContainer T_CannotRideBucket; // 0x998(0x20)
	struct UGameplayEffect* Gameplay Effect; // 0x9b8(0x08)
	struct FGameplayTag SprintingAbilityTag; // 0x9c0(0x04)
	char pad_9C4[0x4]; // 0x9c4(0x04)
	struct UGameplayEffect* GE_EatToRefuel; // 0x9c8(0x08)
	struct FSlateBrush IconBrush; // 0x9d0(0xc0)
	struct UGameplayEffect* GE_Creature_Sprint; // 0xa90(0x08)
	struct USoundLibrary* RidingFoleySoundLibrary; // 0xa98(0x08)
	struct FGameplayTagContainer TagsPreventSprinting; // 0xaa0(0x20)
	struct FMulticastInlineDelegate RidableUIStart; // 0xac0(0x10)
	struct FMulticastInlineDelegate RidableUIUpdateEnergy; // 0xad0(0x10)
	struct FGameplayTag OutOfEnergySoundLibTag; // 0xae0(0x04)
	struct FGameplayTag SprintStartSoundLibTag; // 0xae4(0x04)
	enum class TInteractionType Riding Interaction Type; // 0xae8(0x01)
	char pad_AE9[0x7]; // 0xae9(0x07)
	double StartInAirTimestamp; // 0xaf0(0x08)
	struct FTimerHandle RetryJumpExitTimerHandle; // 0xaf8(0x08)
	struct FGameplayTag MountLandedCueTag; // 0xb00(0x04)
	char pad_B04[0x4]; // 0xb04(0x04)
	struct UGameplayEffect* GE_BlockCreatureAttackOnDismount; // 0xb08(0x08)
	double SummonEnergyRateOfRecharge; // 0xb10(0x08)

	void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingInfoFromTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsSummoned(bool& Return Value); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.IsSummoned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool CanBePet(struct URiderComponent* Rider); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanBePet // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void CanJumpExit(bool& CanJumpExit); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanJumpExit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UpdateLootAnimalGlow(double Scale); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateLootAnimalGlow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_currentEnergyValue(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_currentEnergyValue // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Propagate Immunity Fall Damage(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Propagate Immunity Fall Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetRunSpeed(double& RunSpeed); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRunSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSprintSpeed(double& SprintSpeed); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetSprintSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool CanRiderPlayEmote(struct URiderComponent* Rider); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanRiderPlayEmote // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void HandleEnemyFoleySoundLibrary(struct UActorComponent* Rider, bool bIsRiding); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleEnemyFoleySoundLibrary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnMovementModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsSwimming(bool& IsSwimming); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.IsSwimming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void StopSprinting(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.StopSprinting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveGEByTag(struct FGameplayTagContainer Tags); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RemoveGEByTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyGEToSelf(struct UGameplayEffect* GameplayEffectClass, bool& IsValidClass); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyGEToSelf // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void KickRiderOffSelf(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.KickRiderOffSelf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DetermineRateOfChange(double& RateOfChange); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.DetermineRateOfChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CommitEnergyCosts(bool RequireAllEnergy, double EnergyCost, bool& Success); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CommitEnergyCosts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TestThreshold(bool isDecaying, double CurrentValue, double testTreshold, bool PreviousState, bool& crossedThreshold); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TestThreshold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWildlifeHealth(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetWildlifeHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateValue(double TargetValue, double RateOfChange, double DeltaTime, double& updatedValue, bool& EnergyDepleted); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleRiding(struct AActor* PlayerPawn, struct AActor* Target, bool ShouldRide, bool& bChangedRiding); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRiding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RestoreCollisionResponses(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RestoreCollisionResponses // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyCollisionResponse(struct TArray<enum class ECollisionChannel>& Channels, enum class ECollisionResponse Response); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyCollisionResponse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldCameraFocusOnRidable(struct URiderComponent* Rider); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldCameraFocusOnRidable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UpdateAnimInputBool(struct AFortPawn* FortPawn, bool IsBeingRidden); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateAnimInputBool // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetRiderCapsuleSize(struct URiderComponent* Rider, double& RiderCapsuleRadius, double& RiderCapsuleHH); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderCapsuleSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetRidingEmoteCapsuleSize(struct URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingEmoteCapsuleSize // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetRidingCapsuleSize(struct URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingCapsuleSize // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_IdleAnim_Add(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_IdleAnim_Add // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldSetAsViewTarget(struct URiderComponent* Rider); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldSetAsViewTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetRiderLocation(struct FVector& Location); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Removed_AD51144144164FD235EE5BA4F6E87456(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_AD51144144164FD235EE5BA4F6E87456 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_AE90D5474A90AF2F7D8D4D87856DAB44(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_AE90D5474A90AF2F7D8D4D87856DAB44 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleRidingAlternative(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRidingAlternative // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleRiderStartedRiding(struct URiderComponent* Rider); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStartedRiding // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleRiderStoppedRiding(struct URiderComponent* Rider); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStoppedRiding // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void UpdateDebug(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateDebug // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleAbilityHeld(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityHeld // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleAbilityStarted(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleAbilityStopped(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStopped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleJumpStarted(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnJumping(double JumpPitchInterpSpeed); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumping // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnJumpingApex(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumpingApex // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnergyTrackingStart(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStart // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnergyTrackingStop(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void UpdateEnergy(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateEnergy // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (bool Converted, struct AFortPawn* InstigatorPawn); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UseEnergyAmountServer(double EnergyCost); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UseEnergyAmountServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleCancelSprint // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void CheatSetStaminaPercent(float StaminaPercent); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CheatSetStaminaPercent // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnEnergyUpdate(double Energy, bool bWarningActive); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnergyDepletedClient(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyDepletedClient // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSprintStarted(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnSprintStarted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEatToRefuel(double EnergyCost); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEatToRefuel // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReTryJumpExit(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReTryJumpExit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CreatureBaseRidableComponent(int32_t EntryPoint); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteUbergraph_CreatureBaseRidableComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void RidableUIUpdateEnergy__DelegateSignature(double Energy, bool bIsResting); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIUpdateEnergy__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RidableUIStart__DelegateSignature(struct FText Name, struct FSlateBrush Icon); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AudioOnJumpApex__DelegateSignature(); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJumpApex__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AudioOnJump__DelegateSignature(double JumpPitchInterpSpeed); // Function CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJump__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

