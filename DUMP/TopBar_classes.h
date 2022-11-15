// WidgetBlueprintGeneratedClass TopBar.TopBar_C
// Size: 0x580 (Inherited: 0x540)
struct UTopBar_C : UAthenaTopBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* IntroTabLabel; // 0x548(0x08)
	struct UGameFeatureStatus_C* GameFeatureStatus_HighResTextureDownload; // 0x550(0x08)
	struct UHorizontalBox* HorizontalBox_TopContent; // 0x558(0x08)
	struct UHorizontalBox* MainNav; // 0x560(0x08)
	struct USizeBox* MobileTabTitle; // 0x568(0x08)
	struct USafeZone* ; // 0x570(0x08)
	struct Uwindowchromebuttons_C* windowchromebuttons; // 0x578(0x08)

	void SetMainNavVisibility(enum class ESlateVisibility NewVisibility); // Function TopBar.TopBar_C.SetMainNavVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetTopTabsVisibility(enum class ESlateVisibility NewVisibility); // Function TopBar.TopBar_C.SetTopTabsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateMTXButton(); // Function TopBar.TopBar_C.UpdateMTXButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function TopBar.TopBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMobileTabLabelChanged(); // Function TopBar.TopBar_C.OnMobileTabLabelChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TopBar(int32_t EntryPoint); // Function TopBar.TopBar_C.ExecuteUbergraph_TopBar // (Final|UbergraphFunction) // @ game+0xdef49c
};

