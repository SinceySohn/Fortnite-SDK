// WidgetBlueprintGeneratedClass ToastSocialWidget.ToastSocialWidget_C
// Size: 0x351 (Inherited: 0x2e8)
struct UToastSocialWidget_C : UFortSocialNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Outro_New; // 0x2f0(0x08)
	struct UWidgetAnimation* Intro; // 0x2f8(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x300(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x308(0x08)
	struct UIconTextButton_C* Button_Cursor; // 0x310(0x08)
	struct UIconTextButton_C* Button_Hold; // 0x318(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x320(0x08)
	struct UCommonRichTextBlock* DescriptionRichText; // 0x328(0x08)
	struct UFortLazyImage* NotificationImage; // 0x330(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_InputButtons; // 0x338(0x08)
	struct UCommonRichTextBlock* TitleRichText; // 0x340(0x08)
	struct FTimerHandle AnimationDelayTimer; // 0x348(0x08)
	bool bActionTaken; // 0x350(0x01)

	float GetDisplayTime(bool& bOutDisplayTimeOverridden); // Function ToastSocialWidget.ToastSocialWidget_C.GetDisplayTime // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetButtonHoldText(struct FText& Text); // Function ToastSocialWidget.ToastSocialWidget_C.GetButtonHoldText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetButtonCursorText(struct FText& Text); // Function ToastSocialWidget.ToastSocialWidget_C.GetButtonCursorText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetVisibilityForOptionalElements(); // Function ToastSocialWidget.ToastSocialWidget_C.SetVisibilityForOptionalElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TakeAction(); // Function ToastSocialWidget.ToastSocialWidget_C.TakeAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanupBeforeClosing(); // Function ToastSocialWidget.ToastSocialWidget_C.CleanupBeforeClosing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	int32_t GetActiveWidgetIndex(); // Function ToastSocialWidget.ToastSocialWidget_C.GetActiveWidgetIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	enum class ESlateVisibility GetInputSwitcherVisibility(); // Function ToastSocialWidget.ToastSocialWidget_C.GetInputSwitcherVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetupAnimBindings(bool Unbind); // Function ToastSocialWidget.ToastSocialWidget_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetImage(); // Function ToastSocialWidget.ToastSocialWidget_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartIntro(); // Function ToastSocialWidget.ToastSocialWidget_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateToast(struct UFortUINotification* Notification); // Function ToastSocialWidget.ToastSocialWidget_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayOutro(); // Function ToastSocialWidget.ToastSocialWidget_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ToastSocialWidget.ToastSocialWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ToastSocialWidget.ToastSocialWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void HandleOutroFinished(); // Function ToastSocialWidget.ToastSocialWidget_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleIntroFinished(); // Function ToastSocialWidget.ToastSocialWidget_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ToastSocialWidget.ToastSocialWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function ToastSocialWidget.ToastSocialWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayOpenAnimation(); // Function ToastSocialWidget.ToastSocialWidget_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCursorModeChanged(bool bCursorModeEnabled); // Function ToastSocialWidget.ToastSocialWidget_C.OnCursorModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnCancelNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnCancelNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTakeActionNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnTakeActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUserStartedHoldActionNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnUserStartedHoldActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputModeChanged(enum class ECommonInputType NewInputType); // Function ToastSocialWidget.ToastSocialWidget_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNotificationSet(struct UFortUINotification* Notification); // Function ToastSocialWidget.ToastSocialWidget_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function ToastSocialWidget.ToastSocialWidget_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ToastSocialWidget(int32_t EntryPoint); // Function ToastSocialWidget.ToastSocialWidget_C.ExecuteUbergraph_ToastSocialWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

