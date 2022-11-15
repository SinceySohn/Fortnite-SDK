// BlueprintGeneratedClass ChromeQuartz_AudioSwitcher_Component.ChromeQuartz_AudioSwitcher_Component_C
// Size: 0x178 (Inherited: 0xa0)
struct UChromeQuartz_AudioSwitcher_Component_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct UC_ChromeWeapons_XPComponent_C* ChromeWeaponXPComponent; // 0xa8(0x08)
	struct UFortQuartzGunfireComponent* QuartzGunfireComponent; // 0xb0(0x08)
	struct TMap<int32_t, struct USoundBase*> FireSounds_1P; // 0xb8(0x50)
	struct TMap<int32_t, struct USoundBase*> FireSounds_3P; // 0x108(0x50)
	struct USoundBase* SFX_UpgradeReady; // 0x158(0x08)
	struct USoundBase* Evolve_1P; // 0x160(0x08)
	struct USoundBase* Evolve; // 0x168(0x08)
	bool IsUpgrading; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t UpgradeIncrement; // 0x174(0x04)

	void ItemUpgraded(int32_t CurrentItemIndex); // Function ChromeQuartz_AudioSwitcher_Component.ChromeQuartz_AudioSwitcher_Component_C.ItemUpgraded // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpgradeReady(int32_t CurrentItemIndex, int32_t PendingItemIndex); // Function ChromeQuartz_AudioSwitcher_Component.ChromeQuartz_AudioSwitcher_Component_C.UpgradeReady // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function ChromeQuartz_AudioSwitcher_Component.ChromeQuartz_AudioSwitcher_Component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ItemUpgradedServer(); // Function ChromeQuartz_AudioSwitcher_Component.ChromeQuartz_AudioSwitcher_Component_C.ItemUpgradedServer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpgradeSwitch_Event(); // Function ChromeQuartz_AudioSwitcher_Component.ChromeQuartz_AudioSwitcher_Component_C.UpgradeSwitch_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ChromeQuartz_AudioSwitcher_Component(int32_t EntryPoint); // Function ChromeQuartz_AudioSwitcher_Component.ChromeQuartz_AudioSwitcher_Component_C.ExecuteUbergraph_ChromeQuartz_AudioSwitcher_Component // (Final|UbergraphFunction) // @ game+0xdef49c
};

