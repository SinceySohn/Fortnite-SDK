// BlueprintGeneratedClass Prj_Athena_GrapplingHoot.Prj_Athena_GrapplingHoot_C
// Size: 0xf40 (Inherited: 0xf31)
struct APrj_Athena_GrapplingHoot_C : APrj_Athena_GliderGrappler_Parent_C {
	char pad_F31[0x7]; // 0xf31(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf38(0x08)

	void SpawnRope(struct AFortPlayerPawn* PlayerPawn, struct AB_HookGunRope_C*& RopeSpawned); // Function Prj_Athena_GrapplingHoot.Prj_Athena_GrapplingHoot_C.SpawnRope // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Prj_Athena_GrapplingHoot.Prj_Athena_GrapplingHoot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prj_Athena_GrapplingHoot(int32_t EntryPoint); // Function Prj_Athena_GrapplingHoot.Prj_Athena_GrapplingHoot_C.ExecuteUbergraph_Prj_Athena_GrapplingHoot // (Final|UbergraphFunction) // @ game+0xdef49c
};

