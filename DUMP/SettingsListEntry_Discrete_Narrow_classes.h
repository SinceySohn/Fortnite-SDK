// WidgetBlueprintGeneratedClass SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C
// Size: 0x330 (Inherited: 0x300)
struct USettingsListEntry_Discrete_Narrow_C : UFortSettingsListEntrySetting_Discrete {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* OnHover; // 0x308(0x08)
	struct UIconTextButton_C* Button_FirstOption; // 0x310(0x08)
	struct UIconTextButton_C* Button_SecondOption; // 0x318(0x08)
	struct UWidgetSwitcher* OptionsSets; // 0x320(0x08)
	struct UHorizontalBox* Several_Options; // 0x328(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SettingsListEntry_Discrete_Narrow(int32_t EntryPoint); // Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.ExecuteUbergraph_SettingsListEntry_Discrete_Narrow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

