// WidgetBlueprintGeneratedClass DivisionDetailsScreen.DivisionDetailsScreen_C
// Size: 0x590 (Inherited: 0x538)
struct UDivisionDetailsScreen_C : UFortDivisionDetailsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* Intro; // 0x540(0x08)
	struct UEventsSimpleButton_C* BackButton; // 0x548(0x08)
	struct UVerticalBox* GeneralDivisionInfo; // 0x550(0x08)
	struct UImage* ; // 0x558(0x08)
	struct UImage* Image_PanelBG; // 0x560(0x08)
	struct UImage* Image_PanelBorder; // 0x568(0x08)
	struct UEventsSimpleButton_C* NextButton; // 0x570(0x08)
	struct USafeZone* ; // 0x578(0x08)
	struct UVerticalBox* ScoringPayoutInfo; // 0x580(0x08)
	struct USizeBox* SizeBox_TopContainer; // 0x588(0x08)

	void RightShoulderButton(bool& Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.RightShoulderButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LeftShoulderButton(bool& Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.LeftShoulderButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EmptyFunction(bool& Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.EmptyFunction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_DivisionDetailsScreen(int32_t EntryPoint); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.ExecuteUbergraph_DivisionDetailsScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

