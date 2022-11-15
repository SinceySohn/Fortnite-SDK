// WidgetBlueprintGeneratedClass Athena_ConfirmationWindow.Athena_ConfirmationWindow_C
// Size: 0x460 (Inherited: 0x428)
struct UAthena_ConfirmationWindow_C : UAthenaConfirmationWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UWidgetAnimation* Intro; // 0x430(0x08)
	struct UImage* ; // 0x438(0x08)
	struct UImage* Image_Separator_Down; // 0x440(0x08)
	struct UImage* Image_Separator_Up; // 0x448(0x08)
	struct USafeZone* ; // 0x450(0x08)
	struct UScrollBox* ScrollBox_Description; // 0x458(0x08)

	void OnSetButtonText(struct UCommonButtonBase* Button, struct FText& Text); // Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.OnSetButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_ConfirmationWindow(int32_t EntryPoint); // Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.ExecuteUbergraph_Athena_ConfirmationWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

