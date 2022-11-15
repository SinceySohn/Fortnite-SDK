// BlueprintGeneratedClass GCNL_Resolve_Cannon_PlayerLaunched.GCNL_Resolve_Cannon_PlayerLaunched_C
// Size: 0x998 (Inherited: 0x970)
struct AGCNL_Resolve_Cannon_PlayerLaunched_C : AGCN_Loop_ShipCannon_PlayerLaunch_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x970(0x08)
	struct UPostProcessComponent* PostProcess; // 0x978(0x08)
	float BlendTimeline_BlendWeight_6552DEA4471C1B5028D2A6880300A8EA; // 0x980(0x04)
	enum class ETimelineDirection BlendTimeline__Direction_6552DEA4471C1B5028D2A6880300A8EA; // 0x984(0x01)
	char pad_985[0x3]; // 0x985(0x03)
	struct UTimelineComponent* BlendTimeline; // 0x988(0x08)
	double RemoteViewerPostBlendWeight; // 0x990(0x08)

	void BlendTimeline__FinishedFunc(); // Function GCNL_Resolve_Cannon_PlayerLaunched.GCNL_Resolve_Cannon_PlayerLaunched_C.BlendTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BlendTimeline__UpdateFunc(); // Function GCNL_Resolve_Cannon_PlayerLaunched.GCNL_Resolve_Cannon_PlayerLaunched_C.BlendTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Resolve_Cannon_PlayerLaunched.GCNL_Resolve_Cannon_PlayerLaunched_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Resolve_Cannon_PlayerLaunched(int32_t EntryPoint); // Function GCNL_Resolve_Cannon_PlayerLaunched.GCNL_Resolve_Cannon_PlayerLaunched_C.ExecuteUbergraph_GCNL_Resolve_Cannon_PlayerLaunched // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

