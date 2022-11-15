// BlueprintGeneratedClass GCNL_Athena_RealityFlower_SeedPod_LowGravity.GCNL_Athena_RealityFlower_SeedPod_LowGravity_C
// Size: 0x430 (Inherited: 0x3e8)
struct AGCNL_Athena_RealityFlower_SeedPod_LowGravity_C : AGCN_Athena_LowGravity_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct USoundBase* FadeOutSound; // 0x3f0(0x08)
	double FadeOutSound_FadeOutDuration; // 0x3f8(0x08)
	double AudioFadeoutDuration; // 0x400(0x08)
	struct FScalableFloat BuffDuration; // 0x408(0x28)

	void Activated(struct AActor* PlayerPawn); // Function GCNL_Athena_RealityFlower_SeedPod_LowGravity.GCNL_Athena_RealityFlower_SeedPod_LowGravity_C.Activated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Athena_RealityFlower_SeedPod_LowGravity.GCNL_Athena_RealityFlower_SeedPod_LowGravity_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FadeAudio(); // Function GCNL_Athena_RealityFlower_SeedPod_LowGravity.GCNL_Athena_RealityFlower_SeedPod_LowGravity_C.FadeAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_RealityFlower_SeedPod_LowGravity(int32_t EntryPoint); // Function GCNL_Athena_RealityFlower_SeedPod_LowGravity.GCNL_Athena_RealityFlower_SeedPod_LowGravity_C.ExecuteUbergraph_GCNL_Athena_RealityFlower_SeedPod_LowGravity // (Final|UbergraphFunction) // @ game+0xdef49c
};

