// BlueprintGeneratedClass B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C
// Size: 0xae0 (Inherited: 0xa20)
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UParticleSystemComponent* FireTrail; // 0xa28(0x08)
	struct FVector Fire Plane Trace Offset; // 0xa30(0x18)
	double Fire Plane Spawn Offset; // 0xa48(0x08)
	struct ABuildingGameplayActor* BGAToSpawn; // 0xa50(0x08)
	struct UParticleSystem* DesiredFireTrailParticle; // 0xa58(0x08)
	bool DoesMeshAngleNeedAdjusted; // 0xa60(0x01)
	bool ShouldFireSpawnWithRandomChance; // 0xa61(0x01)
	char pad_A62[0x6]; // 0xa62(0x06)
	double RandomSpawnChanceWeight; // 0xa68(0x08)
	bool ShouldSpawnFire; // 0xa70(0x01)
	char pad_A71[0x7]; // 0xa71(0x07)
	struct USoundBase* FireFizzle; // 0xa78(0x08)
	struct FTransform LineTraceTransform; // 0xa80(0x60)

	struct FTransform Line Trace for Mesh Angle(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Line Trace for Mesh Angle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Landed In Water(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Landed In Water // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void SpawnCurieBGA(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.SpawnCurieBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DelaySpawnCurieBGA(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.DelaySpawnCurieBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent(int32_t EntryPoint); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

