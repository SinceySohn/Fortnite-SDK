// BlueprintGeneratedClass GCN_PhaseableBuild_Player_Phase_Instant.GCN_PhaseableBuild_Player_Phase_Instant_C
// Size: 0x240 (Inherited: 0x210)
struct UGCN_PhaseableBuild_Player_Phase_Instant_C : UFortGameplayCueNotify_Burst {
	struct USoundBase* SFX_PhaseWall_Player; // 0x210(0x08)
	struct USoundBase* SFX_PhaseFloor_Player; // 0x218(0x08)
	struct USoundBase* SFX_PhaseCeiling_Player; // 0x220(0x08)
	struct USoundBase* SFX_PhaseWall_Wall; // 0x228(0x08)
	struct USoundBase* SFX_PhaseFloor_Floor; // 0x230(0x08)
	struct USoundBase* SFX_PhaseCeiling_Ceiling; // 0x238(0x08)

	void Set Audio Comp Team Affiliation(struct UAudioComponent* AudioComponent, struct AActor* Pawn); // Function GCN_PhaseableBuild_Player_Phase_Instant.GCN_PhaseableBuild_Player_Phase_Instant_C.Set Audio Comp Team Affiliation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_PhaseableBuild_Player_Phase_Instant.GCN_PhaseableBuild_Player_Phase_Instant_C.OnBurstGeneric // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

