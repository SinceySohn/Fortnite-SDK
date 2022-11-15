// Class VKEditUI.VKConnectionIndicator
// Size: 0x4b0 (Inherited: 0x3a8)
struct UVKConnectionIndicator : UCommonActivatableWidget {
	bool bHasActiveConnection; // 0x3a8(0x01)
	enum class EVkEditStatus VkEditStatus; // 0x3a9(0x01)
	char pad_3AA[0x6]; // 0x3aa(0x06)
	struct TMap<enum class EVkEditStatus, struct FText> EditStatusLocalizedText; // 0x3b0(0x50)
	struct UWidgetSwitcher* ConnectedSwitcher; // 0x400(0x08)
	struct UImage* IndicatorImageNotConnected; // 0x408(0x08)
	struct UImage* IndicatorImageConnected; // 0x410(0x08)
	struct UOverlay* IndicatorPreparing; // 0x418(0x08)
	struct UImage* IndicatorImageDownloading; // 0x420(0x08)
	struct UImage* IndicatorImageStarting; // 0x428(0x08)
	struct UImage* IndicatorImageUpToDate; // 0x430(0x08)
	struct UImage* IndicatorImageRefreshRequired; // 0x438(0x08)
	struct UImage* IndicatorImageError; // 0x440(0x08)
	struct UWidget* MessageContainer; // 0x448(0x08)
	struct UCommonTextBlock* MessageText; // 0x450(0x08)
	struct UWidgetSwitcher* AdditionalInfoSwitcher; // 0x458(0x08)
	struct UWidget* DownloadContainer; // 0x460(0x08)
	struct UFortSimpleMaterialProgressBar* DownloadProgressBar; // 0x468(0x08)
	struct UCommonTextBlock* DownloadProgressText; // 0x470(0x08)
	struct UWidget* OpenLogContainer; // 0x478(0x08)
	struct UCommonActionWidget* OpenLogActionWidget; // 0x480(0x08)
	struct FDataTableRowHandle OpenLogInputAction; // 0x488(0x10)
	struct UWidget* SquadListContainer; // 0x498(0x08)
	struct UAthenaSquadListBase* AthenaSquadList; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)
};

// Class VKEditUI.VKDebugMessagesBase
// Size: 0x2d0 (Inherited: 0x2d0)
struct UVKDebugMessagesBase : UFortHUDElementWidget {

	void HandleGameStateInitialized(struct AFortGameState* GameState); // Function VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized // (Final|Native|Protected) // @ game+0x6b947e0
	void BP_OnGameStateInitialized(struct AFortGameState* GameState); // Function VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

// Class VKEditUI.VkEditDynamicUIDirector
// Size: 0x2a8 (Inherited: 0x2a8)
struct AVkEditDynamicUIDirector : ADynamicUIDirectorBase {
};

// Class VKEditUI.VkEditLogTab
// Size: 0x490 (Inherited: 0x3a8)
struct UVkEditLogTab : UCommonActivatableWidget {
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x3b0(0xe0)
};

