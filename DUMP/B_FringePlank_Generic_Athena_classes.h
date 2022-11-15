// BlueprintGeneratedClass B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C
// Size: 0x1860 (Inherited: 0x1850)
struct AB_FringePlank_Generic_Athena_C : AB_Athena_Lotus_Scooter_Weap_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1850(0x08)
	struct UParticleSystemComponent* RearMuzzle; // 0x1858(0x08)

	void Muzzle Flash FX(bool Persistent Fire); // Function B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C.Muzzle Flash FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponDetached(); // Function B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void AmmoCountChangedGarbage(int32_t Quantity); // Function B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C.AmmoCountChangedGarbage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_FringePlank_Generic_Athena(int32_t EntryPoint); // Function B_FringePlank_Generic_Athena.B_FringePlank_Generic_Athena_C.ExecuteUbergraph_B_FringePlank_Generic_Athena // (Final|UbergraphFunction) // @ game+0xdef49c
};

