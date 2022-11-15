// BlueprintGeneratedClass FortWaterBodyBP.FortWaterBodyBP_C
// Size: 0x3b8 (Inherited: 0x3a8)
struct AFortWaterBodyBP_C : AFortWaterBodyActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct ABP_FluidSim_FN_C* FluidSimBP; // 0x3b0(0x08)

	void ReceiveBeginPlay(); // Function FortWaterBodyBP.FortWaterBodyBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnReceivedBulletImpact(struct FHitResult& Hit); // Function FortWaterBodyBP.FortWaterBodyBP_C.OnReceivedBulletImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FortWaterBodyBP(int32_t EntryPoint); // Function FortWaterBodyBP.FortWaterBodyBP_C.ExecuteUbergraph_FortWaterBodyBP // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

