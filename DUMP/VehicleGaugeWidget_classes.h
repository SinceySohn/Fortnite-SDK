// WidgetBlueprintGeneratedClass VehicleGaugeWidget.VehicleGaugeWidget_C
// Size: 0x4c0 (Inherited: 0x438)
struct UVehicleGaugeWidget_C : UFortAthenaVehicleDashboardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UWidgetAnimation* BoostFull; // 0x440(0x08)
	struct UWidgetAnimation* BoostEngage; // 0x448(0x08)
	struct UWidgetAnimation* NameOutro; // 0x450(0x08)
	struct UWidgetAnimation* NameIntro; // 0x458(0x08)
	struct UImage* Image_BoostGlow; // 0x460(0x08)
	struct UImage* Image_BoostMeter; // 0x468(0x08)
	struct UImage* Image_Speedometer; // 0x470(0x08)
	struct UOverlay* Overlay_Speedometer; // 0x478(0x08)
	struct UOverlay* OverlayBoostMeter; // 0x480(0x08)
	struct USpacer* Spacer_Boost; // 0x488(0x08)
	struct UWBP_Vehicle_FuelGauge_C* Widget_FuelGauge; // 0x490(0x08)
	struct UWBP_Vehicle_LowFuelWarning_C* Widget_LowFuelWarning; // 0x498(0x08)
	struct UWBP_Vehicle_NoFuelBanner_C* Widget_NoFuelBanner; // 0x4a0(0x08)
	bool BoostEffectsVisible; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UMaterialInstanceDynamic* ImageBoostMaterial; // 0x4b0(0x08)
	struct UMaterialInstanceDynamic* BoostGlowMaterial; // 0x4b8(0x08)

	void UpdateFuelChanged(double FuelPercent, bool LowFuel); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.UpdateFuelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void UpdateSpeedometer(float NormalizedSpeed, float RawSpeed); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.UpdateSpeedometer // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ShowNoFuelMessage(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.ShowNoFuelMessage // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBoostStarted(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnBoostStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBoostFinished(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnBoostFinished // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRechargableBoostFilled(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnRechargableBoostFilled // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOutOfFuel(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnOutOfFuel // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetVehicleHasInfiniteFuel(bool bInfiniteFuel); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.SetVehicleHasInfiniteFuel // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetVehicleUsesRechargableBoost(bool bUsesRechargeableBoost); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.SetVehicleUsesRechargableBoost // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPopUpOnSwitchDone(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnPopUpOnSwitchDone // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateRechargeableBoostPercent(float BoostPercent); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnUpdateRechargeableBoostPercent // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLowFuel(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnLowFuel // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFuelValueChanged(float FuelPercentage, bool bIsLowOnFuel); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnFuelValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRPMChanged(float NormalizedRPM); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnRPMChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWidgetVisibilityChanged(bool bNewVisibility); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnWidgetVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayerFacingNameUpdated(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.OnPlayerFacingNameUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void StopBoostStuff(); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.StopBoostStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_HandleExtensionWidgetCreated(struct UUserWidget* Widget, enum class EUIExtensionSlot SlotType); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.BP_HandleExtensionWidgetCreated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_VehicleGaugeWidget(int32_t EntryPoint); // Function VehicleGaugeWidget.VehicleGaugeWidget_C.ExecuteUbergraph_VehicleGaugeWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

