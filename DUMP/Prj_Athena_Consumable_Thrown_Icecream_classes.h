// BlueprintGeneratedClass Prj_Athena_Consumable_Thrown_Icecream.Prj_Athena_Consumable_Thrown_Icecream_C
// Size: 0xb08 (Inherited: 0xae1)
struct APrj_Athena_Consumable_Thrown_Icecream_C : AB_Prj_Athena_Consumable_Thrown_C {
	char pad_AE1[0x7]; // 0xae1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae8(0x08)
	struct FGameplayTag GameplayEventForPickUp; // 0xaf0(0x04)
	char pad_AF4[0x4]; // 0xaf4(0x04)
	struct UNiagaraSystem* FXImpact; // 0xaf8(0x08)
	struct UNiagaraComponent* FXImpactReference; // 0xb00(0x08)

	void On Pickup Spawned(struct AFortPickup* Spawned Pickup); // Function Prj_Athena_Consumable_Thrown_Icecream.Prj_Athena_Consumable_Thrown_Icecream_C.On Pickup Spawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpawnedItemFx(); // Function Prj_Athena_Consumable_Thrown_Icecream.Prj_Athena_Consumable_Thrown_Icecream_C.SpawnedItemFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WaterImpactItemFX(); // Function Prj_Athena_Consumable_Thrown_Icecream.Prj_Athena_Consumable_Thrown_Icecream_C.WaterImpactItemFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBounce(struct FHitResult& Hit); // Function Prj_Athena_Consumable_Thrown_Icecream.Prj_Athena_Consumable_Thrown_Icecream_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prj_Athena_Consumable_Thrown_Icecream(int32_t EntryPoint); // Function Prj_Athena_Consumable_Thrown_Icecream.Prj_Athena_Consumable_Thrown_Icecream_C.ExecuteUbergraph_Prj_Athena_Consumable_Thrown_Icecream // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

