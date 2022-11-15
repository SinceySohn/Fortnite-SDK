// BlueprintGeneratedClass CBGA_Parent.CBGA_Parent_C
// Size: 0xbc8 (Inherited: 0xa48)
struct ACBGA_Parent_C : ABuildingGameplayActorConsumable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa48(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xa50(0x08)
	bool ReplicatedCanInteract; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct FScalableFloat Row_FirstInteractSpeed; // 0xa60(0x28)
	struct FScalableFloat Row_SecondInteractSpeed; // 0xa88(0x28)
	struct FText FirstInteractText; // 0xab0(0x18)
	struct FText SecondInteractText; // 0xac8(0x18)
	struct FScalableFloat Row_GatherEnabled; // 0xae0(0x28)
	struct FName GatheredLootTier; // 0xb08(0x04)
	bool ShouldRollForSwap; // 0xb0c(0x01)
	char pad_B0D[0x3]; // 0xb0d(0x03)
	struct FScalableFloat Row_SwapChance; // 0xb10(0x28)
	struct ABuildingGameplayActor* SwapActor; // 0xb38(0x08)
	struct FTransform SwapActorSpawnOffset; // 0xb40(0x60)
	struct FScalableFloat Row_Enabled; // 0xba0(0x28)

	bool IsTargetableByLinearMover(); // Function CBGA_Parent.CBGA_Parent_C.IsTargetableByLinearMover // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool ShouldInvisiblePropsBeAllowed(); // Function CBGA_Parent.CBGA_Parent_C.ShouldInvisiblePropsBeAllowed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Destroy(); // Function CBGA_Parent.CBGA_Parent_C.Destroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float& OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function CBGA_Parent.CBGA_Parent_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void SetDrawDistance(); // Function CBGA_Parent.CBGA_Parent_C.SetDrawDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function CBGA_Parent.CBGA_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function CBGA_Parent.CBGA_Parent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnReady_20953428413833809C18FBAEA984C70A(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function CBGA_Parent.CBGA_Parent_C.OnReady_20953428413833809C18FBAEA984C70A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function CBGA_Parent.CBGA_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function CBGA_Parent.CBGA_Parent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void RollForSwap(); // Function CBGA_Parent.CBGA_Parent_C.RollForSwap // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckEnabled(); // Function CBGA_Parent.CBGA_Parent_C.CheckEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnGatherOrInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function CBGA_Parent.CBGA_Parent_C.OnGatherOrInteract // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Gather(struct AFortPlayerController* FortPlayerController); // Function CBGA_Parent.CBGA_Parent_C.Gather // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CBGA_Parent(int32_t EntryPoint); // Function CBGA_Parent.CBGA_Parent_C.ExecuteUbergraph_CBGA_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

