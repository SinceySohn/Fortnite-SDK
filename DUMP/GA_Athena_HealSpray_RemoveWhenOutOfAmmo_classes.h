// BlueprintGeneratedClass GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C
// Size: 0xb48 (Inherited: 0xb20)
struct UGA_Athena_HealSpray_RemoveWhenOutOfAmmo_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* FortPawn; // 0xb28(0x08)
	struct USoundBase* OutOfChargesSound; // 0xb30(0x08)
	struct UAnimMontage* Montage; // 0xb38(0x08)
	struct AB_Athena_HealSpray_C* Weapon; // 0xb40(0x08)

	void OnNotifyEnd_011B54574EA14B05D96078B705B18584(struct FGameplayTag NotifyTag); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.OnNotifyEnd_011B54574EA14B05D96078B705B18584 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_011B54574EA14B05D96078B705B18584(struct FGameplayTag NotifyTag); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.OnNotifyBegin_011B54574EA14B05D96078B705B18584 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_011B54574EA14B05D96078B705B18584(struct FGameplayTag NotifyTag); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.OnCancelled_011B54574EA14B05D96078B705B18584 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_011B54574EA14B05D96078B705B18584(struct FGameplayTag NotifyTag); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.OnInterrupted_011B54574EA14B05D96078B705B18584 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_011B54574EA14B05D96078B705B18584(struct FGameplayTag NotifyTag); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.OnBlendOut_011B54574EA14B05D96078B705B18584 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_011B54574EA14B05D96078B705B18584(struct FGameplayTag NotifyTag); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.OnCompleted_011B54574EA14B05D96078B705B18584 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void RemoveWeapon(); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.RemoveWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveItemAndEndAbility(); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.RemoveItemAndEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_HealSpray_RemoveWhenOutOfAmmo(int32_t EntryPoint); // Function GA_Athena_HealSpray_RemoveWhenOutOfAmmo.GA_Athena_HealSpray_RemoveWhenOutOfAmmo_C.ExecuteUbergraph_GA_Athena_HealSpray_RemoveWhenOutOfAmmo // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

