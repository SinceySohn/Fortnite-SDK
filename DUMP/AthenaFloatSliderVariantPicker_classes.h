// WidgetBlueprintGeneratedClass AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C
// Size: 0x360 (Inherited: 0x348)
struct UAthenaFloatSliderVariantPicker_C : UFortFloatSliderVariantPicker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UOverlay* Panel_Value; // 0x350(0x08)
	struct USimpleMaterialProgressBar_C* Progress; // 0x358(0x08)

	void OnUpdateValue(float NormalizedValue, bool bIsLocked); // Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32_t EntryPoint); // Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker // (Final|UbergraphFunction) // @ game+0xdef49c
};

