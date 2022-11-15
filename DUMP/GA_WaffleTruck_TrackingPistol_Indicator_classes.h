// BlueprintGeneratedClass GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C
// Size: 0xb78 (Inherited: 0xb20)
struct UGA_WaffleTruck_TrackingPistol_Indicator_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct TArray<struct AActor*> HitActors; // 0xb28(0x10)
	struct UParticleSystem* IndicatorParticleSystem; // 0xb38(0x08)
	struct FName IndicatorActorParamName; // 0xb40(0x04)
	struct FName IndicatorVectorParamName; // 0xb44(0x04)
	struct FString IndicatorGroupID; // 0xb48(0x10)
	double IndicatorDuration; // 0xb58(0x08)
	struct USoundBase* IndicatorSound; // 0xb60(0x08)
	struct TArray<struct UGameplayEffect*> EnemyMarkingGE; // 0xb68(0x10)

	bool IsDamgeFromSourceWeapon(struct FGameplayEventData& GameplayEventData); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.IsDamgeFromSourceWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool IsPawnAndNotFriendly(struct AActor* OwningController, struct AActor* HitActor); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.IsPawnAndNotFriendly // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct TArray<struct AActor*> GetHitActorsFromEventData(struct FGameplayEventData& GameplayEventData); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetHitActorsFromEventData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct AFortPlayerController* GetAvatarAsFortPlayerController(); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetAvatarAsFortPawn(struct AFortPawn*& AsFort Pawn); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator(int32_t EntryPoint); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

