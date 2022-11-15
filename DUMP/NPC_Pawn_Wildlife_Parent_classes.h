// BlueprintGeneratedClass NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
// Size: 0x3b10 (Inherited: 0x39b8)
struct ANPC_Pawn_Wildlife_Parent_C : ANPC_Pawn_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x39b8(0x08)
	struct UNiagaraComponent* Wildlife_FootDust; // 0x39c0(0x08)
	struct UFortPawnComponent_Convert* ConvertComponent; // 0x39c8(0x08)
	struct TSoftClassPtr<UObject> Layer Idle; // 0x39d0(0x28)
	struct TSoftClassPtr<UObject> Layer Locomotion; // 0x39f8(0x28)
	struct TSoftClassPtr<UObject> Layer Jump; // 0x3a20(0x28)
	char LeaderTeam; // 0x3a48(0x01)
	char pad_3A49[0x7]; // 0x3a49(0x07)
	struct USoundEffectSourcePresetChain* VocalSourceEffectChainOverride; // 0x3a50(0x08)
	bool bTamingEnabled; // 0x3a58(0x01)
	char pad_3A59[0x7]; // 0x3a59(0x07)
	struct FMulticastInlineDelegate OnPickupGrabbed_Destroyed; // 0x3a60(0x10)
	bool bCanBeInteractedWithWhileTamed; // 0x3a70(0x01)
	char pad_3A71[0x3]; // 0x3a71(0x03)
	struct FActiveGameplayEffectHandle GE_Quest_Converted_Handle; // 0x3a74(0x08)
	char pad_3A7C[0x4]; // 0x3a7c(0x04)
	struct UGameplayEffect* GE_Quest_Converted_Irwin; // 0x3a80(0x08)
	struct FMulticastInlineDelegate ConvertedDispatcher; // 0x3a88(0x10)
	bool bIsBeingRidden; // 0x3a98(0x01)
	bool NPCStatusWidgetShouldDisplayDamage; // 0x3a99(0x01)
	char pad_3A9A[0x6]; // 0x3a9a(0x06)
	struct UGameplayEffect* GE_GoalSelectionWhileTamed; // 0x3aa0(0x08)
	struct FGameplayTagContainer T_GoalSelectionWhileTamed; // 0x3aa8(0x20)
	double CurrentEnergy; // 0x3ac8(0x08)
	struct FGameplayTag IrwinSlidingGC; // 0x3ad0(0x04)
	bool bLeaderSetSuccess; // 0x3ad4(0x01)
	char pad_3AD5[0x3]; // 0x3ad5(0x03)
	struct FGameplayTag JumpLandSoundLibTag; // 0x3ad8(0x04)
	struct FGameplayTag TameSoundLibTag; // 0x3adc(0x04)
	struct USoundBase* SoundIndicatorSound_Unridden; // 0x3ae0(0x08)
	struct USoundBase* SoundIndicatorSound_Ridden; // 0x3ae8(0x08)
	bool OverrideIncomingDmg; // 0x3af0(0x01)
	char pad_3AF1[0x7]; // 0x3af1(0x07)
	double OverridenIncomingDmgAmount; // 0x3af8(0x08)
	struct FMulticastInlineDelegate OnModifiedDamageReceived; // 0x3b00(0x10)

	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void PlayStateChangeAudio(enum class Enum_NPC_AlertLevel Index); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayStateChangeAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayAdditiveHitReacts(struct FVector& Hit Direction, struct UAnimMontage* Anim Montage); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayAdditiveHitReacts // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	float BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, struct AController* EventInstigator, struct AActor* DamageCauser); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintModifyIncomingDamage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPCStatusWidget_UpdateKeepVisible(bool ShouldKeepVisible); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPCStatusWidget_UpdateKeepVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CanBeInteractedWithWhenTamed(bool& bCanInteract); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.CanBeInteractedWithWhenTamed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void NPC PickupGrabbed_Destroyed(struct AActor* ActorGrabbed); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC PickupGrabbed_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTamingEnabled(bool EnableTaming); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.SetTamingEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC CanBeInteractedWith(bool& CanInteract); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC CanBeInteractedWith // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttachAndApplyVocalFX(struct FSoundLibraryPlaySoundResult& SoundLibraryResult); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AttachAndApplyVocalFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Water Splash at Water Surface(struct AFortWaterBodyActor* Water Body, bool Enter Water); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Water Splash at Water Surface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsValidAutoFireTarget(struct AActor* Attacker); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.IsValidAutoFireTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Play Sound Lib(struct FGameplayTag Event Name); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Sound Lib // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateTamingIndicator(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.UpdateTamingIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_LeaderTeam(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnRep_LeaderTeam // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06(struct UObject* Loaded); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void LinkAnimationLayers(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.LinkAnimationLayers // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AsyncLinkAnimationLayer(struct TSoftClassPtr<UObject> AnimationLayer); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AsyncLinkAnimationLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCustomizationsLoaded_BP(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnCustomizationsLoaded_BP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void On NPC PawnInteractedWith(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On NPC PawnInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature(struct AFortPawn* InstigatorPawn, struct AFortPawn* ConvertedPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(struct AFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void NPC AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC AlertLevelChangedServer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void NPC LeaderSet(bool Success?, struct AActor* Leader, enum class EUnconvertReason UnconvertReason); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC LeaderSet // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature(struct FSoundLibraryPlaySoundResult& Results, struct USoundLibraryContext* Context); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnBeingControlledChanged(bool bControlled); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnBeingControlledChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnApplyEffectOptimization(int32_t NewBudgetValue); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnApplyEffectOptimization // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void NPC UpdateHealthBarComponentVisibility(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC UpdateHealthBarComponentVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Pawn Focused(struct AFortPawn* FocusedPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On Pawn Focused // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideStatus(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.HideStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSlidingStateChanged(bool bNewSlidingState); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnSlidingStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLanded(struct FHitResult& Hit); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLandedMulticast(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLandedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTamedMulticast(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnTamedMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_Wildlife_Parent(int32_t EntryPoint); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ExecuteUbergraph_NPC_Pawn_Wildlife_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnModifiedDamageReceived__DelegateSignature(); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnModifiedDamageReceived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ConvertedDispatcher__DelegateSignature(bool Converted, struct AFortPawn* InstigatorPawn); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ConvertedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPickupGrabbed_Destroyed__DelegateSignature(struct ANPC_Pawn_Wildlife_Parent_C* WildlifePawn, struct AActor* ActorGrabbed); // Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPickupGrabbed_Destroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

