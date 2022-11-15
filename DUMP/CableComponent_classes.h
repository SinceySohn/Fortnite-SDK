// Class CableComponent.CableActor
// Size: 0x290 (Inherited: 0x288)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x288(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x620 (Inherited: 0x570)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x568(0x01)
	bool bAttachEnd; // 0x569(0x01)
	struct FComponentReference AttachEndTo; // 0x570(0x28)
	struct FName AttachEndToSocketName; // 0x598(0x04)
	char pad_59E[0x2]; // 0x59e(0x02)
	struct FVector EndLocation; // 0x5a0(0x18)
	float CableLength; // 0x5b8(0x04)
	int32_t NumSegments; // 0x5bc(0x04)
	float SubstepTime; // 0x5c0(0x04)
	int32_t SolverIterations; // 0x5c4(0x04)
	bool bEnableStiffness; // 0x5c8(0x01)
	bool bUseSubstepping; // 0x5c9(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x5ca(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x5cb(0x01)
	bool bEnableCollision; // 0x5cc(0x01)
	char pad_5CD[0x3]; // 0x5cd(0x03)
	float CollisionFriction; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct FVector CableForce; // 0x5d8(0x18)
	float CableGravityScale; // 0x5f0(0x04)
	float CableWidth; // 0x5f4(0x04)
	int32_t NumSides; // 0x5f8(0x04)
	float TileMaterial; // 0x5fc(0x04)
	char pad_600[0x20]; // 0x600(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x6dfd378
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x6dfd1ec
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6dfd14c
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6dfd0ec
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6dfd080
};

