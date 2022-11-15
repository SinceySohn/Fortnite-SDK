// BlueprintGeneratedClass GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C
// Size: 0x970 (Inherited: 0x960)
struct AGCN_Loop_ShipCannon_PlayerLaunch_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UAudioComponent* InAirLoop; // 0x968(0x08)

	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCN_Loop_ShipCannon_PlayerLaunch(int32_t EntryPoint); // Function GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C.ExecuteUbergraph_GCN_Loop_ShipCannon_PlayerLaunch // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

