// BlueprintGeneratedClass GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena.GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena_C
// Size: 0xb70 (Inherited: 0xb5d)
struct UGA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena_C : UGA_Ranged_GenericProjectileExplosive_Athena_C {
	char pad_B5D[0x3]; // 0xb5d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb60(0x08)
	struct FTimerHandle NewVar; // 0xb68(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena.GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_CommitExecute(); // Function GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena.GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena_C.K2_CommitExecute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CustomEvent(); // Function GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena.GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena(int32_t EntryPoint); // Function GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena.GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena_C.ExecuteUbergraph_GA_Ranged_GenericProjectileExplosive_SnowballLauncher_Athena // (Final|UbergraphFunction) // @ game+0xdef49c
};

