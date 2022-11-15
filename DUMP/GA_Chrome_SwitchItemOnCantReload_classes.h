// BlueprintGeneratedClass GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C
// Size: 0xba0 (Inherited: 0xb50)
struct UGA_Chrome_SwitchItemOnCantReload_C : UFortGameplayAbility_Action {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb50(0x08)
	struct FGameplayTagContainer ChromeWeaponTags; // 0xb58(0x20)
	struct UAnimMontage* ARUpgradeMontage; // 0xb78(0x08)
	struct UAnimMontage* ShotgunUpgradeMontage; // 0xb80(0x08)
	struct FName PostUpgradeSectionName; // 0xb88(0x04)
	char pad_B8C[0x4]; // 0xb8c(0x04)
	struct UAnimMontage* ARPostUpgradeMontage; // 0xb90(0x08)
	struct UAnimMontage* ShotgunPostUpgradeMontage; // 0xb98(0x08)

	void TryGetChromeXPComponent(struct UFortWorldMultiItemXPComponent*& ItemXPComponent); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.TryGetChromeXPComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnCancelled_EC91760449AA39AAE98EFBA852B797A2(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnCancelled_EC91760449AA39AAE98EFBA852B797A2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_EC91760449AA39AAE98EFBA852B797A2(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnInterrupted_EC91760449AA39AAE98EFBA852B797A2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_EC91760449AA39AAE98EFBA852B797A2(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnBlendOut_EC91760449AA39AAE98EFBA852B797A2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_EC91760449AA39AAE98EFBA852B797A2(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnCompleted_EC91760449AA39AAE98EFBA852B797A2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCancelled_495C237644B25D7B3F7BBB9CEBAAC8F9(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnCancelled_495C237644B25D7B3F7BBB9CEBAAC8F9 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_495C237644B25D7B3F7BBB9CEBAAC8F9(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnInterrupted_495C237644B25D7B3F7BBB9CEBAAC8F9 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_495C237644B25D7B3F7BBB9CEBAAC8F9(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnBlendOut_495C237644B25D7B3F7BBB9CEBAAC8F9 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_495C237644B25D7B3F7BBB9CEBAAC8F9(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnCompleted_495C237644B25D7B3F7BBB9CEBAAC8F9 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TrySwitchWeapons(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.TrySwitchWeapons // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAbilityInputPressed(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.OnAbilityInputPressed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Client_PlayUpgradeMontage(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.Client_PlayUpgradeMontage // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Chrome_SwitchItemOnCantReload(int32_t EntryPoint); // Function GA_Chrome_SwitchItemOnCantReload.GA_Chrome_SwitchItemOnCantReload_C.ExecuteUbergraph_GA_Chrome_SwitchItemOnCantReload // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

