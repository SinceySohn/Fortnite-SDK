// BlueprintGeneratedClass Prj_Athena_GrappleGlider.Prj_Athena_GrappleGlider_C
// Size: 0xf99 (Inherited: 0xf40)
struct APrj_Athena_GrappleGlider_C : APrj_Athena_GrapplingHoot_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf40(0x08)
	struct FTimerHandle CheckForTrees_Timer; // 0xf48(0x08)
	bool IsRiding; // 0xf50(0x01)
	char pad_F51[0x7]; // 0xf51(0x07)
	struct FScalableFloat CheckForTreesFrequency; // 0xf58(0x28)
	struct FVector PreviousFrameLocation; // 0xf80(0x18)
	bool bCheckForTrees; // 0xf98(0x01)

	void SpawnRope(struct AFortPlayerPawn* PlayerPawn, struct AB_HookGunRope_C*& RopeSpawned); // Function Prj_Athena_GrappleGlider.Prj_Athena_GrappleGlider_C.SpawnRope // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_12C35C3846FF74B64849F4A1C7DEC78E(); // Function Prj_Athena_GrappleGlider.Prj_Athena_GrappleGlider_C.Added_12C35C3846FF74B64849F4A1C7DEC78E // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Prj_Athena_GrappleGlider.Prj_Athena_GrappleGlider_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void CheckForTrees(); // Function Prj_Athena_GrappleGlider.Prj_Athena_GrappleGlider_C.CheckForTrees // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Prj_Athena_GrappleGlider.Prj_Athena_GrappleGlider_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetCheckForTreesTimer(); // Function Prj_Athena_GrappleGlider.Prj_Athena_GrappleGlider_C.SetCheckForTreesTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prj_Athena_GrappleGlider(int32_t EntryPoint); // Function Prj_Athena_GrappleGlider.Prj_Athena_GrappleGlider_C.ExecuteUbergraph_Prj_Athena_GrappleGlider // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

