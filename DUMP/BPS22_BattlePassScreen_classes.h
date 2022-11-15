// WidgetBlueprintGeneratedClass BPS22_BattlePassScreen.BPS22_BattlePassScreen_C
// Size: 0xeb8 (Inherited: 0xbf8)
struct UBPS22_BattlePassScreen_C : UBattlePassScreenS22 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbf8(0x08)
	struct UWidgetAnimation* Intro; // 0xc00(0x08)
	struct UWidgetAnimation* ViewRewardFraming; // 0xc08(0x08)
	struct UWidgetAnimation* ShowPreviewAction; // 0xc10(0x08)
	struct UWidgetAnimation* ShowVariantLabel; // 0xc18(0x08)
	struct UWidgetAnimation* SeasonInformation; // 0xc20(0x08)
	struct UWidgetAnimation* OnViewRewardAnimation; // 0xc28(0x08)
	struct UBPS22_BattlePassRewardPage_C* BattlePassBonusRewardsS22; // 0xc30(0x08)
	struct UBPS22_BulkClaimRewards_C* BattlePassBulkClaimRewards; // 0xc38(0x08)
	struct UBPS22_LandingPages_C* BattlePassLandingPageS22; // 0xc40(0x08)
	struct UBPS22_BattlePassRewardPage_C* BattlePassQuestsS22; // 0xc48(0x08)
	struct UBPS22_BattlePassRewardPage_C* BattlePassRewardOverviewS22; // 0xc50(0x08)
	struct UOverlay* BattlePassScreen; // 0xc58(0x08)
	struct UBPS22_AboutModal_C* BPS22_AboutModal; // 0xc60(0x08)
	struct UBPS22_CustomizationScreen_C* BPS22_CustomizationScreen; // 0xc68(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock; // 0xc70(0x08)
	struct UCommonRichTextBlock* ; // 0xc78(0x08)
	struct UCommonRichTextBlock* ; // 0xc80(0x08)
	struct USafeZone* currencies_position; // 0xc88(0x08)
	struct UImage* FakeHackGradient; // 0xc90(0x08)
	struct UOverlay* ForceBacchusMobileDownwards; // 0xc98(0x08)
	struct UHorizontalBox* HBox_Quest; // 0xca0(0x08)
	struct UImage* Icon_Currency_Cost; // 0xca8(0x08)
	struct UImage* Icon_Currency_Insufficient; // 0xcb0(0x08)
	struct UImage* Image; // 0xcb8(0x08)
	struct UImage* ; // 0xcc0(0x08)
	struct UImage* ; // 0xcc8(0x08)
	struct UImage* ; // 0xcd0(0x08)
	struct UImage* ; // 0xcd8(0x08)
	struct UImage* ; // 0xce0(0x08)
	struct UImage* ; // 0xce8(0x08)
	struct UImage* Image__ClaimedReward_progress; // 0xcf0(0x08)
	struct UImage* ; // 0xcf8(0x08)
	struct UImage* ; // 0xd00(0x08)
	struct UImage* Image_Prerequisite_progress; // 0xd08(0x08)
	struct UImage* Image_Resource; // 0xd10(0x08)
	struct USizeBox* ItemDetailsContainer; // 0xd18(0x08)
	struct USafeZone* LandingDescriptionPosition; // 0xd20(0x08)
	struct UCommonTextBlock* LandingText_Description; // 0xd28(0x08)
	struct UVerticalBox* LegalText; // 0xd30(0x08)
	struct UOverlay* Overlay_Currencies; // 0xd38(0x08)
	struct UOverlay* OwnsBattlePassContainer; // 0xd40(0x08)
	struct UHorizontalBox* PlatformSharedButtons; // 0xd48(0x08)
	struct UCommonTextBlock* RequiresCosmeticText; // 0xd50(0x08)
	struct UCommonRichTextBlock* RichText_ClaimedReward_Progress; // 0xd58(0x08)
	struct UCommonRichTextBlock* RichText_Prerequisite_Progress; // 0xd60(0x08)
	struct URichTextBlock* RichText_Title; // 0xd68(0x08)
	struct USafeZone* ; // 0xd70(0x08)
	struct USizeBox* ; // 0xd78(0x08)
	struct USizeBox* SizeBox_AlienArtifactInfo; // 0xd80(0x08)
	struct USizeBox* SizeBox_COntextualAction; // 0xd88(0x08)
	struct USizeBox* SizeBox_FreePassInfo; // 0xd90(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Description_State_LandingPage; // 0xd98(0x08)
	struct USafeZone* SZButtonsAndLegal; // 0xda0(0x08)
	struct UBorder* Tag_BattlePass; // 0xda8(0x08)
	struct UBorder* Tag_ComingSoon; // 0xdb0(0x08)
	struct UBorder* Tag_RequiresCustomizationSkin; // 0xdb8(0x08)
	struct UCommonTextBlock* Text_Cost_Currency; // 0xdc0(0x08)
	struct UCommonTextBlock* Text_Delayed; // 0xdc8(0x08)
	struct UCommonTextBlock* Text_Legal_refund; // 0xdd0(0x08)
	struct UCommonTextBlock* Text_NotEnough_Currency; // 0xdd8(0x08)
	struct UCommonTextBlock* Text_Prerequisite; // 0xde0(0x08)
	struct UCommonRichTextBlock* Text_ResourceAcquireText; // 0xde8(0x08)
	struct UCommonTextBlock* Text_Tag_LandingPageComing; // 0xdf0(0x08)
	struct UCommonBorder* VariantLabel; // 0xdf8(0x08)
	struct UCommonRichTextBlock* VariantUnlockPreviewSet_Richtext; // 0xe00(0x08)
	struct UVerticalBox* VerticalBox_currency; // 0xe08(0x08)
	struct UVerticalBox* VerticalBox_Description; // 0xe10(0x08)
	struct UVerticalBox* VerticalBox_LandingText; // 0xe18(0x08)
	struct UWrapBox* WrapBox_Tags; // 0xe20(0x08)
	bool AutoPlayVideo; // 0xe28(0x01)
	bool ForceAutoPlayVideo; // 0xe29(0x01)
	char pad_E2A[0x2]; // 0xe2a(0x02)
	struct FLinearColor MPC-ManualSunlightVector; // 0xe2c(0x10)
	struct FLinearColor MPC-ManualSunlightColor; // 0xe3c(0x10)
	bool BP owned; // 0xe4c(0x01)
	char pad_E4D[0x3]; // 0xe4d(0x03)
	struct UMaterialInterface* Custom Skin Icon; // 0xe50(0x08)
	struct UMaterialInterface* Battle Star Icon; // 0xe58(0x08)
	bool HaveAllBpReward; // 0xe60(0x01)
	char pad_E61[0x7]; // 0xe61(0x07)
	struct TMap<struct UFortPersistentResourceItemDefinition*, struct FText> PersistentResourceAcquireTextMap; // 0xe68(0x50)

	void Set landing Page text(struct FText Title, struct FText Description, int32_t State Index); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.Set landing Page text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleRewardTimelineAnimation(bool bAnimateRewardTimeline); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.HandleRewardTimelineAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleWatchVideoRequest(bool PlayFromDisc); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.HandleWatchVideoRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleViewReward(bool bInNoReward, int32_t InNumRewardsToPurchase); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.HandleViewReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRequestViewReward(); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnRequestViewReward // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnRequestViewRewardComplete(); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnRequestViewRewardComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnVariantUpdate(int32_t CurrentIndex, int32_t TotalNumVariants); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnVariantUpdate // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBattlePassViewChanged(enum class EBattlePassView NewView); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnBattlePassViewChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnPreviewActionButtonUpdated(struct FText& RowDisplayName); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnPreviewActionButtonUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnViewReward(struct FFortRarityItemData Rarity, bool bNoReward, struct UFortItemDefinition* RewardItem); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnViewReward // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetPrerequisiteInfo(struct FText& Description, int32_t OwnedRewards, int32_t NeededRewards, bool bShowPrerequisiteLock); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnSetPrerequisiteInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnBattlePassOwned(); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnBattlePassOwned // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetClaimedRewardInfo(int32_t OwnedRewards, int32_t TotalRewards); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnSetClaimedRewardInfo // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnTransitionItemDetails(bool bTransitionForward); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnTransitionItemDetails // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnItemDelayed(struct FTimespan Delay); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnItemDelayed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetDynamicInput(enum class EBattlePassInputs InputType, struct UBattlePassInputData* InputData); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnSetDynamicInput // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLevelChanged(int32_t Level); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetTagVisibility(bool BattlePassRequiredVisible, bool CustomizationSkinRequiredVisible, bool ComingSoonVisible); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.SetTagVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInsufficientResource(struct UFortPersistentResourceItemDefinition* PersistentResource); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnInsufficientResource // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSetResourcePrice(int32_t Cost, struct UFortPersistentResourceItemDefinition* PersistentResource); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnSetResourcePrice // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BPS20_BattlePassScreen_BattlePassLandingPageS18_K2Node_ComponentBoundEvent_5_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo, bool bShowRewardCount); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.BndEvt__BPS20_BattlePassScreen_BattlePassLandingPageS18_K2Node_ComponentBoundEvent_5_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_BattlePassScreen(int32_t EntryPoint); // Function BPS22_BattlePassScreen.BPS22_BattlePassScreen_C.ExecuteUbergraph_BPS22_BattlePassScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

