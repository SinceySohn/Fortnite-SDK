// WidgetBlueprintGeneratedClass AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C
// Size: 0x311 (Inherited: 0x2b0)
struct UAthenaLocker_ItemInfo_C : UAthenaLockerItemInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UWidgetAnimation* PulseAnim; // 0x2b8(0x08)
	struct UBorder* Border_ItemRarity; // 0x2c0(0x08)
	struct UBorder* Border_ItemType; // 0x2c8(0x08)
	struct UBorder* Border_RarityTint; // 0x2d0(0x08)
	struct UHorizontalBox* ExclusiveCalloutBox; // 0x2d8(0x08)
	struct UCommonRichTextBlock* ExclusiveCalloutText; // 0x2e0(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x2e8(0x08)
	struct UImage* ; // 0x2f0(0x08)
	struct UOverlay* OverrideDescriptionVisibility; // 0x2f8(0x08)
	struct UOverlay* OverrideWarningVisibility; // 0x300(0x08)
	struct UVerticalBox* ; // 0x308(0x08)
	bool ShowDescription; // 0x310(0x01)

	void UpdateRarityWidgets(struct FFortColorPalette InColor, enum class EFortRarity InRarity, struct UFortItemSeriesDefinition* InSeries, bool HideRarity); // Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.UpdateRarityWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnItemDefinitionSet(struct UFortItemDefinition* ItemDefinition); // Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.OnItemDefinitionSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnNoItemSet(); // Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.OnNoItemSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateAccessRestrictionWarning(bool bShouldShow, struct FText& WarningText, enum class EAthenaLockerInfoRestrictionWarning WarningType); // Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.OnUpdateAccessRestrictionWarning // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaLocker_ItemInfo(int32_t EntryPoint); // Function AthenaLocker_ItemInfo.AthenaLocker_ItemInfo_C.ExecuteUbergraph_AthenaLocker_ItemInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

