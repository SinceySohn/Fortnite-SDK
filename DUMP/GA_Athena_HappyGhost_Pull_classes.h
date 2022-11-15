// BlueprintGeneratedClass GA_Athena_HappyGhost_Pull.GA_Athena_HappyGhost_Pull_C
// Size: 0xbf0 (Inherited: 0xb20)
struct UGA_Athena_HappyGhost_Pull_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* Target; // 0xb28(0x08)
	struct AFortPlayerPawn* Launcher; // 0xb30(0x08)
	struct FGameplayTag T_InVehicle; // 0xb38(0x04)
	char pad_B3C[0x4]; // 0xb3c(0x04)
	double LaunchArc; // 0xb40(0x08)
	double LaunchGrav; // 0xb48(0x08)
	struct FScalableFloat Row_CanPullFriends; // 0xb50(0x28)
	struct FScalableFloat Row_PullEnabled; // 0xb78(0x28)
	struct FScalableFloat Row_MaxPullLocation; // 0xba0(0x28)
	struct FGameplayTagContainer TC_TagsForAIToIgnoreLaunch; // 0xbc8(0x20)
	struct AFortAIPawn* AITarget; // 0xbe8(0x08)

	void CalculateArc(struct AActor* ArcTarget, struct FVector& OutLaunchVelocity); // Function GA_Athena_HappyGhost_Pull.GA_Athena_HappyGhost_Pull_C.CalculateArc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_HappyGhost_Pull.GA_Athena_HappyGhost_Pull_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_HappyGhost_Pull(int32_t EntryPoint); // Function GA_Athena_HappyGhost_Pull.GA_Athena_HappyGhost_Pull_C.ExecuteUbergraph_GA_Athena_HappyGhost_Pull // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

