// BlueprintGeneratedClass GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C
// Size: 0xc1c (Inherited: 0xb20)
struct UGA_VictoryCrown_QuestsAndAccolades_C : UGAT_PassiveAbility_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTagContainer CrownPickup_QuestTag; // 0xb28(0x20)
	struct FGameplayTagContainer KillCrownWearer_QuestTag; // 0xb48(0x20)
	struct FGameplayTagContainer KillCrownWearerWhileWearingCrown_QuestTag; // 0xb68(0x20)
	struct AFortGameModeAthena* GameMode; // 0xb88(0x08)
	struct FScalableFloat PickupAccoladeBlockedInWarmupPhase?; // 0xb90(0x28)
	struct FGameplayTag Crown Flare FX GC; // 0xbb8(0x04)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	struct AActor* crown wearer; // 0xbc0(0x08)
	struct FScalableFloat Circle Accolade Flare Delay; // 0xbc8(0x28)
	struct FScalableFloat Kill Accolade Flare Delay; // 0xbf0(0x28)
	struct FGameplayTag Crown Drop GC; // 0xc18(0x04)

	void EventReceived_0B1984324C0E15BD613ABFB62FFD87B6(struct FGameplayEventData Payload); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.EventReceived_0B1984324C0E15BD613ABFB62FFD87B6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Trigger Accolade(struct AFortPlayerController* Target, enum class EFortQuestObjectiveStatEvent Type, struct FGameplayTagContainer AdditionalSourceTags); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.Trigger Accolade // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Crown Wearer On Died(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.Crown Wearer On Died // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Crown Flare FX(); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.Crown Flare FX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GamePhaseChange(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.GamePhaseChange // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Trigger Pickup Accolade(struct AActor* Actor); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.Trigger Pickup Accolade // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.PhaseStepChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_VictoryCrown_QuestsAndAccolades(int32_t EntryPoint); // Function GA_VictoryCrown_QuestsAndAccolades.GA_VictoryCrown_QuestsAndAccolades_C.ExecuteUbergraph_GA_VictoryCrown_QuestsAndAccolades // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

