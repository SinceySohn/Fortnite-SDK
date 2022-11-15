// Class CraftingUI.FortCraftingListItem
// Size: 0xf8 (Inherited: 0x28)
struct UFortCraftingListItem : UObject {
	char pad_28[0xd0]; // 0x28(0xd0)
};

// Class CraftingUI.AthenaCraftingQuickBarButton
// Size: 0x1410 (Inherited: 0x13f0)
struct UAthenaCraftingQuickBarButton : UAthenaQuickBarSlotButtonBase {
	char pad_13F0[0x20]; // 0x13f0(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaCraftingQuickBarButton.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaCraftingQuickBarButton.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CraftingUI.AthenaEquippedItemCraftingIndicator
// Size: 0x2b0 (Inherited: 0x290)
struct UAthenaEquippedItemCraftingIndicator : UCommonUserWidget {
	char pad_290[0x20]; // 0x290(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.HandleWeaponEquipped // (Final|Native|Private) // @ game+0x67dcf90
};

// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
// Size: 0x2b0 (Inherited: 0x290)
struct UAthenaInventoryItemInfoCraftingIndicator : UCommonUserWidget {
	char pad_290[0x20]; // 0x290(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleInventoryItemSelected(struct UFortItem* SelectedItem); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected // (Final|Native|Private) // @ game+0x67dce90
};

// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
// Size: 0x2c8 (Inherited: 0x298)
struct UAthenaQuickBarSlotCraftingIndicator : UAthenaQuickBarSlotExtensionWidgetBase {
	char pad_298[0x20]; // 0x298(0x20)
	bool bCheckForIngredientChangesWhenCraftable; // 0x2b8(0x01)
	char pad_2B9[0xf]; // 0x2b9(0x0f)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnIngredientChanged(bool bCanCraftNow); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIngredientChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.HandleWeaponEquipped // (Final|Native|Private) // @ game+0x67dd054
};

// Class CraftingUI.FortCookingScreen
// Size: 0x3f8 (Inherited: 0x3a8)
struct UFortCookingScreen : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FDataTableRowHandle CloseInputAction; // 0x3b0(0x10)
	char pad_3C0[0x8]; // 0x3c0(0x08)
	struct UCommonButtonLegacy* Button_EjectAll; // 0x3c8(0x08)
	struct UCommonButtonLegacy* Button_Cancel; // 0x3d0(0x08)
	struct UCommonTextBlock* Text_RecipeName; // 0x3d8(0x08)
	struct UCommonTextBlock* Text_RecipeDescription; // 0x3e0(0x08)
	struct UImage* Image_Recipe; // 0x3e8(0x08)
	struct UFortSlottedRadialMenu* RadialMenu_Recipes; // 0x3f0(0x08)
};

// Class CraftingUI.FortCraftingFormulaIngredientsWidget
// Size: 0x298 (Inherited: 0x290)
struct UFortCraftingFormulaIngredientsWidget : UCommonUserWidget {
	struct UDynamicEntryBox* EntryBox_Ingredients; // 0x290(0x08)
};

// Class CraftingUI.FortCraftingIngredientWidget
// Size: 0x2b8 (Inherited: 0x290)
struct UFortCraftingIngredientWidget : UCommonUserWidget {
	char pad_290[0x8]; // 0x290(0x08)
	struct UCommonTextBlock* Text_NumAvailable; // 0x298(0x08)
	struct UCommonTextBlock* Text_NumRequired; // 0x2a0(0x08)
	struct UAthenaItemIcon* ItemIcon; // 0x2a8(0x08)
	struct UCommonLazyImage* LazyImage_Icon; // 0x2b0(0x08)

	void OnIngredientWidgetUpdated(int32_t NumAvailable, int32_t NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient); // Function CraftingUI.FortCraftingIngredientWidget.OnIngredientWidgetUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CraftingUI.FortCraftingItemInfoWidget
// Size: 0x410 (Inherited: 0x3a8)
struct UFortCraftingItemInfoWidget : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FText RarityTextFormat; // 0x3b0(0x18)
	struct UCommonTextBlock* Text_ItemName; // 0x3c8(0x08)
	struct UCommonTextBlock* Text_ItemRarity; // 0x3d0(0x08)
	struct UCommonTextBlock* Text_ItemCategory; // 0x3d8(0x08)
	struct UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x3e0(0x08)
	struct UCommonTextBlock* Text_ItemDescription; // 0x3e8(0x08)
	struct UAthenaInventoryItemStatsWidget* ItemStatsWidget; // 0x3f0(0x08)
	struct UFortCraftingFormulaIngredientsWidget* IngredientsWidget; // 0x3f8(0x08)
	struct UCommonButtonLegacy* Button_StartCrafting; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)

	void OnItemRaritySet(enum class EFortRarity Rarity, struct FFortRarityItemData RarityItemData); // Function CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CraftingUI.FortCraftingListEntry
// Size: 0x1450 (Inherited: 0x1430)
struct UFortCraftingListEntry : UCommonButtonLegacy {
	char pad_1430[0x8]; // 0x1430(0x08)
	struct UAthenaItemIcon* ItemIcon; // 0x1438(0x08)
	bool bCanCraftItem; // 0x1440(0x01)
	char pad_1441[0xf]; // 0x1441(0x0f)

	void OnCraftingListItemSet(); // Function CraftingUI.FortCraftingListEntry.OnCraftingListItemSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class CraftingUI.FortCraftingTab
// Size: 0x4e0 (Inherited: 0x3a8)
struct UFortCraftingTab : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FName TabNameID; // 0x3b0(0x04)
	char pad_3B4[0xc]; // 0x3b4(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x3c0(0xe0)
	struct FGameplayTagContainer PrimaryIngredientTags; // 0x4a0(0x20)
	struct UFortCraftingItemInfoWidget* CraftingItemInfo; // 0x4c0(0x08)
	struct UCommonListView* ListView_Recipes; // 0x4c8(0x08)
	struct UAthenaQuickbarEditorBase* QuickbarEditor; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void OnFormulaListUpdated(int32_t NumFormulas); // Function CraftingUI.FortCraftingTab.OnFormulaListUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleInventoryItemSelected(struct UFortItem* Item); // Function CraftingUI.FortCraftingTab.HandleInventoryItemSelected // (Final|Native|Private) // @ game+0x67dcf10
};

// Class CraftingUI.FortPotContentsPopup
// Size: 0x290 (Inherited: 0x268)
struct UFortPotContentsPopup : UUserWidget {
	int32_t MaxItemsToShow; // 0x268(0x04)
	char pad_26C[0xc]; // 0x26c(0x0c)
	struct UCommonTileView* TileView_PotContents; // 0x278(0x08)
	struct UCommonTextBlock* Text_MoreItems; // 0x280(0x08)
	struct UWidget* Overlay_Popup; // 0x288(0x08)

	void SetOwningCraftingObject(struct ACraftingObjectBGA* InCraftingObject); // Function CraftingUI.FortPotContentsPopup.SetOwningCraftingObject // (Final|Native|Public|BlueprintCallable) // @ game+0x67dd110
};

// Class CraftingUI.FortPotContentsTile
// Size: 0x1440 (Inherited: 0x1430)
struct UFortPotContentsTile : UCommonButtonLegacy {
	char pad_1430[0x8]; // 0x1430(0x08)
	struct UCommonLazyImage* Image_Item; // 0x1438(0x08)
};

// Class CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
// Size: 0x60 (Inherited: 0x28)
struct UFortUIGameFeatureAction_SetCraftMenuWidget : UFortUIGameFeatureAction {
	struct ACraftingObjectBGA* CraftingObject; // 0x28(0x08)
	struct TSoftClassPtr<UObject> CraftingMenuWidget; // 0x30(0x28)
	char pad_58[0x8]; // 0x58(0x08)
};

