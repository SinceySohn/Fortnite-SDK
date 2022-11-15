// WidgetBlueprintGeneratedClass ToastWidget_New.ToastWidget_New_C
// Size: 0x321 (Inherited: 0x2b8)
struct UToastWidget_New_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* Outro_New; // 0x2c0(0x08)
	struct UWidgetAnimation* Intro; // 0x2c8(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x2d0(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x2d8(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x2e0(0x08)
	struct UCommonRichTextBlock* DescriptionRichText; // 0x2e8(0x08)
	struct UFortLazyImage* NotificationImage; // 0x2f0(0x08)
	struct UIconTextButton_C* OpenButton; // 0x2f8(0x08)
	struct UCommonRichTextBlock* TitleRichText; // 0x300(0x08)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x308(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x318(0x08)
	bool bActionTaken; // 0x320(0x01)

	float GetDisplayTime(bool& bOutDisplayTimeOverridden); // Function ToastWidget_New.ToastWidget_New_C.GetDisplayTime // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void SetupAnimBindings(bool Unbind); // Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetImage(); // Function ToastWidget_New.ToastWidget_New_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void StartIntro(); // Function ToastWidget_New.ToastWidget_New_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateToast(struct UFortUINotification* Notification); // Function ToastWidget_New.ToastWidget_New_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayOutro(); // Function ToastWidget_New.ToastWidget_New_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void HandleOutroFinished(); // Function ToastWidget_New.ToastWidget_New_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleIntroFinished(); // Function ToastWidget_New.ToastWidget_New_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ToastWidget_New.ToastWidget_New_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function ToastWidget_New.ToastWidget_New_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayOpenAnimation(); // Function ToastWidget_New.ToastWidget_New_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNotificationSet(struct UFortUINotification* Notification); // Function ToastWidget_New.ToastWidget_New_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function ToastWidget_New.ToastWidget_New_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ToastWidget_New(int32_t EntryPoint); // Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnFinishedToast__DelegateSignature(); // Function ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

