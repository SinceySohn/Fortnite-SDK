// WidgetBlueprintGeneratedClass WBP_Vehicle_FuelGauge.WBP_Vehicle_FuelGauge_C
// Size: 0x318 (Inherited: 0x268)
struct UWBP_Vehicle_FuelGauge_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Sparks; // 0x270(0x08)
	struct UImage* Image_Glow; // 0x278(0x08)
	struct UImage* Image_LargeCone; // 0x280(0x08)
	struct UImage* Image_Meter; // 0x288(0x08)
	struct UImage* Image_MeterIcon; // 0x290(0x08)
	struct UImage* Image_MeterIconGlow; // 0x298(0x08)
	struct UImage* Image_Pulse; // 0x2a0(0x08)
	struct UImage* Image_Sparks; // 0x2a8(0x08)
	struct UImage* ; // 0x2b0(0x08)
	struct UOverlay* Overlay_BoostSparks; // 0x2b8(0x08)
	struct UCommonTextBlock* Text_FuelInfinite; // 0x2c0(0x08)
	struct UCommonTextBlock* Text_FuelMax; // 0x2c8(0x08)
	struct UCommonTextBlock* Text_FuelMin; // 0x2d0(0x08)
	struct UMaterialInstanceDynamic* ImageSecondaryMeterMaterial; // 0x2d8(0x08)
	double MeterIndicatorMaxAngle; // 0x2e0(0x08)
	double MeterIndicatorMinAngle; // 0x2e8(0x08)
	struct FLinearColor SecondaryMeterFillLineColor_Default; // 0x2f0(0x10)
	struct FLinearColor SecondaryMeterFillLineColor_LowFuel; // 0x300(0x10)
	struct FName ImageMeterFillParamName; // 0x310(0x04)
	struct FName SecondaryMeterFillLineColor_ParamName; // 0x314(0x04)

	void UpdateFuelChanged(double FuelPercent, bool IsFuelLow); // Function WBP_Vehicle_FuelGauge.WBP_Vehicle_FuelGauge_C.UpdateFuelChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowBoostEffect(bool IsBoosting); // Function WBP_Vehicle_FuelGauge.WBP_Vehicle_FuelGauge_C.ShowBoostEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reset(); // Function WBP_Vehicle_FuelGauge.WBP_Vehicle_FuelGauge_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function WBP_Vehicle_FuelGauge.WBP_Vehicle_FuelGauge_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ShowInfiniteFuel(bool HasInfiniteFuel); // Function WBP_Vehicle_FuelGauge.WBP_Vehicle_FuelGauge_C.ShowInfiniteFuel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_Vehicle_FuelGauge(int32_t EntryPoint); // Function WBP_Vehicle_FuelGauge.WBP_Vehicle_FuelGauge_C.ExecuteUbergraph_WBP_Vehicle_FuelGauge // (Final|UbergraphFunction) // @ game+0xdef49c
};

