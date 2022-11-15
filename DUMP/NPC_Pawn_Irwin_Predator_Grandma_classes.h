// BlueprintGeneratedClass NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C
// Size: 0x3b88 (Inherited: 0x3b10)
struct ANPC_Pawn_Irwin_Predator_Grandma_C : ANPC_Pawn_Wildlife_Predator_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b10(0x08)
	struct UFortCharacterPartsComponent* FortCharacterParts; // 0x3b18(0x08)
	struct UFTP_NPC_Assignment_Loot_Carnivore_C* FTP_NPC_Assignment_Loot_Carnivore; // 0x3b20(0x08)
	struct UNiagaraComponent* NS_Irwin_Grandma_IdleEye; // 0x3b28(0x08)
	struct FGameplayTagContainer Interaction Preventing Tags; // 0x3b30(0x20)
	struct FGameplayTagContainer InteractingPawnPreventingTags; // 0x3b50(0x20)
	struct UNiagaraSystem* Landing FX; // 0x3b70(0x08)
	bool playLandingFX; // 0x3b78(0x01)
	char pad_3B79[0x7]; // 0x3b79(0x07)
	double ColorVariation; // 0x3b80(0x08)

	void SetColorVariation(); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.SetColorVariation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayAdditiveHitReacts(struct FVector& Hit Direction, struct UAnimMontage* Anim Montage); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.PlayAdditiveHitReacts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UserConstructionScript(); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCustomizationsLoaded_BP(); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.OnCustomizationsLoaded_BP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLanded(struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsFirstBody); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsLastBody); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_Irwin_Predator_Grandma(int32_t EntryPoint); // Function NPC_Pawn_Irwin_Predator_Grandma.NPC_Pawn_Irwin_Predator_Grandma_C.ExecuteUbergraph_NPC_Pawn_Irwin_Predator_Grandma // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

