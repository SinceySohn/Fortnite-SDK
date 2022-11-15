// WidgetBlueprintGeneratedClass W_MountedCannon_HUD.W_MountedCannon_HUD_C
// Size: 0x400 (Inherited: 0x268)
struct UW_MountedCannon_HUD_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Caret_Horizontal; // 0x270(0x08)
	struct UImage* Caret_Vertical; // 0x278(0x08)
	struct UOverlay* HorizontalPingSliderOverlay; // 0x280(0x08)
	struct UImage* Ruler_Horizontal; // 0x288(0x08)
	struct UImage* Ruler_Vertical; // 0x290(0x08)
	struct UOverlay* VerticalPingSliderOverlay; // 0x298(0x08)
	struct UAthenaMarkerComponent* MarkerComponent; // 0x2a0(0x08)
	struct TMap<struct FMarkerID, struct UW_MountedCannon_SlidingPingMarker_C*> MarkerID_HorizontalSlider; // 0x2a8(0x50)
	struct TMap<struct FMarkerID, struct UW_MountedCannon_SlidingPingMarker_C*> MarkerID_VerticalSlider; // 0x2f8(0x50)
	struct AMountedCannon__v2_C* MountedCannonRef; // 0x348(0x08)
	double YawRulerCap; // 0x350(0x08)
	double PitchRulerCap; // 0x358(0x08)
	struct TMap<struct FLinearColor, struct UW_MountedCannon_SlidingPingMarker_C*> MarkerColor_HorizontalSlider; // 0x360(0x50)
	struct TMap<struct FLinearColor, struct UW_MountedCannon_SlidingPingMarker_C*> MarkerColor_VerticalSlider; // 0x3b0(0x50)

	void CleanupSliders(struct TArray<struct FLinearColor>& CurrentPingColors); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.CleanupSliders // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdatePingMarkers(); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.UpdatePingMarkers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPaint(struct FPaintContext& Context); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void SetMarkerSliderValue(struct FLinearColor PingColor, double Horizontal, double Vertical); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.SetMarkerSliderValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetMarkerComponent(struct UAthenaMarkerComponent*& MarkerComponent); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.GetMarkerComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void AddPingSlider(struct FLinearColor MarkerColor); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.AddPingSlider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetCaretColor(struct FLinearColor Color); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.SetCaretColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_W_MountedCannon_HUD(int32_t EntryPoint); // Function W_MountedCannon_HUD.W_MountedCannon_HUD_C.ExecuteUbergraph_W_MountedCannon_HUD // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

