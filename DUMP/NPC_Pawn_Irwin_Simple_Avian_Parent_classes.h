// BlueprintGeneratedClass NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C
// Size: 0x3bb0 (Inherited: 0x3b10)
struct ANPC_Pawn_Irwin_Simple_Avian_Parent_C : ANPC_Pawn_Wildlife_Simple_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b10(0x08)
	struct UFortCharacterPartsComponent* FortCharacterParts; // 0x3b18(0x08)
	struct FVector LastLocation; // 0x3b20(0x18)
	struct AActor* PreviousMovementBaseActor; // 0x3b38(0x08)
	struct FScalableFloat NPC ChanceToFlyAwayWhenMovementBaseIsDamaged HF; // 0x3b40(0x28)
	double FlyingVelocity; // 0x3b68(0x08)
	struct USoundBase* FlyingSound; // 0x3b70(0x08)
	struct UAudioComponent* FlyingAudioComponent; // 0x3b78(0x08)
	struct FTimerHandle HandleFlyingVelocity; // 0x3b80(0x08)
	double LastTrapHitTime; // 0x3b88(0x08)
	struct FGameplayTagContainer LastDamageTagsAvian; // 0x3b90(0x20)

	void PlayFlyAudio(); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.PlayFlyAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateFlyingAudio(); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.UpdateFlyingAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopFlyingAudio(); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.StopFlyingAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC TryToFlyAway(struct FGameplayTagContainer DamageTags); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.NPC TryToFlyAway // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC HaveWeLostOurMovementBaseActor(bool& LostBase, struct AActor*& MovementBaseActor); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.NPC HaveWeLostOurMovementBaseActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC ClearMovementBaseActor(); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.NPC ClearMovementBaseActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC TryUpdateMovementBaseActor(struct AActor*& MovementBaseActor); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.NPC TryUpdateMovementBaseActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_A58BBE1B4F7B8A36A7D4F6BB6F748B24(struct FGameplayEventData Payload); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.EventReceived_A58BBE1B4F7B8A36A7D4F6BB6F748B24 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void LineLoop(); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.LineLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void (struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC BindMovementBaseDeath(struct AActor* MovementBase); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.NPC BindMovementBaseDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC UnBindMovementBaseDeath(struct AActor* MovementBase); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.NPC UnBindMovementBaseDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged_Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.OnDamaged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnActorHit_Event(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.OnActorHit_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Avian_Parent(int32_t EntryPoint); // Function NPC_Pawn_Irwin_Simple_Avian_Parent.NPC_Pawn_Irwin_Simple_Avian_Parent_C.ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Avian_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

