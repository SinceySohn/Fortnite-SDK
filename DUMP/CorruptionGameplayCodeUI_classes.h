// Class CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
// Size: 0x2e8 (Inherited: 0x2e0)
struct UFortPowerupReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
	enum class EPowerupHeatState LastPowerupHeatState; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)

	float GetOverheatingMaxValue(); // Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetOverheatingMaxValue // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6777850
	float GetCurrentOverheatValue(); // Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatValue // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6777828
	float GetCurrentOverheatPercent(); // Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatPercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6777800
};

