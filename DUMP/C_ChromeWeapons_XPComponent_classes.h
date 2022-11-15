// BlueprintGeneratedClass C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C
// Size: 0x33c (Inherited: 0x100)
struct UC_ChromeWeapons_XPComponent_C : UFortWorldMultiItemXPComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct FGameplayTag XPTriggerTag; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FGameplayTagContainer ChromeWeaponTags; // 0x110(0x20)
	struct FMulticastInlineDelegate OnXPChanged; // 0x130(0x10)
	struct FGameplayEventData Payload; // 0x140(0xb0)
	struct FScalableFloat XpPerDamage_LowRate; // 0x1f0(0x28)
	struct FScalableFloat XpPerDamage_MediumRate; // 0x218(0x28)
	struct FScalableFloat XpPerDamage_HighRate; // 0x240(0x28)
	struct FScalableFloat XpPerDamage_PlayerRate; // 0x268(0x28)
	struct FMulticastInlineDelegate OnPowerUpReady; // 0x290(0x10)
	struct FMulticastInlineDelegate OnItemUpgraded; // 0x2a0(0x10)
	struct TSoftObjectPtr<UFortWeaponFireModeData> AssaultUpgradeFireMode; // 0x2b0(0x28)
	struct TSoftObjectPtr<UFortWeaponFireModeData> ShotgunUpgradeFireMode; // 0x2d8(0x28)
	struct UObject* LoadedFireMode; // 0x300(0x08)
	struct UAnimMontage* ShotgunPostUpgradeMontage; // 0x308(0x08)
	struct UAnimMontage* ARPostUpgradeMontage; // 0x310(0x08)
	struct FName PostUpgradeSectionName; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UAbilityAsync_WaitGameplayTagRemoved* ReloadTagRemovedAsyncAction; // 0x320(0x08)
	struct FMulticastInlineDelegate UpgradeSwitch; // 0x328(0x10)
	int32_t CurrentItemIndex; // 0x338(0x04)

	void GetUpgradeFireMode(struct TSoftObjectPtr<UFortWeaponFireModeData>& UpgradeFireMode); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.GetUpgradeFireMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void EventReceived_CEF5C35F46ABDF5804BF6BA694E6CC0B(struct FGameplayEventData Payload); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.EventReceived_CEF5C35F46ABDF5804BF6BA694E6CC0B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_F0E8A33D4C3F742E7BC8EDA64A02E5A4(struct UObject* Loaded); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnLoaded_F0E8A33D4C3F742E7BC8EDA64A02E5A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_98B01B2344922C2ED132C8BF6351E63B(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.Removed_98B01B2344922C2ED132C8BF6351E63B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_1BD819D64949BBC323970AA7112C65A7(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.Added_1BD819D64949BBC323970AA7112C65A7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_E752EB5F49A52EEF79A7CEAA204235CA(struct FName NotifyName); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnNotifyEnd_E752EB5F49A52EEF79A7CEAA204235CA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_E752EB5F49A52EEF79A7CEAA204235CA(struct FName NotifyName); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnNotifyBegin_E752EB5F49A52EEF79A7CEAA204235CA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_E752EB5F49A52EEF79A7CEAA204235CA(struct FName NotifyName); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnInterrupted_E752EB5F49A52EEF79A7CEAA204235CA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_E752EB5F49A52EEF79A7CEAA204235CA(struct FName NotifyName); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnBlendOut_E752EB5F49A52EEF79A7CEAA204235CA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_E752EB5F49A52EEF79A7CEAA204235CA(struct FName NotifyName); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnCompleted_E752EB5F49A52EEF79A7CEAA204235CA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnItemSwitched(int32_t CurrentItemIndex); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnItemSwitched // (BlueprintEvent) // @ game+0xdef49c
	void OnItemXPChanged(float XPChangeAmount, float CurrentXP); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnItemXPChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPowerUpPending(int32_t CurrentItemIndex, int32_t PendingItemIndex); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnPowerUpPending // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Client_SetOverrideFireMode(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.Client_SetOverrideFireMode // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LoadUpgradeFireMode(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.LoadUpgradeFireMode // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void WaitForReload(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.WaitForReload // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOwnerReloaded(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.HandleOwnerReloaded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnItemSwitchedAwayFrom(int32_t CurrentItemIndex); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnItemSwitchedAwayFrom // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BroadcastPlayUpgradeMontage(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.BroadcastPlayUpgradeMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_C_ChromeWeapons_XPComponent(int32_t EntryPoint); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.ExecuteUbergraph_C_ChromeWeapons_XPComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void UpgradeSwitch__DelegateSignature(); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.UpgradeSwitch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnItemUpgraded__DelegateSignature(int32_t CurrentItemIndex); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnItemUpgraded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPowerUpReady__DelegateSignature(int32_t CurrentItemIndex, int32_t PendingItemIndex); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnPowerUpReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnXPChanged__DelegateSignature(double XPDelta, double CurrentXPPercentage); // Function C_ChromeWeapons_XPComponent.C_ChromeWeapons_XPComponent_C.OnXPChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

