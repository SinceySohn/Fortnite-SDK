// BlueprintGeneratedClass B_ConsumableSmall_RealitySeed_Athena.B_ConsumableSmall_RealitySeed_Athena_C
// Size: 0x105c (Inherited: 0x1039)
struct AB_ConsumableSmall_RealitySeed_Athena_C : AB_ConsumableSmall_Athena_C {
	char pad_1039[0x7]; // 0x1039(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1040(0x08)
	struct UNiagaraComponent* NS_RealitySeed_Trail; // 0x1048(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x1050(0x08)
	struct FGameplayTag GC_Held; // 0x1058(0x04)

	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_ConsumableSmall_RealitySeed_Athena.B_ConsumableSmall_RealitySeed_Athena_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_ConsumableSmall_RealitySeed_Athena(int32_t EntryPoint); // Function B_ConsumableSmall_RealitySeed_Athena.B_ConsumableSmall_RealitySeed_Athena_C.ExecuteUbergraph_B_ConsumableSmall_RealitySeed_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

