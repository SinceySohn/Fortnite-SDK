// BlueprintGeneratedClass GCNL_Valet_Boost_RadialBlur.GCNL_Valet_Boost_RadialBlur_C
// Size: 0x980 (Inherited: 0x960)
struct AGCNL_Valet_Boost_RadialBlur_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UPostProcessComponent* PostProcess; // 0x968(0x08)
	float BlendTimeline_BlendWeight_4BA13AB34E6EEF57F3BD4A9FB71B4A52; // 0x970(0x04)
	enum class ETimelineDirection BlendTimeline__Direction_4BA13AB34E6EEF57F3BD4A9FB71B4A52; // 0x974(0x01)
	char pad_975[0x3]; // 0x975(0x03)
	struct UTimelineComponent* BlendTimeline; // 0x978(0x08)

	void BlendTimeline__FinishedFunc(); // Function GCNL_Valet_Boost_RadialBlur.GCNL_Valet_Boost_RadialBlur_C.BlendTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BlendTimeline__UpdateFunc(); // Function GCNL_Valet_Boost_RadialBlur.GCNL_Valet_Boost_RadialBlur_C.BlendTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Valet_Boost_RadialBlur.GCNL_Valet_Boost_RadialBlur_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Valet_Boost_RadialBlur.GCNL_Valet_Boost_RadialBlur_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Valet_Boost_RadialBlur(int32_t EntryPoint); // Function GCNL_Valet_Boost_RadialBlur.GCNL_Valet_Boost_RadialBlur_C.ExecuteUbergraph_GCNL_Valet_Boost_RadialBlur // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

