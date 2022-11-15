// WidgetBlueprintGeneratedClass ToastSocialWidget_Base.ToastSocialWidget_Base_C
// Size: 0x448 (Inherited: 0x2e8)
struct UToastSocialWidget_Base_C : UFortSocialNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* TapAccept; // 0x2f0(0x08)
	struct UWidgetAnimation* ClickAccept; // 0x2f8(0x08)
	struct UWidgetAnimation* Intro_NeutralInfo_Simple; // 0x300(0x08)
	struct UWidgetAnimation* Intro_GoodInfo_Simple; // 0x308(0x08)
	struct UWidgetAnimation* Intro_BadInfo_Simple; // 0x310(0x08)
	struct UWidgetAnimation* Intro_NeutralInfo; // 0x318(0x08)
	struct UWidgetAnimation* Intro_GoodInfo; // 0x320(0x08)
	struct UWidgetAnimation* Intro_BadInfo; // 0x328(0x08)
	struct UWidgetAnimation* TimeToRespond; // 0x330(0x08)
	struct UWidgetAnimation* Outro_New; // 0x338(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x340(0x08)
	struct UWidgetAnimation* Intro_Action; // 0x348(0x08)
	struct UImage* BackgroundMat; // 0x350(0x08)
	struct UIconTextButtonHold_C* Button_Cursor; // 0x358(0x08)
	struct UIconTextButton_C* Button_Hold; // 0x360(0x08)
	struct UFortMobileImage* HamburgerIcon; // 0x368(0x08)
	struct UImage* Image_Fail; // 0x370(0x08)
	struct UImage* Image_Info; // 0x378(0x08)
	struct UImage* Image_Success; // 0x380(0x08)
	struct UImage* Image_Trim; // 0x388(0x08)
	struct UFortLazyImage* LazyImage_Icon; // 0x390(0x08)
	struct UOverlay* Overlay_Input_Keybind; // 0x398(0x08)
	struct UOverlay* Overlay_ResultIcon; // 0x3a0(0x08)
	struct UImage* ProgressCircle; // 0x3a8(0x08)
	struct UScaleBox* ScaleBox_Input_Pad; // 0x3b0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_InputButtons; // 0x3b8(0x08)
	struct UCommonTextBlock* Text_Action; // 0x3c0(0x08)
	struct UCommonRichTextBlock* Text_Desc; // 0x3c8(0x08)
	struct UCommonRichTextBlock* Text_Title; // 0x3d0(0x08)
	struct UImage* TextureIcon; // 0x3d8(0x08)
	struct UImage* ToastCushion; // 0x3e0(0x08)
	struct UVerticalBox* VerticalBox_HoldAction; // 0x3e8(0x08)
	struct UVerticalBox* VerticalBox_Info; // 0x3f0(0x08)
	struct UWBP_RebootRallyIcon_C* WBP_RebootRallyIcon; // 0x3f8(0x08)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x400(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x410(0x08)
	bool bActionTaken; // 0x418(0x01)
	bool UseComplexAnims; // 0x419(0x01)
	bool NewVar; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	struct TSoftObjectPtr<UObject> DownloadOnDemandErrorIcon; // 0x420(0x28)

	void (); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SequenceEvent__ENTRYPOINTToastSocialWidget_Base(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateIcons(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateIcons // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetMaterials(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ResetMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct UWidgetAnimation* DetermineIntroAnim(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.DetermineIntroAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void InputBasedStyling(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.InputBasedStyling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleNotificationType(struct FText& Return); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleNotificationType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetButtonHoldText(struct FText& Text); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonHoldText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetButtonCursorText(struct FText& Text); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonCursorText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetVisibilityForOptionalElements(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetVisibilityForOptionalElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TakeAction(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.TakeAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanupBeforeClosing(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.CleanupBeforeClosing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	int32_t GetActiveWidgetIndex(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetActiveWidgetIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	enum class ESlateVisibility GetInputSwitcherVisibility(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetInputSwitcherVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetupAnimBindings(bool Unbind); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyAdditionalStyling(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetImage(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateToast(struct UFortUINotification* Notification); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleIntroFinished(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOutroFinished(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayOutro(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayOpenAnimation(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCursorModeChanged(bool bCursorModeEnabled); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCursorModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnCancelNotification(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCancelNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTakeActionNotification(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnTakeActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUserStartedHoldActionNotification(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnUserStartedHoldActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputModeChanged(enum class ECommonInputType NewInputType); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HoldComplete(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.HoldComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnNotificationSet(struct UFortUINotification* Notification); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ToastSocialWidget_Base(int32_t EntryPoint); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.ExecuteUbergraph_ToastSocialWidget_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnFinishedToast__DelegateSignature(); // Function ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

