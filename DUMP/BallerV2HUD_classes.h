// WidgetBlueprintGeneratedClass BallerV2HUD.BallerV2HUD_C
// Size: 0x568 (Inherited: 0x438)
struct UBallerV2HUD_C : UFortAthenaVehicleDashboardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UWidgetAnimation* Anim_SelfDestructMessaging; // 0x440(0x08)
	struct UWidgetAnimation* Anim_LowFuel_Messaging; // 0x448(0x08)
	struct UWidgetAnimation* Anim_BoostOff; // 0x450(0x08)
	struct UWidgetAnimation* Anim_BoostOn; // 0x458(0x08)
	struct UImage* AdditonalOuterRing; // 0x460(0x08)
	struct UImage* ; // 0x468(0x08)
	struct UImage* BoostGlow; // 0x470(0x08)
	struct UBorder* BoostGlowBorder; // 0x478(0x08)
	struct UImage* FillBar; // 0x480(0x08)
	struct UHorizontalBox* ; // 0x488(0x08)
	struct UImage* Image; // 0x490(0x08)
	struct UImage* ; // 0x498(0x08)
	struct UImage* ; // 0x4a0(0x08)
	struct UImage* ; // 0x4a8(0x08)
	struct UImage* ; // 0x4b0(0x08)
	struct UImage* Image_Energy; // 0x4b8(0x08)
	struct UImage* Image_LargeCone; // 0x4c0(0x08)
	struct UImage* Image_NoEnergy_GlowPulse; // 0x4c8(0x08)
	struct UImage* Image_Sparks; // 0x4d0(0x08)
	struct UImage* ; // 0x4d8(0x08)
	struct UImage* LargeGlow; // 0x4e0(0x08)
	struct UImage* ; // 0x4e8(0x08)
	struct UImage* ; // 0x4f0(0x08)
	struct UOverlay* ; // 0x4f8(0x08)
	struct UOverlay* Overlay_BoostSparks; // 0x500(0x08)
	struct USafeZone* SafeZone; // 0x508(0x08)
	struct UWidgetSwitcher* Switcher_Energy; // 0x510(0x08)
	struct UCommonTextBlock* Text_Eject; // 0x518(0x08)
	struct UCommonTextBlock* Text_NoEnergy; // 0x520(0x08)
	struct UImage* TriangleArrow; // 0x528(0x08)
	struct UOverlay* WarningMessaging; // 0x530(0x08)
	bool IsLowFuel; // 0x538(0x01)
	bool IsEmpty; // 0x539(0x01)
	char pad_53A[0x6]; // 0x53a(0x06)
	double CachedFuel; // 0x540(0x08)
	double BoostSparksEndTranslation; // 0x548(0x08)
	double BoostSparksStartTranslation; // 0x550(0x08)
	double BoostGlowBorderScaleStart; // 0x558(0x08)
	double BoostGlowBorderScaleEnd; // 0x560(0x08)

	void SetBoostFXCollapsed(); // Function BallerV2HUD.BallerV2HUD_C.SetBoostFXCollapsed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBoostState(bool bIsBoosting); // Function BallerV2HUD.BallerV2HUD_C.SetBoostState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateEmptyState(); // Function BallerV2HUD.BallerV2HUD_C.UpdateEmptyState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateLowFuelState(); // Function BallerV2HUD.BallerV2HUD_C.UpdateLowFuelState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBoostStarted(); // Function BallerV2HUD.BallerV2HUD_C.OnBoostStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBoostFinished(); // Function BallerV2HUD.BallerV2HUD_C.OnBoostFinished // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFuelValueChanged(float FuelPercentage, bool bIsLowOnFuel); // Function BallerV2HUD.BallerV2HUD_C.OnFuelValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOutOfFuel(); // Function BallerV2HUD.BallerV2HUD_C.OnOutOfFuel // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLowFuel(); // Function BallerV2HUD.BallerV2HUD_C.OnLowFuel // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BallerV2HUD.BallerV2HUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWidgetVisibilityChanged(bool bNewVisibility); // Function BallerV2HUD.BallerV2HUD_C.OnWidgetVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BallerV2HUD.BallerV2HUD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetVehicleHasInfiniteFuel(bool bInfiniteFuel); // Function BallerV2HUD.BallerV2HUD_C.SetVehicleHasInfiniteFuel // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BallerV2HUD(int32_t EntryPoint); // Function BallerV2HUD.BallerV2HUD_C.ExecuteUbergraph_BallerV2HUD // (Final|UbergraphFunction) // @ game+0xdef49c
};

