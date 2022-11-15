// BlueprintGeneratedClass BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C
// Size: 0xa81 (Inherited: 0x9d8)
struct ABGA_GenericCurieFuel_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UStaticMeshComponent* Curie Mesh; // 0x9e0(0x08)
	struct USphereComponent* Sphere; // 0x9e8(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x9f0(0x08)
	double ActorLifespanAfterIgnition; // 0x9f8(0x08)
	struct ABuildingWall* LocalWall; // 0xa00(0x08)
	bool IgniteSelf; // 0xa08(0x01)
	char pad_A09[0x7]; // 0xa09(0x07)
	double SelfFireMagnitude; // 0xa10(0x08)
	int32_t SelfPropagationFuel; // 0xa18(0x04)
	char pad_A1C[0x4]; // 0xa1c(0x04)
	double SelfCurieLandscapeIgnitionRadius; // 0xa20(0x08)
	bool ShouldFireFallWithGravity; // 0xa28(0x01)
	bool IgniteNearbyMaterialsImmediately; // 0xa29(0x01)
	char pad_A2A[0x6]; // 0xa2a(0x06)
	double IgniteNearbyMaterialsRadius; // 0xa30(0x08)
	double IgniteNearbyMaterialsFireMagnitude; // 0xa38(0x08)
	int32_t IgniteNearbyMaterialsPropogationFuel; // 0xa40(0x04)
	char pad_A44[0x4]; // 0xa44(0x04)
	double IgniteNearbyMaterialsLandscapeIgnitionRadius; // 0xa48(0x08)
	struct TArray<enum class EObjectTypeQuery> IgniteMaterialsObjectTypes; // 0xa50(0x10)
	struct UObject* IgniteMaterialsClassFilter; // 0xa60(0x08)
	bool ResumeSimulation; // 0xa68(0x01)
	bool CurieActive; // 0xa69(0x01)
	bool CurieHitVehicle; // 0xa6a(0x01)
	char pad_A6B[0x5]; // 0xa6b(0x05)
	struct AActor* HitActor; // 0xa70(0x08)
	struct UPrimitiveComponent* HitComponent; // 0xa78(0x08)
	bool IgnoreHits; // 0xa80(0x01)

	void ShouldPlayNativeCurieFX(struct FGameplayTag FxTag, struct FFortNativeCurieFXResponse& OutResponse); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ShouldPlayNativeCurieFX // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void IgniteNearbyMaterials(struct FVector SpherePos); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.IgniteNearbyMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_ResumeSimulation(); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnRep_ResumeSimulation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HitBuildingActor(struct UObject* ObjectRef, struct UPrimitiveComponent* PrimitiveObjectRef, bool& Success); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HitBuildingWall(struct UObject* ObjectRef, struct UPrimitiveComponent* PrimitiveObjectRef, bool& Success); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingWall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HitVehicle(struct UObject* ObjectRef, struct UPrimitiveComponent* PrimitiveObjectRef, bool& Success); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitVehicle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHits(struct UObject* ObjectRef, struct UPrimitiveComponent* PrimitiveObjectRef); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HandleHits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SelfIgnite(); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.SelfIgnite // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurieActive_112B241847E303B58BF962A699068D1C(); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieActive_112B241847E303B58BF962A699068D1C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttachedComponentDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.AttachedComponentDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BaseDied(struct AActor* DestroyedActor); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BaseDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnCurieElementDetached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieElementDetached_BP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_GenericCurieFuel_Parent(int32_t EntryPoint); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ExecuteUbergraph_BGA_GenericCurieFuel_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

