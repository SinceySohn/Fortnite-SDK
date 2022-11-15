// WidgetBlueprintGeneratedClass SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C
// Size: 0x318 (Inherited: 0x2f0)
struct USidebarSettingsListEntry_Scalar_Narrow_C : UFortSettingsListEntrySetting_Scalar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* OnHover; // 0x2f8(0x08)
	struct UImage* DefaultValueLayer; // 0x300(0x08)
	struct USimpleMaterialProgressBar_C* Progress; // 0x308(0x08)
	struct USidebarSettingEntryBackground_C* SidebarSettingEntryBackground; // 0x310(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnValueChanged(float Value); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.OnValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDefaultValueChanged(float DefaultValue); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.OnDefaultValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarSettingsListEntry_Scalar_Narrow(int32_t EntryPoint); // Function SidebarSettingsListEntry_Scalar_Narrow.SidebarSettingsListEntry_Scalar_Narrow_C.ExecuteUbergraph_SidebarSettingsListEntry_Scalar_Narrow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

