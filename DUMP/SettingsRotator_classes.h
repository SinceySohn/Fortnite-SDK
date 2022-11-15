// WidgetBlueprintGeneratedClass SettingsRotator.SettingsRotator_C
// Size: 0x1450 (Inherited: 0x1440)
struct USettingsRotator_C : UFortSettingsRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UBorder* Background; // 0x1448(0x08)

	void BP_OnOptionsPopulated(int32_t Count); // Function SettingsRotator.SettingsRotator_C.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnOptionSelected(int32_t Index); // Function SettingsRotator.SettingsRotator_C.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDefaultOptionSpecified(int32_t DefaultOptionIndex); // Function SettingsRotator.SettingsRotator_C.BP_OnDefaultOptionSpecified // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SettingsRotator(int32_t EntryPoint); // Function SettingsRotator.SettingsRotator_C.ExecuteUbergraph_SettingsRotator // (Final|UbergraphFunction) // @ game+0xdef49c
};

