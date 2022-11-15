// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C
// Size: 0xbf0 (Inherited: 0xb20)
struct UGA_Athena_FloppingRabbit_Pull_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* Target; // 0xb28(0x08)
	struct AFortPlayerPawn* Launcher; // 0xb30(0x08)
	struct AFortAIPawn* AITarget; // 0xb38(0x08)
	struct FGameplayTag T_InVehicle; // 0xb40(0x04)
	char pad_B44[0x4]; // 0xb44(0x04)
	double LaunchArc; // 0xb48(0x08)
	double LaunchGrav; // 0xb50(0x08)
	struct FScalableFloat Row_PullAmount; // 0xb58(0x28)
	struct FScalableFloat Row_PullEnabled; // 0xb80(0x28)
	struct FScalableFloat Row_CanPullFriends; // 0xba8(0x28)
	struct FGameplayTagContainer TC_TagsForAIToIgnoreLaunch; // 0xbd0(0x20)

	void CalcLaunchValue(struct AActor* Target, struct FVector& OutLaunchVelocity); // Function GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C.CalcLaunchValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Pull(int32_t EntryPoint); // Function GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Pull // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

