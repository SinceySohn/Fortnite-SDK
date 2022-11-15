// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
// Size: 0x1490 (Inherited: 0x1440)
struct UBP_BannerEditorTile_C : UFortPlayerProfileBannerEditorTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UImage* ColorImage; // 0x1448(0x08)
	struct UCommonWidgetSwitcherLegacy* ; // 0x1450(0x08)
	struct UImage* IconImage; // 0x1458(0x08)
	struct UCommonLoadGuard* IconLoadGuard; // 0x1460(0x08)
	struct UImage* Image_BannerEditBorder; // 0x1468(0x08)
	struct UNormalBangWrapper_C* NormalBangWrapper; // 0x1470(0x08)
	struct UMaterialInstanceDynamic* ColorMID; // 0x1478(0x08)
	struct FMulticastInlineDelegate BannerTileBangUpdated; // 0x1480(0x10)

	void Mark Item As Seen(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Bang State(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleBannerIconLoadGuardFinished(struct UObject* Object); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_BannerEditorTile(int32_t EntryPoint); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void BannerTileBangUpdated__DelegateSignature(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

