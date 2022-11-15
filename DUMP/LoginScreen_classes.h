// WidgetBlueprintGeneratedClass LoginScreen.LoginScreen_C
// Size: 0x518 (Inherited: 0x4c8)
struct ULoginScreen_C : UFortUIStateWidget_Login {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UConsoleProfileWidget_C* ConsoleProfileWidget; // 0x4d0(0x08)
	struct UImage* DarkBacking; // 0x4d8(0x08)
	struct UOverlay* KeyArt-Group; // 0x4e0(0x08)
	struct UImage* KeyArtBackground; // 0x4e8(0x08)
	struct UImage* KeyArtBackground-For-Blur; // 0x4f0(0x08)
	struct USafeZone* SafeZone; // 0x4f8(0x08)
	struct UCommonTextBlock* Text_Version; // 0x500(0x08)
	struct UBuildWatermark_C* Widget_BuildWatermark; // 0x508(0x08)
	struct UWidget* PlatformSpecificBackBorder; // 0x510(0x08)

	void BndEvt__LoginScreen_Splash_Screen_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature(); // Function LoginScreen.LoginScreen_C.BndEvt__LoginScreen_Splash_Screen_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function LoginScreen.LoginScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetKeyArtVisibility(int32_t NewActiveWidgetIndex); // Function LoginScreen.LoginScreen_C.SetKeyArtVisibility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function LoginScreen.LoginScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LoginScreen(int32_t EntryPoint); // Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

