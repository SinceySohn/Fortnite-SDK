// WidgetBlueprintGeneratedClass SplashScreenWidget.SplashScreenWidget_C
// Size: 0x550 (Inherited: 0x4f0)
struct USplashScreenWidget_C : UFortSplashScreenWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UWidgetAnimation* InputPromptIdle; // 0x4f8(0x08)
	struct UCommonActionWidget* GamepadActionWidget; // 0x500(0x08)
	struct UHorizontalBox* GamepadInputHbox; // 0x508(0x08)
	struct UCommonTextBlock* GamepadInputText; // 0x510(0x08)
	struct UCommonLazyImage* I_Fortnite; // 0x518(0x08)
	struct UImage* ImageFakeButtonBackground; // 0x520(0x08)
	struct UHorizontalBox* MobileInputHbox; // 0x528(0x08)
	struct UCommonTextBlock* MobileInputText; // 0x530(0x08)
	struct UHorizontalBox* MouseInputHBox; // 0x538(0x08)
	struct UCommonTextBlock* MouseInputText; // 0x540(0x08)
	struct UWidgetSwitcher* Switcher_Input; // 0x548(0x08)

	void BP_OnActivated(); // Function SplashScreenWidget.SplashScreenWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SplashScreenWidget(int32_t EntryPoint); // Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

