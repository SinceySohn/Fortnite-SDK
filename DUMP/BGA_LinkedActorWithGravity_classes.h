// BlueprintGeneratedClass BGA_LinkedActorWithGravity.BGA_LinkedActorWithGravity_C
// Size: 0x9fa (Inherited: 0x9d8)
struct ABGA_LinkedActorWithGravity_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x9e0(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x9e8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x9f0(0x08)
	bool SimulateOnBeginPlay; // 0x9f8(0x01)
	bool bAttached; // 0x9f9(0x01)

	void ReceiveBeginPlay(); // Function BGA_LinkedActorWithGravity.BGA_LinkedActorWithGravity_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function BGA_LinkedActorWithGravity.BGA_LinkedActorWithGravity_C.BndEvt__BGA_LinkedActorWithGravity_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BeginSimulation(); // Function BGA_LinkedActorWithGravity.BGA_LinkedActorWithGravity_C.BeginSimulation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_LinkedActorWithGravity.BGA_LinkedActorWithGravity_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnSimulationResumed(); // Function BGA_LinkedActorWithGravity.BGA_LinkedActorWithGravity_C.OnSimulationResumed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_LinkedActorWithGravity(int32_t EntryPoint); // Function BGA_LinkedActorWithGravity.BGA_LinkedActorWithGravity_C.ExecuteUbergraph_BGA_LinkedActorWithGravity // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

