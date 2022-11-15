// BlueprintGeneratedClass GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C
// Size: 0x998 (Inherited: 0x960)
struct AGCN_Athena_SneakySnowman_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UArrowComponent* Arrow; // 0x968(0x08)
	struct UArrowComponent* Arrow2; // 0x970(0x08)
	struct UArrowComponent* Arrow1; // 0x978(0x08)
	struct UStaticMeshComponent* SnowmanMesh; // 0x980(0x08)
	struct AActor* PlayerPawn; // 0x988(0x08)
	struct USoundBase* FootstepSound; // 0x990(0x08)

	void On Player Step(); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.On Player Step // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCN_Athena_SneakySnowman(int32_t EntryPoint); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.ExecuteUbergraph_GCN_Athena_SneakySnowman // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

