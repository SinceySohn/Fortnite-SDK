// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C
// Size: 0xbc0 (Inherited: 0xb20)
struct UGA_Athena_FloppingRabbit_Passive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UGameplayEffect* GE_Active; // 0xb28(0x08)
	struct FGameplayTagContainer T_Active; // 0xb30(0x20)
	struct UGameplayEffect* GE_InWorld; // 0xb50(0x08)
	struct FGameplayTagContainer T_InWorld; // 0xb58(0x20)
	struct AActor* Projectile; // 0xb78(0x08)
	struct AActor* Wire; // 0xb80(0x08)
	double FailsafeDelay; // 0xb88(0x08)
	struct UGameplayEffect* GE_ReelIn; // 0xb90(0x08)
	struct FGameplayTagContainer T_ReelIn; // 0xb98(0x20)
	struct AB_FloppingRabbit_Weap_Athena_C* WeaponRod; // 0xbb8(0x08)

	void SaveOutRod(); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SaveOutRod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBobberHidden(bool HideBobber, struct AFortWeapon*& CurrentWeapon, struct AB_FloppingRabbit_Weap_Athena_C*& CastedToRabbitWeapon); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SetBobberHidden // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_DCA556AE47E7D8C25D9A27899D5C963C(); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Removed_DCA556AE47E7D8C25D9A27899D5C963C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Seat Changed(int32_t SeatIndex); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Seat Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EndFishing(); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.EndFishing // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive(int32_t EntryPoint); // Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

