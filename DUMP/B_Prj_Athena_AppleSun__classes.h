// BlueprintGeneratedClass B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C
// Size: 0xb1c (Inherited: 0xaf1)
struct AB_Prj_Athena_AppleSun__C : AB_Prj_Athena_BGASpawner_C {
	char pad_AF1[0x7]; // 0xaf1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf8(0x08)
	struct UParticleSystemComponent* P_AppleSun_Projectile_Trail; // 0xb00(0x08)
	struct UStaticMeshComponent* Apple_Sun; // 0xb08(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xb10(0x08)
	int32_t CrashpadsBouncedOffOf; // 0xb18(0x04)

	void UserConstructionScript(); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_AppleSun_(int32_t EntryPoint); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.ExecuteUbergraph_B_Prj_Athena_AppleSun_ // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

