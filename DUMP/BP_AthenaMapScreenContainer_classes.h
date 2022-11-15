// WidgetBlueprintGeneratedClass BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C
// Size: 0x66c (Inherited: 0x608)
struct UBP_AthenaMapScreenContainer_C : UAthenaMapScreenContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UWidgetAnimation* DamageTaken; // 0x610(0x08)
	struct UHorizontalBox* HBox_Tabs; // 0x618(0x08)
	struct UImage* Image_NavigationBG; // 0x620(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x628(0x08)
	struct UImage* OnlineStatusIndicator; // 0x630(0x08)
	struct UOverlay* ; // 0x638(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x640(0x08)
	struct US18_PlayerBattlePassXpAndReward_C* ; // 0x648(0x08)
	struct USafeZone* SafeZone_TabButtons; // 0x650(0x08)
	struct USizeBox* SizeBox_Mobile; // 0x658(0x08)
	struct USizeBox* SizeBox_SwitcherContainer; // 0x660(0x08)
	int32_t DesignTimeTabCount; // 0x668(0x04)

	void ShowOrHideScoreboardUI(struct UObject* ScoreboardWidget, bool bShow); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.ShowOrHideScoreboardUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnShowTabsSet(bool bShowTabs); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.BP_OnShowTabsSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDamageReceived(); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.OnDamageReceived // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnShowOrHideCreativeScoreboard(bool bShowCreativeScoreboard); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.OnShowOrHideCreativeScoreboard // (BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_AthenaMapScreenContainer(int32_t EntryPoint); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.ExecuteUbergraph_BP_AthenaMapScreenContainer // (Final|UbergraphFunction) // @ game+0xdef49c
};

