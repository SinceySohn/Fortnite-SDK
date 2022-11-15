// BlueprintGeneratedClass B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C
// Size: 0x1060 (Inherited: 0x1039)
struct AB_Grenade_Molotov_Athena_C : AB_ConsumableSmall_Athena_C {
	char pad_1039[0x7]; // 0x1039(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1040(0x08)
	struct UAudioComponent* AmbientAudio; // 0x1048(0x08)
	struct UNiagaraComponent* Niagara_Light; // 0x1050(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x1058(0x08)

	void OnWeaponAttached(); // Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Grenade_Molotov_Athena(int32_t EntryPoint); // Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.ExecuteUbergraph_B_Grenade_Molotov_Athena // (Final|UbergraphFunction) // @ game+0xdef49c
};

