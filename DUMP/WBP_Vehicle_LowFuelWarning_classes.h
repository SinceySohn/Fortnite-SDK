// WidgetBlueprintGeneratedClass WBP_Vehicle_LowFuelWarning.WBP_Vehicle_LowFuelWarning_C
// Size: 0x2a8 (Inherited: 0x268)
struct UWBP_Vehicle_LowFuelWarning_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* IsLowFuel; // 0x270(0x08)
	struct UImage* Image_LowFuelIcon; // 0x278(0x08)
	struct UImage* Image_LowFuelPulse; // 0x280(0x08)
	struct UImage* Image_RoundCard_Bolt; // 0x288(0x08)
	struct UOverlay* Overlay_LowFuel; // 0x290(0x08)
	struct UOverlay* Overlay_NoFuelText; // 0x298(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_FuelWarning; // 0x2a0(0x08)

	void ShowOutOfFuelWarning(); // Function WBP_Vehicle_LowFuelWarning.WBP_Vehicle_LowFuelWarning_C.ShowOutOfFuelWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowLowFuelWarning(); // Function WBP_Vehicle_LowFuelWarning.WBP_Vehicle_LowFuelWarning_C.ShowLowFuelWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_Vehicle_LowFuelWarning(int32_t EntryPoint); // Function WBP_Vehicle_LowFuelWarning.WBP_Vehicle_LowFuelWarning_C.ExecuteUbergraph_WBP_Vehicle_LowFuelWarning // (Final|UbergraphFunction) // @ game+0xdef49c
};

