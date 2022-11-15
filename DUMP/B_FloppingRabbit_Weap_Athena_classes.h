// BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C
// Size: 0x105a (Inherited: 0x1039)
struct AB_FloppingRabbit_Weap_Athena_C : AB_UtilityItem_Generic_Athena_C {
	char pad_1039[0x7]; // 0x1039(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1040(0x08)
	struct AActor* Projectile; // 0x1048(0x08)
	struct AActor* Wire; // 0x1050(0x08)
	bool HideBobber; // 0x1058(0x01)
	bool OneHandGrip; // 0x1059(0x01)

	struct FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.DetermineFishLootTierNameAndSetLootForSpawner // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_OneHandGrip(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_OneHandGrip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_HideBobber(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_HideBobber // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ForceKillFishing(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ForceKillFishing // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTetherDetached(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnTetherDetached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BindHolsterEvents(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.BindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnbindHolsterEvents(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.UnbindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHolstered(); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnHolstered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int32_t EntryPoint); // Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ExecuteUbergraph_B_FloppingRabbit_Weap_Athena // (Final|UbergraphFunction) // @ game+0xdef49c
};

