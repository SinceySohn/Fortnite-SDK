// BlueprintGeneratedClass GCN_Galileo_Lobster_Block_Break.GCN_Galileo_Lobster_Block_Break_C
// Size: 0x214 (Inherited: 0x210)
struct UGCN_Galileo_Lobster_Block_Break_C : UGCN_Galileo_Lobster_Parent_C {
	struct FGameplayTag SoundLibraryTag; // 0x210(0x04)

	void PlaySoundLibrary(struct UObject* Actor); // Function GCN_Galileo_Lobster_Block_Break.GCN_Galileo_Lobster_Block_Break_C.PlaySoundLibrary // (Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Galileo_Lobster_Block_Break.GCN_Galileo_Lobster_Block_Break_C.OnBurstGeneric // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

