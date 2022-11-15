// BlueprintGeneratedClass B_Prj_Athena_ShieldGenerator.B_Prj_Athena_ShieldGenerator_C
// Size: 0xb20 (Inherited: 0xaf1)
struct AB_Prj_Athena_ShieldGenerator_C : AB_Prj_Athena_BGASpawner_C {
	char pad_AF1[0x7]; // 0xaf1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf8(0x08)
	struct UAudioComponent* InAirLoopSound; // 0xb00(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xb08(0x08)
	struct UParticleSystemComponent* P_ShieldBubble_SilverBlazer_PrjTrail_; // 0xb10(0x08)
	struct USkeletalMeshComponent* SkeletalMesh1; // 0xb18(0x08)

	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_ShieldGenerator.B_Prj_Athena_ShieldGenerator_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_ShieldGenerator(int32_t EntryPoint); // Function B_Prj_Athena_ShieldGenerator.B_Prj_Athena_ShieldGenerator_C.ExecuteUbergraph_B_Prj_Athena_ShieldGenerator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

