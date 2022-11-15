// WidgetBlueprintGeneratedClass SettingsListEntry_Scalar.SettingsListEntry_Scalar_C
// Size: 0x310 (Inherited: 0x2f0)
struct USettingsListEntry_Scalar_C : UFortSettingsListEntrySetting_Scalar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* OnHover; // 0x2f8(0x08)
	struct UImage* DefaultValueLayer; // 0x300(0x08)
	struct USimpleMaterialProgressBar_C* Progress; // 0x308(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnValueChanged(float Value); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDefaultValueChanged(float DefaultValue); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnDefaultValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SettingsListEntry_Scalar(int32_t EntryPoint); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.ExecuteUbergraph_SettingsListEntry_Scalar // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

