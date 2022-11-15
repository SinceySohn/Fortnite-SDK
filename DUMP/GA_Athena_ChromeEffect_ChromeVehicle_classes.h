// BlueprintGeneratedClass GA_Athena_ChromeEffect_ChromeVehicle.GA_Athena_ChromeEffect_ChromeVehicle_C
// Size: 0xb41 (Inherited: 0xb20)
struct UGA_Athena_ChromeEffect_ChromeVehicle_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortAthenaVehicle* Vehicle Ref; // 0xb28(0x08)
	struct TScriptInterface<IFortVehicleModInterface> As Fort Vehicle Mod Interface; // 0xb30(0x10)
	bool Debug; // 0xb40(0x01)

	void K2_ActivateAbility(); // Function GA_Athena_ChromeEffect_ChromeVehicle.GA_Athena_ChromeEffect_ChromeVehicle_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ChromeEffect_ChromeVehicle.GA_Athena_ChromeEffect_ChromeVehicle_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_ChromeEffect_ChromeVehicle.GA_Athena_ChromeEffect_ChromeVehicle_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnExplode_Event(struct AController* LastDamageInstigator, struct AFortAthenaVehicle* Vehicle); // Function GA_Athena_ChromeEffect_ChromeVehicle.GA_Athena_ChromeEffect_ChromeVehicle_C.OnExplode_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromeEffect_ChromeVehicle(int32_t EntryPoint); // Function GA_Athena_ChromeEffect_ChromeVehicle.GA_Athena_ChromeEffect_ChromeVehicle_C.ExecuteUbergraph_GA_Athena_ChromeEffect_ChromeVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

