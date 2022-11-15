// BlueprintGeneratedClass SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C
// Size: 0xb88 (Inherited: 0xb48)
struct ASupplyDropRadioItem_CrateParent_C : AFortAthenaSupplyDrop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb48(0x08)
	struct UStaticMeshComponent* CrateMesh; // 0xb50(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xb58(0x08)
	bool bOpened; // 0xb60(0x01)
	char pad_B61[0x7]; // 0xb61(0x07)
	struct UParticleSystem* DestroyedFX; // 0xb68(0x08)
	struct USoundBase* SoundDestroyed; // 0xb70(0x08)
	struct UParticleSystem* LootedFX; // 0xb78(0x08)
	struct USoundBase* SoundLooted; // 0xb80(0x08)

	void GetSupplyDropRadioActorParent(struct ASupplyDropRadioActorParent_C*& ActorParent); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.GetSupplyDropRadioActorParent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_bOpened(); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.OnRep_bOpened // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnSupplyDropLoot(struct AFortPawn* FortPawn); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.SpawnSupplyDropLoot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleInteractQuests(struct AFortPawn* InteractingPlayerPawn); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.HandleInteractQuests // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpawnLoot(struct TArray<struct FFortItemEntry>& ItemsToSpawn, struct AFortPawn* TriggeringPawn); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.SpawnLoot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SupplyDropRadioItem_CrateParent(int32_t EntryPoint); // Function SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C.ExecuteUbergraph_SupplyDropRadioItem_CrateParent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

