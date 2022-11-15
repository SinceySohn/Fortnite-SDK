// BlueprintGeneratedClass B_PetrolWeapon.B_PetrolWeapon_C
// Size: 0x17b0 (Inherited: 0x1691)
struct AB_PetrolWeapon_C : AB_Ranged_Generic_Athena_Deprecated_C {
	char pad_1691[0x7]; // 0x1691(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1698(0x08)
	struct UAudioComponent* PourLoopSound; // 0x16a0(0x08)
	struct UAudioComponent* PourStopSound; // 0x16a8(0x08)
	struct UFortSplatterSourceComponent* FortSplatterSource; // 0x16b0(0x08)
	bool EnableAmmoMod; // 0x16b8(0x01)
	char pad_16B9[0x7]; // 0x16b9(0x07)
	struct ABGA_Petrol_Pickup_C* AttachedBGAActor; // 0x16c0(0x08)
	struct FName AttachSocket; // 0x16c8(0x04)
	char pad_16CC[0x4]; // 0x16cc(0x04)
	struct FVector AttachedBGAScale; // 0x16d0(0x18)
	char pad_16E8[0x8]; // 0x16e8(0x08)
	struct FTransform AttachedBGARelativeTransform; // 0x16f0(0x60)
	struct TScriptInterface<IFortInventoryOwnerInterface> InventoryInterface; // 0x1750(0x10)
	struct FGuid InventoryGUID; // 0x1760(0x10)
	struct UNiagaraComponent* NS_FuelLeaking; // 0x1770(0x08)
	struct FScalableFloat IsShootableWhileHeld; // 0x1778(0x28)
	struct AFortWeapon* WeaponReference; // 0x17a0(0x08)
	bool ShowHUDKeyActions; // 0x17a8(0x01)
	char pad_17A9[0x3]; // 0x17a9(0x03)
	struct FGameplayTag Tag_InWindup; // 0x17ac(0x04)

	void OnRep_AttachedBGAActor(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnRep_AttachedBGAActor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_B93A41134252056323F976A22CCF45FB(); // Function B_PetrolWeapon.B_PetrolWeapon_C.Added_B93A41134252056323F976A22CCF45FB // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_37103EFF43C9315C3003269E0216DE30(); // Function B_PetrolWeapon.B_PetrolWeapon_C.Removed_37103EFF43C9315C3003269E0216DE30 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSpawnProjectile(struct AFortProjectileBase* SpawnProjectile); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnSpawnProjectile // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void UpdateAndAttachBGA(); // Function B_PetrolWeapon.B_PetrolWeapon_C.UpdateAndAttachBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEquip(Copy)(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnEquip(Copy) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStopWeaponFireFX(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUnEquip(Copy)(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnEquip(Copy) // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_PetrolWeapon.B_PetrolWeapon_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_PetrolWeapon.B_PetrolWeapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HUDKeyAction_Targeting(bool IsTargeting); // Function B_PetrolWeapon.B_PetrolWeapon_C.HUDKeyAction_Targeting // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHolstered(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnHolstered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUnholstered(); // Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnholstered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindHolsterEvents(); // Function B_PetrolWeapon.B_PetrolWeapon_C.BindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnbindHolsterEvents(); // Function B_PetrolWeapon.B_PetrolWeapon_C.UnbindHolsterEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BGADestroyedWhileHeld(); // Function B_PetrolWeapon.B_PetrolWeapon_C.BGADestroyedWhileHeld // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReplicateOnUnholstered(); // Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnUnholstered // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReplicateOnHolstered(); // Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnHolstered // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_PetrolWeapon(int32_t EntryPoint); // Function B_PetrolWeapon.B_PetrolWeapon_C.ExecuteUbergraph_B_PetrolWeapon // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

