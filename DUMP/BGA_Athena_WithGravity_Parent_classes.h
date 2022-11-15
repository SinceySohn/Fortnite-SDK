// BlueprintGeneratedClass BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C
// Size: 0xc91 (Inherited: 0x9d8)
struct ABGA_Athena_WithGravity_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0x9e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x9e8(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x9f0(0x08)
	bool ResumeGravSimOnBegin; // 0x9f8(0x01)
	bool bResumeSimulation; // 0x9f9(0x01)
	char pad_9FA[0x6]; // 0x9fa(0x06)
	struct FHitResult NullHit; // 0xa00(0xe0)
	struct FVector GravImpact_Loc; // 0xae0(0x18)
	struct FVector GravHitNormal; // 0xaf8(0x18)
	double GravMaxSlope; // 0xb10(0x08)
	bool CheckForBounce; // 0xb18(0x01)
	char pad_B19[0x7]; // 0xb19(0x07)
	double ForcedBounceExtraZ; // 0xb20(0x08)
	int32_t ForcedBounceCurrentCount; // 0xb28(0x04)
	char pad_B2C[0x4]; // 0xb2c(0x04)
	double ForcedBounceMult; // 0xb30(0x08)
	struct TArray<struct AActor*> GravFoundBuildingOnDied; // 0xb38(0x10)
	bool RepCollision; // 0xb48(0x01)
	char pad_B49[0x7]; // 0xb49(0x07)
	struct UObject* AdditionalBounceObject; // 0xb50(0x08)
	int32_t ForcedBounceMaxCount; // 0xb58(0x04)
	bool ForceBounce; // 0xb5c(0x01)
	bool CountNonForceBounces; // 0xb5d(0x01)
	char pad_B5E[0x2]; // 0xb5e(0x02)
	double BounceExtraZ; // 0xb60(0x08)
	double BounceMult; // 0xb68(0x08)
	bool ShouldAttach; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct TArray<struct AActor*> ActorsToNotAttachTo; // 0xb78(0x10)
	bool DontAttachToOthersOfThisClass; // 0xb88(0x01)
	bool DebugText; // 0xb89(0x01)
	bool ShouldNotReattach; // 0xb8a(0x01)
	bool BlockStoppingSim; // 0xb8b(0x01)
	bool DeactivatePawnAndVehicleCollisionOnStop; // 0xb8c(0x01)
	bool AllowReattachmentToActors; // 0xb8d(0x01)
	char pad_B8E[0x2]; // 0xb8e(0x02)
	struct FHitResult StopSimHitResult; // 0xb90(0xe0)
	struct FVector StopSimServerLocation; // 0xc70(0x18)
	double BounceAwayFromLocation_MinSpeed; // 0xc88(0x08)
	bool BounceOffTires; // 0xc90(0x01)

	void BounceBGAAwayFromLocation(struct FVector LocationToBounceAwayFrom); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BounceBGAAwayFromLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_StopSimServerLocation(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_StopSimServerLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_StopLocation(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_StopLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Init(struct FVector GravHitNormal); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAttach(struct AActor* AttachedActor); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnAttach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RestartSimulation(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.RestartSimulation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttachToBindedActor(struct UPrimitiveComponent* AttachComp); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachToBindedActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BounceBGA(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BounceBGA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForSameClassToBounce(struct AActor* Hit, bool& HitSameClass); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.CheckForSameClassToBounce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_RepCollision(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_RepCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceBounceBGA(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ForceBounceBGA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bResumeSimulation(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_bResumeSimulation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BaseDestroyed(struct AActor* DestroyedActor); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BaseDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleBinding(struct AActor* Actor, struct UPrimitiveComponent* HitComp); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.HandleBinding // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void StopSim(struct FHitResult Hit); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.StopSim // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Impulse(double DelayBeforeImpulse, double DelayBeforeCollision, struct FVector ImpulseOrigin, struct FVector ImpulseAmount, bool SetCollisionAfterImpulse); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Impulse // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayHitFX(struct FHitResult HitResult); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.PlayHitFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnFXSounds(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SpawnFXSounds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttachedWasDestroyed(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachedWasDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SlidingDoorOpened(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SlidingDoorOpened // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUnderneathPhysicsObjectAwakeChanged(struct UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnUnderneathPhysicsObjectAwakeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_WithGravity_Parent(int32_t EntryPoint); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ExecuteUbergraph_BGA_Athena_WithGravity_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

