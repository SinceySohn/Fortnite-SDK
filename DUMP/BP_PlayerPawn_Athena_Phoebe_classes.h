// BlueprintGeneratedClass BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C
// Size: 0x5d2c (Inherited: 0x5d19)
struct ABP_PlayerPawn_Athena_Phoebe_C : APlayerPawn_Athena_C {
	char pad_5D19[0x7]; // 0x5d19(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d20(0x08)
	struct FName AIEvaluator_CharacterLaunchedKeyName; // 0x5d28(0x04)

	void OnLaunched(struct FVector LaunchVelocity, bool bXYOverride, bool bZOverride); // Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnLaunched // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe(int32_t EntryPoint); // Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe // (Final|UbergraphFunction) // @ game+0xdef49c
};

