// BlueprintGeneratedClass NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C
// Size: 0x3ba0 (Inherited: 0x3b10)
struct ANPC_Pawn_Irwin_Prey_Burt_C : ANPC_Pawn_Wildlife_Prey_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b10(0x08)
	struct UFTP_NPC_Assignment_Loot_Omnivore_C* FTP_NPC_Assignment_Loot_Omnivore; // 0x3b18(0x08)
	struct UFortAthenaCollisionReactionComponent* FortAthenaCollisionReaction_Riding_Charge; // 0x3b20(0x08)
	struct UFortCharacterPartsComponent* FortCharacterParts; // 0x3b28(0x08)
	struct FGameplayTagContainer Interaction Preventing Tags; // 0x3b30(0x20)
	struct FGameplayTag SprintImpactGameplayCueTag; // 0x3b50(0x04)
	char pad_3B54[0x4]; // 0x3b54(0x04)
	struct UGameplayEffect* GESprintImpactPawn; // 0x3b58(0x08)
	struct UGameplayEffect* GESprintImpactVehicle; // 0x3b60(0x08)
	struct FGameplayTagContainer InteractingPawnPreventingTags; // 0x3b68(0x20)
	struct UNiagaraSystem* Landing FX; // 0x3b88(0x08)
	bool playLandingFX; // 0x3b90(0x01)
	char pad_3B91[0x7]; // 0x3b91(0x07)
	double ColorVariation; // 0x3b98(0x08)

	void SetColorVariation(); // Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.SetColorVariation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsFirstBody); // Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsLastBody); // Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnLanded(struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnCustomizationsLoaded_BP(); // Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.OnCustomizationsLoaded_BP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt(int32_t EntryPoint); // Function NPC_Pawn_Irwin_Prey_Burt.NPC_Pawn_Irwin_Prey_Burt_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Burt // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

