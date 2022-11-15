// WidgetBlueprintGeneratedClass SidebarSocialTagWidget.SidebarSocialTagWidget_C
// Size: 0x167c (Inherited: 0x1440)
struct USidebarSocialTagWidget_C : USocialTagWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* StateChange; // 0x1448(0x08)
	struct UBorder* Border_TagBorder; // 0x1450(0x08)
	struct UBP_SidebarCollectionScreenContainerTabButtonEditTags_C* BP_SidebarCollectionScreenContainerTabButtonEditTags; // 0x1458(0x08)
	struct UGridPanel* GridPanel_TagWidget; // 0x1460(0x08)
	struct UScaleBox* ScaleBox_TagCategoryIcon; // 0x1468(0x08)
	struct USidebarSocialAddingTagWidget_C* SidebarSocialAddingTagWidget; // 0x1470(0x08)
	struct USpacer* Spacer_TagCategoryIcon; // 0x1478(0x08)
	struct UCommonVisibilitySwitcher* Switcher_SelectedState; // 0x1480(0x08)
	struct UCommonTextBlock* Text_TagName; // 0x1488(0x08)
	struct FName Name_InnerColor; // 0x1490(0x04)
	struct FName Name_OuterColor; // 0x1494(0x04)
	struct FName Name_TagOpacity; // 0x1498(0x04)
	char pad_149C[0x4]; // 0x149c(0x04)
	struct FString TagCategory_Disabled; // 0x14a0(0x10)
	struct FTimerHandle StateChangeLerpTimerHandle; // 0x14b0(0x08)
	double StateChangeLerpAlpha; // 0x14b8(0x08)
	struct FSidebarSocialTagCategoryStructure TagCategoryStructureReference; // 0x14c0(0x70)
	struct FSidebarSocialTagCategoryStructure DisabledTagCategoryStructureReference; // 0x1530(0x70)
	double StateChangeLerpTimeStep; // 0x15a0(0x08)
	struct UMaterialInstanceDynamic* TagBorderMaterialReference; // 0x15a8(0x08)
	struct FLinearColor CurrentInnerColorReference; // 0x15b0(0x10)
	struct FLinearColor CurrentOuterColorReference; // 0x15c0(0x10)
	struct FLinearColor TargetInnerColorReference; // 0x15d0(0x10)
	struct FLinearColor TargetOuterColorReference; // 0x15e0(0x10)
	struct FLinearColor TagContentColorWhite; // 0x15f0(0x10)
	struct FLinearColor TagContentColorWhiteDisabled; // 0x1600(0x10)
	struct FLinearColor TagContentColorBlack; // 0x1610(0x10)
	struct FLinearColor CurrentTagContentColorReference; // 0x1620(0x10)
	struct FLinearColor TargetTagContentColorReference; // 0x1630(0x10)
	struct FLinearColor TagContentColorBlackDisabled; // 0x1640(0x10)
	double EnabledTagOpacity; // 0x1650(0x08)
	double DisabledTagOpacity; // 0x1658(0x08)
	bool Highlighted; // 0x1660(0x01)
	char pad_1661[0x7]; // 0x1661(0x07)
	struct UMaterialInstanceDynamic* TagCategoryIconMaterialReference; // 0x1668(0x08)
	struct FName Name_GradientStartColor; // 0x1670(0x04)
	struct FName Name_GradientEndColor; // 0x1674(0x04)
	struct FName Name_IconColor; // 0x1678(0x04)

	void SetUnhoverState(bool bPlayAnimation); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetUnhoverState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FunctionSetTagBorderColors(struct FLinearColor InnerColor, struct FLinearColor OuterColor); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTagListEntryUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTagListEntryHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetCurrentTagBorderColors(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.GetCurrentTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FunctionOnUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FunctionOnHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FunctionSetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetCategoryCustomizationVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FunctionSetTag(struct FText InTagName, enum class ESocialTagCategory InTagCategory, bool InIsSystemTag); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetCategoryCustomizationVisibility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetTag(struct FText& InTagName, enum class ESocialTagCategory InTagCategory, bool bInIsSystemTag); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetTag // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void InterpolateTagColors(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.InterpolateTagColors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetHighlightState(bool bHighlighted); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetHighlightState // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetFullColor(); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetFullColor // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarSocialTagWidget(int32_t EntryPoint); // Function SidebarSocialTagWidget.SidebarSocialTagWidget_C.ExecuteUbergraph_SidebarSocialTagWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

