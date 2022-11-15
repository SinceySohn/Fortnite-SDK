// WidgetBlueprintGeneratedClass SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C
// Size: 0x320 (Inherited: 0x310)
struct USettingsListEntry_KeyboardInput_C : UFortSettingsListEntrySetting_KeyboardInput {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UWidgetAnimation* OnHover; // 0x318(0x08)

	void OnUpdateKeyText(struct FText& PrimaryKeyText, struct FText& SecondaryKeyText); // Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnUpdateKeyText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SettingsListEntry_KeyboardInput(int32_t EntryPoint); // Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.ExecuteUbergraph_SettingsListEntry_KeyboardInput // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

