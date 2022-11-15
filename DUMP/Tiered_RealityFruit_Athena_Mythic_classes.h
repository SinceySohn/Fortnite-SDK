// BlueprintGeneratedClass Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C
// Size: 0x1738 (Inherited: 0x16b5)
struct ATiered_RealityFruit_Athena_Mythic_C : ATiered_RealityFruit_Athena_C {
	char pad_16B5[0x3]; // 0x16b5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x16b8(0x08)
	struct UNiagaraComponent* NS_Idle; // 0x16c0(0x08)
	struct FName Loot_RealityFruit_Mythic_Default; // 0x16c8(0x04)
	struct FName Loot_RealityFruit_Mythic_Mountain; // 0x16cc(0x04)
	struct FName Loot_RealityFruit_Mythic_Reality; // 0x16d0(0x04)
	struct FName Loot_RealityFruit_Mythic_Desert; // 0x16d4(0x04)
	bool HasThrownWarning; // 0x16d8(0x01)
	char pad_16D9[0x7]; // 0x16d9(0x07)
	struct FScalableFloat EnabledForAllPlayers; // 0x16e0(0x28)
	bool PlaylistDataReady; // 0x1708(0x01)
	bool bAvailableLocally; // 0x1709(0x01)
	char pad_170A[0x6]; // 0x170a(0x06)
	struct FScalableFloat EnabledForSquad; // 0x1710(0x28)

	bool ShouldDisplayDamageNumbers(); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.ShouldDisplayDamageNumbers // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FruitDataRepped(); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.FruitDataRepped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Initialize From Local Player Controller And Determine Enabled for Local Player(); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.Initialize From Local Player Controller And Determine Enabled for Local Player // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Initialize All Players Can Interact And See State(); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.Initialize All Players Can Interact And See State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintOnLocalInteract(struct AFortPlayerPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.BlueprintOnLocalInteract // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool Is Owning Player Pawn(struct AFortPawn* InteractingPawn); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.Is Owning Player Pawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FText BlueprintGetFailedInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.BlueprintGetFailedInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Increment Growth State(); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.Increment Growth State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Loot Tier Group From Rarity(); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.Set Loot Tier Group From Rarity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_49F0A1BD4173B6C179B91F8EF9FFB466(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.OnReady_49F0A1BD4173B6C179B91F8EF9FFB466 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFruitLooted(struct AFortPawn* FortPawn); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.OnFruitLooted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSaplingKilled(); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.OnSaplingKilled // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Tiered_RealityFruit_Athena_Mythic(int32_t EntryPoint); // Function Tiered_RealityFruit_Athena_Mythic.Tiered_RealityFruit_Athena_Mythic_C.ExecuteUbergraph_Tiered_RealityFruit_Athena_Mythic // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

