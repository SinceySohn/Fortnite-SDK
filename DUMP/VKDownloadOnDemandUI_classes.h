// Class VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
// Size: 0x308 (Inherited: 0x268)
struct UDownloadOnDemandProjectManagementTab : UUserWidget {
	char pad_268[0x30]; // 0x268(0x30)
	struct UDownloadOnDemandProject* Project; // 0x298(0x08)
	char pad_2A0[0x10]; // 0x2a0(0x10)
	struct UCommonTextBlock* TextBlock_ProjectTitle; // 0x2b0(0x08)
	struct UCommonTextBlock* TextBlock_LinkCode; // 0x2b8(0x08)
	struct UCommonTextBlock* TextBlock_VersionNumber; // 0x2c0(0x08)
	struct UCommonTextBlock* TextBlock_LatestVersionNumber; // 0x2c8(0x08)
	struct UImage* Image_LatestVersionSpinner; // 0x2d0(0x08)
	struct UCommonTextBlock* TextBlock_Description; // 0x2d8(0x08)
	struct UCommonButtonLegacy* Button_RemoveProject; // 0x2e0(0x08)
	struct UCommonButtonLegacy* Button_UpdateProject; // 0x2e8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Props; // 0x2f0(0x08)
	struct UCommonTileView* CommonTileView_ProjectAssetTiles; // 0x2f8(0x08)
	struct UCommonTextBlock* TextBlock_NoPropsMessage; // 0x300(0x08)

	void UpdateProjectConfirmed(); // Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.UpdateProjectConfirmed // (Final|Native|Protected|BlueprintCallable) // @ game+0x6b88ea8
	void RemoveProjectConfirmed(); // Function VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab.RemoveProjectConfirmed // (Final|Native|Protected|BlueprintCallable) // @ game+0x6b88e04
};

// Class VKDownloadOnDemandUI.DownloadOnDemandTabPanel
// Size: 0x498 (Inherited: 0x3f0)
struct UDownloadOnDemandTabPanel : UFortCreativeContentBrowserTabPanelBase {
	struct FDataTableRowHandle AddProjectWithLinkCodeInputRowHandle; // 0x3f0(0x10)
	struct FDataTableRowHandle AddSelectedProjectInputRowHandle; // 0x400(0x10)
	struct FDataTableRowHandle ManageSelectedProjectInputRowHandle; // 0x410(0x10)
	struct UDownloadOnDemandProjectDetailsSidePanel* DownloadOnDemandProjectDetailsSidePanelClass; // 0x420(0x08)
	struct UDownloadOnDemandAddProjectModal* DownloadOnDemandAddProjectModalClass; // 0x428(0x08)
	struct UDownloadOnDemandMessageModal* DownloadOnDemandMessageModalClass; // 0x430(0x08)
	struct FString AddProjectsWithMnemonicEntitlementName; // 0x438(0x10)
	struct UDownloadOnDemandProject* SelectedProject; // 0x448(0x08)
	char pad_450[0x10]; // 0x450(0x10)
	struct UOverlay* Overlay_AddProjectParent; // 0x460(0x08)
	struct UCommonTileView* CommonTileView_ProjectTiles; // 0x468(0x08)
	struct UCommonVisibilitySwitcher* Switcher_DownloadOnDemandPanels; // 0x470(0x08)
	struct UCommonButtonLegacy* Button_AddProject; // 0x478(0x08)
	struct UHorizontalBox* HorizontalBox_EntitlementCheckMessage; // 0x480(0x08)
	struct UHorizontalBox* HorizontalBox_EntitlementCheckFailed; // 0x488(0x08)
	struct UDownloadOnDemandProjectManagementTab* ProjectManagementTab; // 0x490(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
// Size: 0x38 (Inherited: 0x28)
struct UDownloadOnDemandTab_EntitlementCreationCondition : UCreativeContentBrowserTab_CreationCondition {
	struct FString EntitlementName; // 0x28(0x10)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
// Size: 0x3f0 (Inherited: 0x3a8)
struct UDownloadOnDemandAddProjectModal : UCommonActivatableWidget {
	struct UDownloadOnDemandProject* Project; // 0x3a8(0x08)
	char pad_3B0[0x10]; // 0x3b0(0x10)
	struct UEditableTextBox* EditableTextBox_DownloadLinkCode; // 0x3c0(0x08)
	struct UCommonButtonLegacy* Button_AddProject; // 0x3c8(0x08)
	struct UCommonButtonLegacy* Button_Cancel; // 0x3d0(0x08)
	struct UDownloadOnDemandProjectTileImage* ProjectTileImage_Preview; // 0x3d8(0x08)
	struct UOverlay* Overlay_ProjectTitle; // 0x3e0(0x08)
	struct UCommonTextBlock* TextBlock_ProjectTitle; // 0x3e8(0x08)

	void UpdateLightningViolator(enum class ESlateVisibility InVisibility, struct FText& InText); // Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.UpdateLightningViolator // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HandleDownloadLinkIdTextChanged(struct FText& InputLinkCode); // Function VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal.HandleDownloadLinkIdTextChanged // (Final|Native|Private|HasOutParms) // @ game+0x6b88d40
};

// Class VKDownloadOnDemandUI.DownloadOnDemandMessageModal
// Size: 0x3c0 (Inherited: 0x3a8)
struct UDownloadOnDemandMessageModal : UCommonActivatableWidget {
	struct UCommonTextBlock* TextBlock_MessageTitle; // 0x3a8(0x08)
	struct UCommonTextBlock* TextBlock_Message; // 0x3b0(0x08)
	struct UCommonButtonLegacy* Button_Close; // 0x3b8(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
// Size: 0x278 (Inherited: 0x268)
struct UDownloadOnDemandProjectDetailsSidePanel : UUserWidget {
	struct UDownloadOnDemandProjectTile* DownloadOnDemandProjectTile_CurrentProjectEntry; // 0x268(0x08)
	struct UCreativeContentBrowserItemInfo* ContentBrowserItemInfo_ItemDetails; // 0x270(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
// Size: 0x278 (Inherited: 0x268)
struct UDownloadOnDemandStatusFeed : UUserWidget {
	bool bOverrideOldStatusWithNewStatus; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UFortDynamicEntryBox* EntryBox_DownloadStatusContainer; // 0x270(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
// Size: 0x270 (Inherited: 0x268)
struct UDownloadOnDemandStatusFeedLine : UUserWidget {
	struct UCommonTextBlock* TextBlock_DownloadStatus; // 0x268(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
// Size: 0x38 (Inherited: 0x28)
struct UDownloadOnDemandProjectAssetTileInitializer : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UFortPlaysetPropItemDefinition* PropItemDefinition; // 0x30(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
// Size: 0x1470 (Inherited: 0x1430)
struct UDownloadOnDemandProjectAssetTile : UCommonButtonLegacy {
	char pad_1430[0x8]; // 0x1430(0x08)
	struct UDownloadOnDemandProjectAssetTileInitializer* Initializer; // 0x1438(0x08)
	char pad_1440[0x10]; // 0x1440(0x10)
	struct UImage* Image_Item; // 0x1450(0x08)
	struct UImage* Image_Spinner; // 0x1458(0x08)
	struct UCommonNumericTextBlock* NumericTextBlock_ItemCount; // 0x1460(0x08)
	char pad_1468[0x8]; // 0x1468(0x08)
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTile
// Size: 0x1620 (Inherited: 0x1430)
struct UDownloadOnDemandProjectTile : UCommonButtonLegacy {
	char pad_1430[0x10]; // 0x1430(0x10)
	struct FSlateBrush SelectedHighlightBrush; // 0x1440(0xc0)
	struct FSlateBrush HoveredHighlightBrush; // 0x1500(0xc0)
	bool bIsSelected; // 0x15c0(0x01)
	char pad_15C1[0x7]; // 0x15c1(0x07)
	struct UDownloadOnDemandProject* Project; // 0x15c8(0x08)
	char pad_15D0[0x10]; // 0x15d0(0x10)
	struct UDownloadOnDemandProjectTileImage* ProjectTileImage_Preview; // 0x15e0(0x08)
	struct UImage* Image_UpdatePending; // 0x15e8(0x08)
	struct UImage* Image_AddProject; // 0x15f0(0x08)
	struct UImage* Image_Spinner; // 0x15f8(0x08)
	struct UImage* Image_Error; // 0x1600(0x08)
	struct USizeBox* SizeBox_Label; // 0x1608(0x08)
	struct UCommonTextBlock* TextBlock_Label; // 0x1610(0x08)
	struct UCommonBorder* Border_Highlight; // 0x1618(0x08)

	void UpdateLabel(bool bShowLabel); // Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.UpdateLabel // (Final|Native|Public|BlueprintCallable) // @ game+0x6b88e28
	void OnLabelUpdated(); // Function VKDownloadOnDemandUI.DownloadOnDemandProjectTile.OnLabelUpdated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
// Size: 0x2a0 (Inherited: 0x268)
struct UDownloadOnDemandProjectTileImage : UUserWidget {
	struct UTexture* EmptyProjectTexture; // 0x268(0x08)
	char bOverrideGrayScale : 1; // 0x270(0x01)
	char pad_270_1 : 7; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float GreyScaleOverride; // 0x274(0x04)
	struct UDownloadOnDemandProject* Project; // 0x278(0x08)
	char pad_280[0x10]; // 0x280(0x10)
	struct UImage* Image_ProjectPreview; // 0x290(0x08)
	struct UImage* Image_LoadingImageSpinner; // 0x298(0x08)
};

