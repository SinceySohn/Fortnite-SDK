// BlueprintGeneratedClass BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C
// Size: 0xbd2 (Inherited: 0xae0)
struct ABGA_Athena_SCMachine_Pickup_C : ABuildingGameplayActorSpawnChip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae0(0x08)
	struct UCapsuleComponent* OverlapCollision; // 0xae8(0x08)
	struct UStaticMeshComponent* ParentMesh; // 0xaf0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0xaf8(0x08)
	struct UAudioComponent* SC_Machine_Memory_Card_Loop_Cue; // 0xb00(0x08)
	struct UParticleSystemComponent* SpawnInEffect; // 0xb08(0x08)
	struct UStaticMeshComponent* BackgroundGlow; // 0xb10(0x08)
	struct UStaticMeshComponent* Card; // 0xb18(0x08)
	int32_t UnHide; // 0xb20(0x04)
	char pad_B24[0x4]; // 0xb24(0x04)
	double DelayBeforeUnhide; // 0xb28(0x08)
	char OwnerTeam; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
	struct FTimerHandle Timer_DestroyPickup; // 0xb38(0x08)
	struct FScalableFloat Row_PickupLife; // 0xb40(0x28)
	struct FText InteractText; // 0xb68(0x18)
	struct UParticleSystem* SpawnOutParticle; // 0xb80(0x08)
	struct USoundBase* PickupSound; // 0xb88(0x08)
	bool SpawnSoundPlayed; // 0xb90(0x01)
	char pad_B91[0x7]; // 0xb91(0x07)
	struct USoundBase* SpawnInSound; // 0xb98(0x08)
	bool IsPendingKill; // 0xba0(0x01)
	bool HideAndKill; // 0xba1(0x01)
	char pad_BA2[0x6]; // 0xba2(0x06)
	struct FScalableFloat Row_PickUpInteractTime; // 0xba8(0x28)
	bool IsDelayingDeath; // 0xbd0(0x01)
	bool OwnerDiedInVortex; // 0xbd1(0x01)

	void OnRep_HideAndKill(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_UnHide(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void CollectPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SpawnSound(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HideAndKillPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DelayDestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DelayDestroyPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_SCMachine_Pickup(int32_t EntryPoint); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

