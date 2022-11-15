// BlueprintGeneratedClass GA_GenericConsume.GA_GenericConsume_C
// Size: 0xb50 (Inherited: 0xb20)
struct UGA_GenericConsume_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UAnimMontage* MontageToPlay; // 0xb28(0x08)
	struct FGameplayEffectSpecHandle GESpecToApply; // 0xb30(0x10)
	bool GESpecAlreadyApplied; // 0xb40(0x01)
	char pad_B41[0x7]; // 0xb41(0x07)
	struct UForceFeedbackEffect* ForceFeedback; // 0xb48(0x08)

	void OnGenericNotifyFromAnimation(struct FGameplayTag NotifyTag); // Function GA_GenericConsume.GA_GenericConsume_C.OnGenericNotifyFromAnimation // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Completed_4BF174EF4ED7A4C301F86F8B87D7E4ED(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_GenericConsume.GA_GenericConsume_C.Completed_4BF174EF4ED7A4C301F86F8B87D7E4ED // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancelled_4BF174EF4ED7A4C301F86F8B87D7E4ED(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_GenericConsume.GA_GenericConsume_C.Cancelled_4BF174EF4ED7A4C301F86F8B87D7E4ED // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Triggered_4BF174EF4ED7A4C301F86F8B87D7E4ED(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_GenericConsume.GA_GenericConsume_C.Triggered_4BF174EF4ED7A4C301F86F8B87D7E4ED // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_GenericConsume.GA_GenericConsume_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DropHeldObject(); // Function GA_GenericConsume.GA_GenericConsume_C.DropHeldObject // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_GenericConsume(int32_t EntryPoint); // Function GA_GenericConsume.GA_GenericConsume_C.ExecuteUbergraph_GA_GenericConsume // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

