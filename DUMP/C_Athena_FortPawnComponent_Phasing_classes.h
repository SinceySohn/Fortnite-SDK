// BlueprintGeneratedClass C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C
// Size: 0x319 (Inherited: 0x1e0)
struct UC_Athena_FortPawnComponent_Phasing_C : UFortPawnComponent_Phasing {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e0(0x08)
	struct UDecalComponent* TargetingDecal; // 0x1e8(0x08)
	struct UMaterialInstanceDynamic* DecalMID; // 0x1f0(0x08)
	struct FVector MaxDecalSize; // 0x1f8(0x18)
	struct AFortPawn* PawnRef; // 0x210(0x08)
	bool ShouldShowFX; // 0x218(0x01)
	bool IsValidPhaseLocation; // 0x219(0x01)
	char pad_21A[0x6]; // 0x21a(0x06)
	double IsValidLocationTickTime; // 0x220(0x08)
	double DefaultTickTime; // 0x228(0x08)
	double CurrentFXScale; // 0x230(0x08)
	struct UNiagaraComponent* TargetingParticles; // 0x238(0x08)
	struct FTimerHandle Timer_ScaleFX; // 0x240(0x08)
	struct FTimerHandle Timer_LookForValidPhaseLocation; // 0x248(0x08)
	struct UAudioComponent* TargetingAudio; // 0x250(0x08)
	struct FScalableFloat WallHitAngleRestriction; // 0x258(0x28)
	struct FScalableFloat StairHitAngleRestriction; // 0x280(0x28)
	struct FScalableFloat EnableBuildPhasingDecal; // 0x2a8(0x28)
	struct UBuildingInteractionPrompts_C* DA_CantPhase; // 0x2d0(0x08)
	struct UAudioComponent* TargetingParticlesAudio; // 0x2d8(0x08)
	struct FTimerHandle Timer_ScaleIsValidPhaseFX; // 0x2e0(0x08)
	double CurrentIsValidFXScale; // 0x2e8(0x08)
	struct FScalableFloat EnablePhasingUI; // 0x2f0(0x28)
	bool TargetedNewBuild; // 0x318(0x01)

	void ToggleFX(); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.ToggleFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ScaleValidPhaseFX(); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.ScaleValidPhaseFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsPlayerWithinValidDistance(bool& IsPlayerWithinValidDistance); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.IsPlayerWithinValidDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetPhaseIndicator(bool NewIsValidPhaseLocation); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.SetPhaseIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Audio Comp Team Affiliation(struct UAudioComponent* AudioComponent); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.Set Audio Comp Team Affiliation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Targeting Audio(); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.Update Targeting Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisableTickAndCleanUp(); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.DisableTickAndCleanUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckIfBuildIsWithinPhasingAngle(bool& IsBuildWithinPhasingAngle); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.CheckIfBuildIsWithinPhasingAngle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ScaleFX(); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.ScaleFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnIsTargetingBuild(bool bIsTargetingBuild); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.OnIsTargetingBuild // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ToggleTargetingFX(bool NewShouldShowFX, bool NewIsValidPhaseLocation); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.ToggleTargetingFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LookForValidPhaseLocation(); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.LookForValidPhaseLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_C_Athena_FortPawnComponent_Phasing(int32_t EntryPoint); // Function C_Athena_FortPawnComponent_Phasing.C_Athena_FortPawnComponent_Phasing_C.ExecuteUbergraph_C_Athena_FortPawnComponent_Phasing // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

