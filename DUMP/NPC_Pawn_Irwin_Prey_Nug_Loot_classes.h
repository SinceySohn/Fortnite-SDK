// BlueprintGeneratedClass NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C
// Size: 0x3c98 (Inherited: 0x3c80)
struct ANPC_Pawn_Irwin_Prey_Nug_Loot_C : ANPC_Pawn_Irwin_Prey_Nug_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c80(0x08)
	struct UAudioComponent* LootGlowAudioLoop; // 0x3c88(0x08)
	struct UNiagaraComponent* LootGlow; // 0x3c90(0x08)

	void ReceiveBeginPlay(); // Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void NPC SendGameplayCuePickupGrabbed(); // Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.NPC SendGameplayCuePickupGrabbed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MeshLoaded(struct AFortPawn* ThisPawn); // Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.MeshLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug_Loot(int32_t EntryPoint); // Function NPC_Pawn_Irwin_Prey_Nug_Loot.NPC_Pawn_Irwin_Prey_Nug_Loot_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug_Loot // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

