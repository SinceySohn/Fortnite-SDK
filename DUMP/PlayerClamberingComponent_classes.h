// BlueprintGeneratedClass PlayerClamberingComponent.PlayerClamberingComponent_C
// Size: 0xaf8 (Inherited: 0xa28)
struct UPlayerClamberingComponent_C : UClamberingComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa28(0x08)
	bool bUISceneAdded; // 0xa30(0x01)
	char pad_A31[0x7]; // 0xa31(0x07)
	struct UCameraShakeBase* CameraShake; // 0xa38(0x08)
	struct FGameplayTag ClamberGameplayCue; // 0xa40(0x04)
	char pad_A44[0x4]; // 0xa44(0x04)
	struct UAnimMontage* Clamber_250up; // 0xa48(0x08)
	struct UAnimMontage* ClamberFailAnim; // 0xa50(0x08)
	struct UGameplayEffect* GE_Clambering; // 0xa58(0x08)
	struct FActiveGameplayEffectHandle ActiveGEHandle; // 0xa60(0x08)
	struct AClamber_Location_Actor_C* ClamberLocationIndicator; // 0xa68(0x08)
	struct AB_Decal_ClamberHighlight_C* ClamberLocationHighlight; // 0xa70(0x08)
	struct FGameplayTag T_JetpackEquipped; // 0xa78(0x04)
	char pad_A7C[0x4]; // 0xa7c(0x04)
	struct FText PromptText; // 0xa80(0x18)
	struct TArray<struct FGameplayTag> CancelAbilitiesWithTags; // 0xa98(0x10)
	struct TArray<struct FGameplayTag> BlockAbilitiesWithTags; // 0xaa8(0x10)
	struct FGameplayTagContainer T_TargetWithinRange; // 0xab8(0x20)
	struct AFortPlayerPawn* PlayerPawn; // 0xad8(0x08)
	struct FGameplayTag T_ClamberBlocked; // 0xae0(0x04)
	char pad_AE4[0x4]; // 0xae4(0x04)
	struct UAnimMontage* Clamber_60up; // 0xae8(0x08)
	struct UAnimMontage* Clamber_150up; // 0xaf0(0x08)

	bool BuildDataRegistryResolverScope(struct TArray<struct FName>& InOutResolverScopes, int32_t& InOutPriority); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.BuildDataRegistryResolverScope // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetClamberAnim(struct UAnimMontage*& Clamber Anim); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.GetClamberAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShouldTutorialBeEnabled(); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.ShouldTutorialBeEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_TutorialModeDisabled(); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.BP_TutorialModeDisabled // (Event|Protected|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void BP_TutorialModeEnabled(); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.BP_TutorialModeEnabled // (Event|Protected|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void BP_CanStartTargeting(bool& bCanStartTargeting); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.BP_CanStartTargeting // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void BP_CanStartClambering(bool& bCanStartClambering); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.BP_CanStartClambering // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void GetClamberLocationHighlightTransform(struct FClamberingTargetingData& TargetingData, struct FTransform& Transform, struct FRotator& Rotation); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.GetClamberLocationHighlightTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UpdateClamberLocationHighlight(struct FClamberingTargetingData& TargetingData); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.UpdateClamberLocationHighlight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyClamberLocationHighlight(); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.DestroyClamberLocationHighlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateClamberLocationHighlight(struct FClamberingTargetingData& TargetingData); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.CreateClamberLocationHighlight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CanShowUIPrompt(bool& bCanShow); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.CanShowUIPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetClamberAnimPlayRate(double& PlayRate); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.GetClamberAnimPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetUISceneVisible(bool bVisible); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.SetUISceneVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleTargetingDataInvalid(); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.HandleTargetingDataInvalid // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleTargetingDataValid(struct FClamberingTargetingData& TargetingData); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.HandleTargetingDataValid // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleClamberingStateChanged(enum class EClamberingState OldClamberingState, enum class EClamberingState NewClamberingState); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.BP_HandleClamberingStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleClamberStateStarted(struct AFortPawn* Pawn, enum class EClamberingState ClamberingState); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.HandleClamberStateStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleClamberStateStopped(struct AFortPawn* Pawn, enum class EClamberingState ClamberingState); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.HandleClamberStateStopped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function PlayerClamberingComponent.PlayerClamberingComponent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleClamberingTargetInActivationRange(); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.HandleClamberingTargetInActivationRange // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleClamberingTargetOutOfActivationRange(); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.HandleClamberingTargetOutOfActivationRange // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleSynchedActionStarted(struct FSynchedActionInfo& SynchedActionInfo); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.BP_HandleSynchedActionStarted // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerClamberingComponent(int32_t EntryPoint); // Function PlayerClamberingComponent.PlayerClamberingComponent_C.ExecuteUbergraph_PlayerClamberingComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

