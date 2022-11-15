// WidgetBlueprintGeneratedClass BacchusShowdownScreen.BacchusShowdownScreen_C
// Size: 0x638 (Inherited: 0x598)
struct UBacchusShowdownScreen_C : UFortShowdownScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x598(0x08)
	struct UWidgetAnimation* Outro; // 0x5a0(0x08)
	struct UWidgetAnimation* Intro; // 0x5a8(0x08)
	struct UCircleArrowButton_C* CircleArrowButton_Left; // 0x5b0(0x08)
	struct UCircleArrowButton_C* CircleArrowButton_Right; // 0x5b8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_ErrorSwitcher; // 0x5c0(0x08)
	struct UImage* Image_BG; // 0x5c8(0x08)
	struct UCommonTextBlock* NoTournamentsContent; // 0x5d0(0x08)
	struct UOverlay* Overlay_NoTournamentContent; // 0x5d8(0x08)
	struct USafeZone* ; // 0x5e0(0x08)
	struct USafeZone* ; // 0x5e8(0x08)
	struct USafeZone* ; // 0x5f0(0x08)
	struct USafeZone* ; // 0x5f8(0x08)
	struct USizeBox* SizeBox_Posters; // 0x600(0x08)
	struct UFortSwipePanel* SwipePanel; // 0x608(0x08)
	struct UOverlay* TournamentsContent; // 0x610(0x08)
	struct FSlateColor PrimaryColor; // 0x618(0x14)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct UWidget* SelectedTile; // 0x630(0x08)

	void BP_OnActivated(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnInputModeChanged(bool bUsingGamepad); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void TournamentListSelect(struct UWidget* CurrentWidget); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.TournamentListSelect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SelectedFrontTournament(bool bFrontIsSelected); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.SelectedFrontTournament // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SelectedEndTournament(bool bEndIsSelected); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.SelectedEndTournament // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.BndEvt__ListView_TournamentList_K2Node_ComponentBoundEvent_5_OnListItemSelectionChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BacchusShowdownScreen(int32_t EntryPoint); // Function BacchusShowdownScreen.BacchusShowdownScreen_C.ExecuteUbergraph_BacchusShowdownScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

