// Class CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
// Size: 0x2d8 (Inherited: 0x290)
struct UClassSelectorLoadoutContainer : UCommonUserWidget {
	struct UWrapBox* WrapBox; // 0x290(0x08)
	struct UAthenaItemElementWidgetBase* EntryWidgetClass; // 0x298(0x08)
	struct TArray<struct UAthenaItemElementWidgetBase*> EntryWidgets; // 0x2a0(0x10)
	struct UFortItemDefinition* PreviewItemDef; // 0x2b0(0x08)
	int32_t NumPreviewEntries; // 0x2b8(0x04)
	char pad_2BC[0x1c]; // 0x2bc(0x1c)
};

// Class CRD_ClassSelectorUI.ClassSelectorTabButtons
// Size: 0x348 (Inherited: 0x290)
struct UClassSelectorTabButtons : UCommonUserWidget {
	struct UCommonActionWidget* LeftActionWidget; // 0x290(0x08)
	struct UCommonActionWidget* RightActionWidget; // 0x298(0x08)
	struct UScrollBox* TabButtonsScrollBox; // 0x2a0(0x08)
	struct UCommonButtonBase* LeftButton; // 0x2a8(0x08)
	struct UCommonButtonBase* RightButton; // 0x2b0(0x08)
	struct FDataTableRowHandle LeftInputAction; // 0x2b8(0x10)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FDataTableRowHandle RightInputAction; // 0x2d0(0x10)
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct TArray<struct UClassSelectorTeamTile*> TabButtons; // 0x2e8(0x10)
	struct UClassSelectorTeamTile* TabButtonClass; // 0x2f8(0x08)
	struct Fmargin TabButtonPadding; // 0x300(0x10)
	char pad_310[0x8]; // 0x310(0x08)
	struct TArray<struct FText> DesignerPreviewTabNames; // 0x318(0x10)
	float ButtonScrollAmount; // 0x328(0x04)
	char pad_32C[0x1c]; // 0x32c(0x1c)
};

// Class CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
// Size: 0x280 (Inherited: 0x268)
struct UClassSelectorTeamInfoWidget : UUserWidget {
	struct UCommonTextBlock* TeamName; // 0x268(0x08)
	struct UCommonTextBlock* TeamCountText; // 0x270(0x08)
	struct UCommonTextBlock* TeamDescription; // 0x278(0x08)
};

// Class CRD_ClassSelectorUI.CreativeClassSelectorButton
// Size: 0x1420 (Inherited: 0x13e0)
struct UCreativeClassSelectorButton : UCommonButtonBase {
	struct UCommonTextBlock* ButtonTextBlock; // 0x13e0(0x08)
	struct UCommonActionWidget* ActionWidget; // 0x13e8(0x08)
	struct FText ButtonText; // 0x13f0(0x18)
	struct FDataTableRowHandle ButtonInputAction; // 0x1408(0x10)
	bool bAutoCapitalize; // 0x1418(0x01)
	char pad_1419[0x7]; // 0x1419(0x07)

	void SetButtonText(struct FText& InText); // Function CRD_ClassSelectorUI.CreativeClassSelectorButton.SetButtonText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67fb200
};

// Class CRD_ClassSelectorUI.ClassSelectorTeamTile
// Size: 0x14d0 (Inherited: 0x1420)
struct UClassSelectorTeamTile : UCreativeClassSelectorButton {
	char pad_1420[0x90]; // 0x1420(0x90)
	struct UTextBlock* PlayerCount; // 0x14b0(0x08)
	struct UCommonLazyImage* TeamIconImage; // 0x14b8(0x08)
	char pad_14C0[0x10]; // 0x14c0(0x10)

	void OnTeamSet(struct FMinigameTeam& NewTeamData); // Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamSet // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnTeamIconSet(struct FCreativeIconOption& NewTeamIcon); // Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamIconSet // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnTeamColorIndexSet(int32_t TeamColorIndex); // Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamColorIndexSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayerCountSet(int32_t NewPlayerCount); // Function CRD_ClassSelectorUI.ClassSelectorTeamTile.OnPlayerCountSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class CRD_ClassSelectorUI.ClassSelectorTeamTiles
// Size: 0x2d8 (Inherited: 0x290)
struct UClassSelectorTeamTiles : UCommonUserWidget {
	char pad_290[0x8]; // 0x290(0x08)
	struct TArray<struct UClassSelectorTeamTile*> TeamTiles; // 0x298(0x10)
	struct UUniformGridPanel* RootPanel; // 0x2a8(0x08)
	struct UClassSelectorTeamTile* EntryClass; // 0x2b0(0x08)
	int32_t DesignerPreviewEntries; // 0x2b8(0x04)
	char pad_2BC[0x1c]; // 0x2bc(0x1c)
};

// Class CRD_ClassSelectorUI.CreativeClassItemInfo
// Size: 0x70 (Inherited: 0x28)
struct UCreativeClassItemInfo : UObject {
	struct FMinigameClassSlot ClassSlot; // 0x28(0x40)
	char pad_68[0x8]; // 0x68(0x08)
};

// Class CRD_ClassSelectorUI.CreativeClassEntry
// Size: 0x1430 (Inherited: 0x1420)
struct UCreativeClassEntry : UCreativeClassSelectorButton {
	char pad_1420[0x8]; // 0x1420(0x08)
	struct UCreativeClassItemInfo* ItemInfo; // 0x1428(0x08)

	void OnClassEntryDataSet(bool bIsCurrentClass, bool bIsPendingClass); // Function CRD_ClassSelectorUI.CreativeClassEntry.OnClassEntryDataSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBrowsingLoadout(bool bBrowsingLoadout); // Function CRD_ClassSelectorUI.CreativeClassEntry.OnBrowsingLoadout // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class CRD_ClassSelectorUI.CreativeClassSelector
// Size: 0x4e0 (Inherited: 0x3a8)
struct UCreativeClassSelector : UCommonActivatableWidget {
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct UClassSelectorTabButtons* TabButtons_TeamSelection; // 0x3b8(0x08)
	struct UCommonListView* ListView_Classes; // 0x3c0(0x08)
	struct TArray<struct UCreativeClassItemInfo*> ClassItemInfos; // 0x3c8(0x10)
	struct UScrollBox* LoadoutScrollBox; // 0x3d8(0x08)
	struct UClassSelectorLoadoutContainer* LoadoutContainer_Inventory; // 0x3e0(0x08)
	struct UClassSelectorLoadoutContainer* LoadoutContainer_Resources; // 0x3e8(0x08)
	struct UCommonButtonBase* Button_SelectLoadout; // 0x3f0(0x08)
	struct UCommonButtonBase* Button_RandomClass; // 0x3f8(0x08)
	struct UWidgetSwitcher* Switcher_Descriptions; // 0x400(0x08)
	struct UPanelWidget* ClassAndTeamDescriptionContainer; // 0x408(0x08)
	struct UPanelWidget* ItemDescriptionContainer; // 0x410(0x08)
	struct UPanelWidget* InventoryPanel; // 0x418(0x08)
	struct UPanelWidget* ResourcesPanel; // 0x420(0x08)
	struct UCommonTextBlock* ItemRarity; // 0x428(0x08)
	struct UCommonTextBlock* ItemName; // 0x430(0x08)
	struct UCommonTextBlock* ItemDescription; // 0x438(0x08)
	struct UPanelWidget* TeamDescriptionContainer; // 0x440(0x08)
	struct UClassSelectorTeamInfoWidget* TeamInfoWidget_FullView; // 0x448(0x08)
	struct UClassSelectorTeamInfoWidget* TeamInfoWidget_TeamsOnly; // 0x450(0x08)
	struct UWidgetSwitcher* DisplaySwitcher; // 0x458(0x08)
	struct UPanelWidget* ClassAndTeamSelectionContainer; // 0x460(0x08)
	struct UPanelWidget* OnlyTeamSelectionContainer; // 0x468(0x08)
	struct UPanelWidget* InvalidDataContainer; // 0x470(0x08)
	struct UClassSelectorTeamTiles* TeamTiles; // 0x478(0x08)
	struct UCreativeClassSelectorButton* TeamSelectionTabClass; // 0x480(0x08)
	bool bIsModalVersion; // 0x488(0x01)
	bool bEnableModalTimeLimit; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	int32_t ModalTimeLimitInSeconds; // 0x48c(0x04)
	char pad_490[0x10]; // 0x490(0x10)
	enum class EClassSelectorDisplayMode DisplayMode; // 0x4a0(0x01)
	bool bDeferRespawn; // 0x4a1(0x01)
	char pad_4A2[0x6]; // 0x4a2(0x06)
	struct FDataTableRowHandle ReturnToClassSelectionInputAction; // 0x4a8(0x10)
	float LoadoutScrollPadding; // 0x4b8(0x04)
	char pad_4BC[0x1c]; // 0x4bc(0x1c)
	struct UCreativeClassItemInfo* SelectedClassItemInfo; // 0x4d8(0x08)

	void OnTimerCountdown(int32_t RemainingTime); // Function CRD_ClassSelectorUI.CreativeClassSelector.OnTimerCountdown // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnLoadoutCommitted(struct FText& NewClassName, struct FText& NewTeamName, bool bNewLoadout); // Function CRD_ClassSelectorUI.CreativeClassSelector.OnLoadoutCommitted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnClassSelectorUIPopulated(bool bHasValidData); // Function CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectorUIPopulated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnClassSelectionChanged(struct FText& NewClassName, struct FText& NewClassDescription); // Function CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectionChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HandleMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function CRD_ClassSelectorUI.CreativeClassSelector.HandleMinigameStateChanged // (Final|Native|Protected) // @ game+0x67fb140
	struct UWidget* GetFirstLoadoutItem(); // Function CRD_ClassSelectorUI.CreativeClassSelector.GetFirstLoadoutItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67fb104
};

// Class CRD_ClassSelectorUI.CreativeClassSelectorMapTab
// Size: 0x410 (Inherited: 0x3a8)
struct UCreativeClassSelectorMapTab : UCommonActivatableWidget {
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x3b8(0x50)
	struct UCreativeClassSelector* CreativeClassSelector; // 0x408(0x08)

	void SetTabName(struct FText& TabName); // Function CRD_ClassSelectorUI.CreativeClassSelectorMapTab.SetTabName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67fb2c4
	void OnTabAdded(); // Function CRD_ClassSelectorUI.CreativeClassSelectorMapTab.OnTabAdded // (Event|Public|BlueprintEvent) // @ game+0xdef49c
};

// Class CRD_ClassSelectorUI.Mutator_ClassSelectorUI
// Size: 0x330 (Inherited: 0x330)
struct AMutator_ClassSelectorUI : AFortAthenaMutator {
};

