// BlueprintGeneratedClass GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C
// Size: 0xc58 (Inherited: 0xbf2)
struct UGAT_GenericTriggeredAbility_Perk_C : UGAT_GenericTriggeredAbility_C {
	char pad_BF2[0x6]; // 0xbf2(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbf8(0x08)
	int32_t StreakCount; // 0xc00(0x04)
	char pad_C04[0x4]; // 0xc04(0x04)
	struct TMap<struct FGameplayTag, struct UGameplayEffect*> MAP_DamageElement; // 0xc08(0x50)

	void CalcStreakBreakerThreshold(double PROC Chance (0-1), int32_t& Streak Breaker Threshold); // Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CalcStreakBreakerThreshold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GrantRegenItemToOwner(struct AFortPlayerPawn* FortPlayerPawn, struct UFortWorldItemDefinition* ItemToGive, int32_t NumberToGive, bool NotifyPlayer, bool bResetRegenCooldown); // Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantRegenItemToOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetDamageElement(struct FGameplayTagContainer InstegatorTags, struct UGameplayEffect* DefaultEffect, struct UGameplayEffect*& ElementEffectOut, bool& EffectWasChanged); // Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.SetDamageElement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetCorrectBalanceValue(struct FScalableFloat Lookup Base, struct FScalableFloat Lookup Commander, struct FGameplayTag Commander Tag, double& Value); // Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GetCorrectBalanceValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GrantFragmentCharge(int32_t Grant Amount); // Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.GrantFragmentCharge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckStreak(int32_t CountPerTrigger, int32_t MaxStreak, int32_t& StreakCount, bool& StreakMaxed); // Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.CheckStreak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk(int32_t EntryPoint); // Function GAT_GenericTriggeredAbility_Perk.GAT_GenericTriggeredAbility_Perk_C.ExecuteUbergraph_GAT_GenericTriggeredAbility_Perk // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

