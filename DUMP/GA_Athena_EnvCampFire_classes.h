// BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C
// Size: 0xc60 (Inherited: 0xb20)
struct UGA_Athena_EnvCampFire_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	double TimeBetweenHeals; // 0xb28(0x08)
	struct FTimerHandle Timer_ApplyHeal; // 0xb30(0x08)
	int32_t MaxHeals; // 0xb38(0x04)
	int32_t CurrentHeals; // 0xb3c(0x04)
	struct FTransform CustomTargeting; // 0xb40(0x60)
	double TargetingHeightOffset; // 0xba0(0x08)
	struct FScalableFloat Row_MaxHeals; // 0xba8(0x28)
	struct FScalableFloat Row_TimeBetweenHeals; // 0xbd0(0x28)
	struct FScalableFloat Row_StokeDuration; // 0xbf8(0x28)
	struct FScalableFloat Row_Stoke_TimeBetweenHeals; // 0xc20(0x28)
	bool IsStoked; // 0xc48(0x01)
	char pad_C49[0x3]; // 0xc49(0x03)
	struct FGameplayTag GC_StokedLoop; // 0xc4c(0x04)
	struct FGameplayTag GC_StokeBurst; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct AB_BGA_Athena_EnvCampFire_C* Campfire; // 0xc58(0x08)

	void SetBalanceValues(bool Stoke); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetBalanceValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetCustomTargetingTrans(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetCustomTargetingTrans // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FTransform GetCustomAbilitySourceTransform(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.GetCustomAbilitySourceTransform // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Cancelled_EDAB937443020D47385625B06E892DF0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_EDAB937443020D47385625B06E892DF0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_EDAB937443020D47385625B06E892DF0(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_EDAB937443020D47385625B06E892DF0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4(struct FGameplayEventData Payload); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_FA21AF3D4B3CDB44816F37A74E520B7C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_FA21AF3D4B3CDB44816F37A74E520B7C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_FA21AF3D4B3CDB44816F37A74E520B7C(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_FA21AF3D4B3CDB44816F37A74E520B7C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_54C862474620655A47CEAFABF8570B89(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_54C862474620655A47CEAFABF8570B89 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_54C862474620655A47CEAFABF8570B89(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_54C862474620655A47CEAFABF8570B89 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_41283D0E404D8106E696DCAF073A699D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_41283D0E404D8106E696DCAF073A699D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Targeted_41283D0E404D8106E696DCAF073A699D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_41283D0E404D8106E696DCAF073A699D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ApplyHeal(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ApplyHeal // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void FinishStoke(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.FinishStoke // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetIsStoked(bool IsStoked); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetIsStoked // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EndEvent(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EndEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ForceEndAbility(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ForceEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyDanceTagsOnce(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ApplyDanceTagsOnce // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_EnvCampFire(int32_t EntryPoint); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ExecuteUbergraph_GA_Athena_EnvCampFire // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

