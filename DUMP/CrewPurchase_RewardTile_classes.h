// WidgetBlueprintGeneratedClass CrewPurchase_RewardTile.CrewPurchase_RewardTile_C
// Size: 0x1490 (Inherited: 0x1440)
struct UCrewPurchase_RewardTile_C : UCrewRewardTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* HoverScale; // 0x1448(0x08)
	struct UWidgetAnimation* Hover; // 0x1450(0x08)
	struct UImage* Image_Calendar; // 0x1458(0x08)
	struct UImage* Image_Check; // 0x1460(0x08)
	struct UImage* Image_EdgeSlant; // 0x1468(0x08)
	struct UImage* Image_Frame; // 0x1470(0x08)
	struct UImage* Image_Pulse; // 0x1478(0x08)
	struct UImage* Image_Shadow; // 0x1480(0x08)
	struct UWidgetSwitcher* Switcher_OwnIcon; // 0x1488(0x08)

	void Construct(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateOwnedState(bool bOwned); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnUpdateOwnedState // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStartingDownloadTileImage(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnStartingDownloadTileImage // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDownloadTileImageComplete(struct UTexture2D* Texture); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.OnDownloadTileImageComplete // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CrewPurchase_RewardTile(int32_t EntryPoint); // Function CrewPurchase_RewardTile.CrewPurchase_RewardTile_C.ExecuteUbergraph_CrewPurchase_RewardTile // (Final|UbergraphFunction) // @ game+0xdef49c
};

