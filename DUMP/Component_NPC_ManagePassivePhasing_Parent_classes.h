// BlueprintGeneratedClass Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C
// Size: 0x4b8 (Inherited: 0xa0)
struct UComponent_NPC_ManagePassivePhasing_Parent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct ANPC_Pawn_Parent_C* NPCPawnParentRef; // 0xa8(0x08)
	enum class Enum_NPC_PhaseState NPC PhaseState; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0xb8(0x10)
	struct FGameplayTag GCN_PhaseState_Phased; // 0xc8(0x04)
	struct FGameplayTag GCN_PhaseState_Solid; // 0xcc(0x04)
	struct FGameplayTag GCN_PhaseState_NA; // 0xd0(0x04)
	struct FGameplayTag GCN_PhaseHit_Phased; // 0xd4(0x04)
	struct FScalableFloat CanChromeSmackie_HF; // 0xd8(0x28)
	struct FScalableFloat CanChromeNug_HF; // 0x100(0x28)
	struct FScalableFloat CanChromeBurt_HF; // 0x128(0x28)
	struct FScalableFloat CanChromeGrandma_HF; // 0x150(0x28)
	struct FScalableFloat CanChromeCrow_HF; // 0x178(0x28)
	struct FScalableFloat CanChromeSpicySake_HF; // 0x1a0(0x28)
	struct FScalableFloat CanChromeLabrador_HF; // 0x1c8(0x28)
	struct FScalableFloat PhaseStateTime_HF; // 0x1f0(0x28)
	struct FScalableFloat PreSolidTime_HF; // 0x218(0x28)
	struct FScalableFloat HealthRegenEnabled_HF; // 0x240(0x28)
	struct FScalableFloat HealthRegenDelay_HF; // 0x268(0x28)
	struct FScalableFloat HealthRegenPeriod_HF; // 0x290(0x28)
	struct FScalableFloat DepleteDmgGaugeEnabled_HF; // 0x2b8(0x28)
	struct FScalableFloat DepleteDmgGaugeAmount_HF; // 0x2e0(0x28)
	struct FScalableFloat DepleteDmgGaugePeriod_HF; // 0x308(0x28)
	double SolidStateDmgGauge; // 0x330(0x08)
	struct FTimerHandle DepleteTimer; // 0x338(0x08)
	double SolidStateDmgThreshold; // 0x340(0x08)
	struct FScalableFloat SmackieThreshold_HF; // 0x348(0x28)
	struct FScalableFloat NugThreshold_HF; // 0x370(0x28)
	struct FScalableFloat BurtThreshold_HF; // 0x398(0x28)
	struct FScalableFloat GrandmaThreshold_HF; // 0x3c0(0x28)
	struct FScalableFloat CrowThreshold_HF; // 0x3e8(0x28)
	struct FScalableFloat SpicySakeThreshold_HF; // 0x410(0x28)
	struct FActiveGameplayEffectHandle HealingGE; // 0x438(0x08)
	struct FLinearColor PresSolidWarningColor; // 0x440(0x10)
	struct FScalableFloat LabradorThreshold_HF; // 0x450(0x28)
	struct FActiveGameplayEffectHandle PassivePhaseStatsGE; // 0x478(0x08)
	bool EarlyRemove; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct UFortAthenaChromeWildlifeTelemetryData* TelemetryData; // 0x488(0x08)
	struct FScalableFloat RelevancyFix_HF; // 0x490(0x28)

	void Analytic_SetIsChromed(bool IsChromed); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.Analytic_SetIsChromed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Analytic_InitData(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.Analytic_InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CanSwapChromeFactionIfConverted(struct FGameplayTag WildlifeFactionTag, struct FGameplayTag ChromeFactionTag, bool& Can Swap Factions); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.CanSwapChromeFactionIfConverted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwapChromeFactionStatus(bool AddChromeFaction); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.SwapChromeFactionStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetWildlifeFactionTags(bool& FoundWildlifeTag, struct FGameplayTag& Wildlife Tag, struct FGameplayTag& Base Faction Tag, struct FGameplayTag& Chrome Faction Tag); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.GetWildlifeFactionTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ChromeReact(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.ChromeReact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveChromeFaction(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.RemoveChromeFaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyChromeStatsGE(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.ApplyChromeStatsGE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CanBeChromed(bool& bool); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.CanBeChromed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void AddChromeFaction(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.AddChromeFaction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetThresholdFromGameplayTags(struct FGameplayTagContainer Gameplay Tag Container); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.GetThresholdFromGameplayTags // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HealthRegenAndDepleteDamageGauge(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.HealthRegenAndDepleteDamageGauge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMeshMaterialBasedOnState(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.SetMeshMaterialBasedOnState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC GetMesh(struct USkeletalMeshComponent*& Mesh); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.NPC GetMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_NPC PhaseState(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.OnRep_NPC PhaseState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReturnToSolidTimer(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.ReturnToSolidTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreSolidTimer(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.PreSolidTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void A(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.A // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC PrePhased(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.NPC PrePhased // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCustomizationsLoadedEvent_Event(struct AFortPawn* ThisPawn); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.OnCustomizationsLoadedEvent_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC PreSolid(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.NPC PreSolid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC Solid(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.NPC Solid // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void NPC Phased(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.NPC Phased // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamaged_Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.OnDamaged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreparePhasedState(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.PreparePhasedState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnModifiedDamageReceived_Event(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.OnModifiedDamageReceived_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnModifiedDamageReceived_MulticastEvent(); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.OnModifiedDamageReceived_MulticastEvent // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnConvertedDispatcher_Event(bool Converted, struct AFortPawn* InstigatorPawn); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.OnConvertedDispatcher_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Component_NPC_ManagePassivePhasing_Parent(int32_t EntryPoint); // Function Component_NPC_ManagePassivePhasing_Parent.Component_NPC_ManagePassivePhasing_Parent_C.ExecuteUbergraph_Component_NPC_ManagePassivePhasing_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

