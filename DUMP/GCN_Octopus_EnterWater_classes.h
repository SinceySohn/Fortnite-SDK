// BlueprintGeneratedClass GCN_Octopus_EnterWater.GCN_Octopus_EnterWater_C
// Size: 0x220 (Inherited: 0x210)
struct UGCN_Octopus_EnterWater_C : UFortGameplayCueNotify_Burst {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x210(0x08)
	double Bounds Normalized; // 0x218(0x08)

	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Octopus_EnterWater.GCN_Octopus_EnterWater_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xdef49c
	void ExecuteUbergraph_GCN_Octopus_EnterWater(int32_t EntryPoint); // Function GCN_Octopus_EnterWater.GCN_Octopus_EnterWater_C.ExecuteUbergraph_GCN_Octopus_EnterWater // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

