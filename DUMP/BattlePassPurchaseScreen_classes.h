// WidgetBlueprintGeneratedClass BattlePassPurchaseScreen.BattlePassPurchaseScreen_C
// Size: 0x630 (Inherited: 0x500)
struct UBattlePassPurchaseScreen_C : UBattlePassPurchaseScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UWidgetAnimation* NewTile; // 0x508(0x08)
	struct UWidgetAnimation* PurchaseOptions; // 0x510(0x08)
	struct UWidgetAnimation* TransitionOut; // 0x518(0x08)
	struct UWidgetAnimation* TransitionIn; // 0x520(0x08)
	struct UHorizontalBox* HorizontalBox_BottomButtons; // 0x528(0x08)
	struct UHorizontalBox* HorizontalBox_ConfirmButtons; // 0x530(0x08)
	struct UEpicCMSImage* Image_Background_TestBG; // 0x538(0x08)
	struct UImage* Image_BackgroundBlur; // 0x540(0x08)
	struct UImage* Image_BGDarken; // 0x548(0x08)
	struct UImage* Image_Glow; // 0x550(0x08)
	struct UOverlay* MobileCloseVisibilityWrapper; // 0x558(0x08)
	struct UUpsell_TutorialTooltip_C* NavButtonNotification; // 0x560(0x08)
	struct USizeBox* NavButtonNotificationWrapper; // 0x568(0x08)
	struct UOverlay* Overlay_PurchaseOptions; // 0x570(0x08)
	struct UOverlay* PurchaseVisibilityWrapper; // 0x578(0x08)
	struct USafeZone* ; // 0x580(0x08)
	struct USafeZone* ; // 0x588(0x08)
	struct USafeZone* SafeZone_TopRight; // 0x590(0x08)
	struct USpacer* Spacer_purchase; // 0x598(0x08)
	struct UOverlay* ToCrewVisibilityWrapper; // 0x5a0(0x08)
	struct UVerticalBox* VerticalBox_PassDetails; // 0x5a8(0x08)
	struct UVerticalBox* VerticalBox_PurchaseOptions; // 0x5b0(0x08)
	struct UMaterialInstanceDynamic* ImageMID; // 0x5b8(0x08)
	struct TSoftObjectPtr<UTexture> DesignTimeAsset; // 0x5c0(0x28)
	struct FMulticastInlineDelegate OnPurchaseStateConfirm; // 0x5e8(0x10)
	struct FMulticastInlineDelegate OnPurchaseStatePurchase; // 0x5f8(0x10)
	struct UTexture2D* OldBackground; // 0x608(0x08)
	struct USoundBase* UpsellScreenAppearSound; // 0x610(0x08)
	bool Show Notification; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct USoundBase* Purchase Button Click Sound; // 0x620(0x08)
	struct USoundBase* Back To Battlepass Click Sound; // 0x628(0x08)

	void OnPurchaseStateChanged(enum class EBattlePassPurchaseState InCurrentState); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnPurchaseStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPurchaseConfirmed(); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnPurchaseConfirmed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDownloadBackgroundComplete(struct UTexture2D* NewBackground); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnDownloadBackgroundComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartingDownloadBackground(); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnStartingDownloadBackground // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventScreenTransitionIn(); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.EventScreenTransitionIn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetScreenInteractable(bool bInteractable); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnSetScreenInteractable // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetDesignTimeImages(); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.SetDesignTimeImages // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetNavButtonNotificationText(struct FText& NotificationText); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnSetNavButtonNotificationText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnShowNavButtonNotification(bool bShowNotification); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnShowNavButtonNotification // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.BndEvt__BattlePassPurchaseScreen_Button_ToCrew_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.BndEvt__BattlePassPurchaseScreen_Button_ConfirmBundle_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BattlePassPurchaseScreen(int32_t EntryPoint); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.ExecuteUbergraph_BattlePassPurchaseScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnPurchaseStatePurchase__DelegateSignature(); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnPurchaseStatePurchase__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPurchaseStateConfirm__DelegateSignature(); // Function BattlePassPurchaseScreen.BattlePassPurchaseScreen_C.OnPurchaseStateConfirm__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

