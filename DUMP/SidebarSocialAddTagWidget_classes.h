// WidgetBlueprintGeneratedClass SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C
// Size: 0x15d0 (Inherited: 0x13e0)
struct USidebarSocialAddTagWidget_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UWidgetAnimation* Hovered; // 0x13e8(0x08)
	struct UBorder* Border_AddTagBorder; // 0x13f0(0x08)
	struct USidebarSocialAddingTagWidget_C* SidebarSocialAddingTagWidget; // 0x13f8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Tag; // 0x1400(0x08)
	struct UCommonTextBlock* Text_AddTagName; // 0x1408(0x08)
	struct FTimerHandle StateChangeLerpTimerHandle; // 0x1410(0x08)
	double StateChangeLerpAlpha; // 0x1418(0x08)
	double StateChangeLerpTimeStep; // 0x1420(0x08)
	struct FLinearColor TagContentColorWhite; // 0x1428(0x10)
	struct FLinearColor TagContentColorBlack; // 0x1438(0x10)
	double EnabledTagOpacity; // 0x1448(0x08)
	double DisabledTagOpacity; // 0x1450(0x08)
	struct FName Name_InnerColor; // 0x1458(0x04)
	struct FName Name_OuterColor; // 0x145c(0x04)
	struct FName Name_TagOpacity; // 0x1460(0x04)
	char pad_1464[0x4]; // 0x1464(0x04)
	struct FString TagCategory_AddTag; // 0x1468(0x10)
	struct FString TagCategory_Disabled; // 0x1478(0x10)
	struct FLinearColor CurrentInnerColorReference; // 0x1488(0x10)
	struct FLinearColor CurrentOuterColorReference; // 0x1498(0x10)
	struct FLinearColor TargetInnerColorReference; // 0x14a8(0x10)
	struct FLinearColor TargetOuterColorReference; // 0x14b8(0x10)
	struct FLinearColor CurrentTagContentColorReference; // 0x14c8(0x10)
	struct FLinearColor TargetTagContentColorReference; // 0x14d8(0x10)
	struct FSidebarSocialTagCategoryStructure TagCategoryStructureReference; // 0x14e8(0x70)
	struct FSidebarSocialTagCategoryStructure DisabledTagCategoryStructureReference; // 0x1558(0x70)
	struct UMaterialInstanceDynamic* TagBorderMaterialReference; // 0x15c8(0x08)

	void GetCurrentTagBorderColors(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.GetCurrentTagBorderColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FunctionOnUnhovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionOnUnhovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FunctionOnHovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionOnHovered // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FunctionSetCategoryCustomizationVisibility(enum class ESlateVisibility CategoryCustomizationVisibility); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.FunctionSetCategoryCustomizationVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventSetTag(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.EventSetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void InterpolateTagColors(); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.InterpolateTagColors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarSocialAddTagWidget(int32_t EntryPoint); // Function SidebarSocialAddTagWidget.SidebarSocialAddTagWidget_C.ExecuteUbergraph_SidebarSocialAddTagWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

