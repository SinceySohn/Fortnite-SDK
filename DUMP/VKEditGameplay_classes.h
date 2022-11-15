// Class VKEditGameplay.VKEditPlayspace
// Size: 0x6f0 (Inherited: 0x620)
struct AVKEditPlayspace : AFortPlayspace {
	char pad_620[0x20]; // 0x620(0x20)
	struct TSoftClassPtr<UObject> EditorOnlyMinigameSettingsMachineClassToSpawn; // 0x640(0x28)
	struct TSoftClassPtr<UObject> EditorOnlyWorldManagerClassToSpawn; // 0x668(0x28)
	struct UFortLevelStreamComponent* LevelStreamComponent; // 0x690(0x08)
	struct UFortProjectEditComponent* ProjectEditComponent; // 0x698(0x08)
	struct UPlayspaceComponent_PlayStopPauseManager* PlayStopPauseManager; // 0x6a0(0x08)
	struct UPlayspaceComponent_EditConnectionManager* EditConnectionManager; // 0x6a8(0x08)
	struct UPlayspaceComponent_LiveEdit* LiveEditComponent; // 0x6b0(0x08)
	struct UPlayspaceComponent_CreativeToolsPermission* CreativeToolsPermission; // 0x6b8(0x08)
	struct UPlayspaceComponent_CreativeLoadingStateProxy* CreativeLoadingStateProxy; // 0x6c0(0x08)
	struct UPlayspaceComponent_SpatialGameplay* SpatialGameplayComponent; // 0x6c8(0x08)
	struct UFortVolumeObjectTrackingComponent* ObjectTrackingComponent; // 0x6d0(0x08)
	struct UPlayspaceComponent_DeviceTracking* DeviceTrackerComponent; // 0x6d8(0x08)
	struct UPlayspaceComponent_CreativeInventory* CreativeInventoryComponent; // 0x6e0(0x08)
	struct UPlayspaceComponent_BudgetTracker* BudgetTrackerComponent; // 0x6e8(0x08)

	void OnClientActivatedContent(struct FUniqueNetIdRepl& ClientNetId); // Function VKEditGameplay.VKEditPlayspace.OnClientActivatedContent // (Final|Native|Private|HasOutParms|Const) // @ game+0x6b963c0
};

// Class VKEditGameplay.PlayspaceComponent_EditConnectionManager
// Size: 0x180 (Inherited: 0xf8)
struct UPlayspaceComponent_EditConnectionManager : UFortPlayspaceComponent {
	char pad_F8[0x60]; // 0xf8(0x60)
	int32_t EditConnections; // 0x158(0x04)
	enum class EVkEditStatus VkEditStatus; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FGameplayTagContainer UITagsToHide; // 0x160(0x20)

	void OnRep_VkEditStatus(); // Function VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus // (Final|Native|Protected|Const) // @ game+0x6b964a4
	void OnRep_EditConnections(); // Function VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections // (Final|Native|Protected|Const) // @ game+0x6b96490
};

