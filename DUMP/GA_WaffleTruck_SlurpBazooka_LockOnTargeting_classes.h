// BlueprintGeneratedClass GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C
// Size: 0xcf8 (Inherited: 0xb20)
struct UGA_WaffleTruck_SlurpBazooka_LockOnTargeting_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawnAthena* PlayerPawn; // 0xb28(0x08)
	double LowGravRemoveDelay; // 0xb30(0x08)
	double float; // 0xb38(0x08)
	double VelocityResetThreshold; // 0xb40(0x08)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0xb48(0x28)
	struct TArray<struct AActor*> PotentialTargets; // 0xb70(0x10)
	double TargetPriorityFloat; // 0xb80(0x08)
	struct AActor* PotentialTarget; // 0xb88(0x08)
	struct AActor* Target; // 0xb90(0x08)
	struct FFortGameplayEffectContainer EffectContainer; // 0xb98(0xb8)
	double DistanceInfluenceMultiple; // 0xc50(0x08)
	struct FScalableFloat LockOnRange; // 0xc58(0x28)
	struct FScalableFloat LockOnRectSize; // 0xc80(0x28)
	double Tick; // 0xca8(0x08)
	struct FGameplayAttribute Attribute; // 0xcb0(0x38)
	double DotCheckValue; // 0xce8(0x08)
	struct AB_WaffleTruck_Rocket_Slurp_C* WeaponSlurp; // 0xcf0(0x08)

	void OnChange_90335208455419FDD8B76CA2C527FEE8(); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.OnChange_90335208455419FDD8B76CA2C527FEE8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_85B7C13C4C88931642FC0BB4B11B0DA6(struct FName NotifyName); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.OnNotifyEnd_85B7C13C4C88931642FC0BB4B11B0DA6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_85B7C13C4C88931642FC0BB4B11B0DA6(struct FName NotifyName); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.OnNotifyBegin_85B7C13C4C88931642FC0BB4B11B0DA6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_85B7C13C4C88931642FC0BB4B11B0DA6(struct FName NotifyName); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.OnInterrupted_85B7C13C4C88931642FC0BB4B11B0DA6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_85B7C13C4C88931642FC0BB4B11B0DA6(struct FName NotifyName); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.OnBlendOut_85B7C13C4C88931642FC0BB4B11B0DA6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_85B7C13C4C88931642FC0BB4B11B0DA6(struct FName NotifyName); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.OnCompleted_85B7C13C4C88931642FC0BB4B11B0DA6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_D62DB06F43D53B91A584158222ADA209(); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.Added_D62DB06F43D53B91A584158222ADA209 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_7CCC75A64956908E3F2C69834BD51049(); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.Removed_7CCC75A64956908E3F2C69834BD51049 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void LockOnTickOld(); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.LockOnTickOld // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LookForHomingTarget(); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.LookForHomingTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LockOnTickNew(struct AActor* Target Pawn); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.LockOnTickNew // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_WaffleTruck_SlurpBazooka_LockOnTargeting(int32_t EntryPoint); // Function GA_WaffleTruck_SlurpBazooka_LockOnTargeting.GA_WaffleTruck_SlurpBazooka_LockOnTargeting_C.ExecuteUbergraph_GA_WaffleTruck_SlurpBazooka_LockOnTargeting // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

