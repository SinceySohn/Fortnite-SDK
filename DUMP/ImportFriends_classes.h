// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
// Size: 0x6e8 (Inherited: 0x588)
struct UImportFriends_C : UFortSocialImportPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x588(0x08)
	struct UWidgetAnimation* Intro_V2; // 0x590(0x08)
	struct UWidgetAnimation* ArrowPulse; // 0x598(0x08)
	struct UWidgetAnimation* Intro; // 0x5a0(0x08)
	struct UCommonTextBlock* AddFriendsDescription; // 0x5a8(0x08)
	struct UCommonTextBlock* ; // 0x5b0(0x08)
	struct UCommonTextBlock* CT_AddFriendsDescription; // 0x5b8(0x08)
	struct UCommonTextBlock* CT_ChangeInSettingsText; // 0x5c0(0x08)
	struct UCommonTextBlock* CT_LimitedTimeHeader; // 0x5c8(0x08)
	struct UCommonTextBlock* CT_TakenToLauncher; // 0x5d0(0x08)
	struct UImage* ; // 0x5d8(0x08)
	struct UItemInfoWidget_C* ItemInfoWidget; // 0x5e0(0x08)
	struct USafeZone* ; // 0x5e8(0x08)
	struct UScaleBox* SBox_AddFriendButtonScaleBox; // 0x5f0(0x08)
	struct UScaleBox* ScaleBoxDescription; // 0x5f8(0x08)
	struct UScaleBox* ScaleBoxHeader; // 0x600(0x08)
	struct UFortItemDefinition* PreviewItemDef; // 0x608(0x08)
	double HeartbeatDelayIntroAnimation; // 0x610(0x08)
	bool bHasReward; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct FText FacebookHeader; // 0x620(0x18)
	struct FText VKHeader; // 0x638(0x18)
	struct FText SteamHeader; // 0x650(0x18)
	struct FText PlaystationHeader; // 0x668(0x18)
	struct FText XboxHeader; // 0x680(0x18)
	enum class ESocialImportPanelPlatform SocialPlatform; // 0x698(0x01)
	char pad_699[0x3]; // 0x699(0x03)
	int32_t WrapHeaderAt; // 0x69c(0x04)
	struct FText XboxDescriptionText; // 0x6a0(0x18)
	struct FText PSNDescriptionText; // 0x6b8(0x18)
	struct FText SwitchDescriptionText; // 0x6d0(0x18)

	void ScaleTextButton(int32_t CharThreshold, struct UScaleBox* ContainingScaleBox, struct UIconTextButton_C* Button); // Function ImportFriends.ImportFriends_C.ScaleTextButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ScaleTextboxWithWrappingWorkaround(struct UScaleBox* ContainingScaleBox, int32_t CharLimitThreshold, struct UCommonTextBlock* TargetText, int32_t WrapAtHorrizontal); // Function ImportFriends.ImportFriends_C.ScaleTextboxWithWrappingWorkaround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHeaderText(); // Function ImportFriends.ImportFriends_C.HandleHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleDescriptionText(); // Function ImportFriends.ImportFriends_C.HandleDescriptionText // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ImportFriends.ImportFriends_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType); // Function ImportFriends.ImportFriends_C.OnPanelTypeSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnIncentivizedSet(bool bIncentivized); // Function ImportFriends.ImportFriends_C.OnIncentivizedSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function ImportFriends.ImportFriends_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ImportFriends(int32_t EntryPoint); // Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

