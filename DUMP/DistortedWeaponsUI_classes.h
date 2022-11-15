// Class DistortedWeaponsUI.ChromeWeaponInfoWidget
// Size: 0x2f0 (Inherited: 0x2d0)
struct UChromeWeaponInfoWidget : UFortHUDElementWidget {
	struct UFortHUDContext* HUDContext; // 0x2d0(0x08)
	struct UFortWorldMultiItemXPComponent* CurrentXpComponent; // 0x2d8(0x08)
	struct UAthenaItemTierWidget* ItemTierWidget; // 0x2e0(0x08)
	struct UFortKeybindWidget* KeybindWidget; // 0x2e8(0x08)

	void OnWeaponUpgraded(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponUpgraded // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponStartUpgrading(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponStartUpgrading // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponRemoved(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponRemoved // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponEquipped(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponEquipped // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnReadyToUpgradeWeapon(enum class EFortRarity NextRarity); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnReadyToUpgradeWeapon // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnGainedXp(float CurrentXPPercentage); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnGainedXp // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleXpChanged(float XPDelta, float CurrentXPPercentage); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleXpChanged // (Final|Native|Protected) // @ game+0x69084d0
	void HandleWeaponUpgraded(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUpgraded // (Final|Native|Protected) // @ game+0x69084bc
	void HandleWeaponUnEquipped(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUnEquipped // (Final|Native|Protected) // @ game+0x69084a8
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponEquipped // (Final|Native|Protected) // @ game+0x69081f8
	void HandleUpgradeTriggered(float ReloadTime, enum class EFortWeaponReloadType ReloadType); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleUpgradeTriggered // (Final|Native|Protected) // @ game+0x6908130
	void HandlePowerUpPending(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandlePowerUpPending // (Final|Native|Protected) // @ game+0x690811c
	enum class EFortRarity GetCurrentWeaponRarity(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.GetCurrentWeaponRarity // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x69080f8
};

