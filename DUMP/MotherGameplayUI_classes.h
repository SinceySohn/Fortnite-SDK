// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
// Size: 0x340 (Inherited: 0x2d0)
struct UAvocadoEaterHealthBarWidget : UFortHUDElementWidget {
	struct FEventMessageTag AttachedMessageTag; // 0x2d0(0x04)
	struct FEventMessageTag DetachedMessageTag; // 0x2d4(0x04)
	struct FEventMessageTag SetMarkerPositionMessageTag; // 0x2d8(0x04)
	struct FEventMessageTag TargetDamagedMessageTag; // 0x2dc(0x04)
	char pad_2E0[0x60]; // 0x2e0(0x60)

	void OnTargetDamaged(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetMarkerPosition(float MarkerPosition); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnParasiteDetached(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteDetached // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnParasiteAttached(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteAttached // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
// Size: 0x2f8 (Inherited: 0x2e0)
struct UFortGravyGoblinReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
	struct FEventMessageTag ItemActivatableTag; // 0x2e0(0x04)
	struct FEventMessageTag ItemInactivatableTag; // 0x2e4(0x04)
	char pad_2E8[0x10]; // 0x2e8(0x10)

	void OnItemInactivatable(); // Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemInactivatable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnItemActivatable(); // Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemActivatable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
// Size: 0x2e0 (Inherited: 0x2e0)
struct UFortLlamaRoasterReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
};

// Class MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
// Size: 0x340 (Inherited: 0x2e0)
struct UFortPaddleGingerReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
	struct FEventMessageTag PropIndexChangedTag; // 0x2e0(0x04)
	struct FEventMessageTag PropActivatedTag; // 0x2e4(0x04)
	struct UFortKeybindWidget* Keybind_ActivateAction; // 0x2e8(0x08)
	struct UFortKeybindWidget* Keybind_CycleCategoryAction; // 0x2f0(0x08)
	struct UFortKeybindWidget* Keybind_CyclePropAction; // 0x2f8(0x08)
	char pad_300[0x40]; // 0x300(0x40)

	void OnPropIndexChanged(struct FText& CategoryText, int32_t PropIndex, int32_t MaxPropCount, int32_t CategoryIndex, int32_t MaxCategoryCount); // Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPropActivationChanged(bool Activated); // Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
// Size: 0x2e0 (Inherited: 0x2e0)
struct UFortReactorGradeReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {

	void OnUpdateChargeToMin(float ChargePercent); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToMin // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateChargeToAutoDischarge(float ChargePercent); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToAutoDischarge // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMinimumChargeReached(); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnMinimumChargeReached // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
// Size: 0x90 (Inherited: 0x70)
struct UFortMobileActionBBE_GravyGoblinRotate : UFortMobileActionButtonBehaviorExtension {
	struct FEventMessageTag HeldObjectRotatableTag; // 0x70(0x04)
	struct FEventMessageTag HeldObjectUnrotatableTag; // 0x74(0x04)
	struct FGameplayTag GravyGoblinTag; // 0x78(0x04)
	char pad_7C[0x14]; // 0x7c(0x14)
};

