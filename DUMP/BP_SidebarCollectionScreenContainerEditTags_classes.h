// WidgetBlueprintGeneratedClass BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C
// Size: 0x5e8 (Inherited: 0x558)
struct UBP_SidebarCollectionScreenContainerEditTags_C : UFortSidebarCollectionScreenContainerEditTags {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UHorizontalBox* HBox_Tabs; // 0x560(0x08)
	struct UImage* Image_Background; // 0x568(0x08)
	struct UImage* Image_Background_Bottom; // 0x570(0x08)
	struct UImage* Image_Background_Tabs; // 0x578(0x08)
	struct UImage* Image_Background_Top; // 0x580(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x588(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x590(0x08)
	struct UCommonRichTextBlock* RichText_Description; // 0x598(0x08)
	struct UCommonRichTextBlock* RichText_Header; // 0x5a0(0x08)
	struct USafeZone* SafeZone_ButtonsList; // 0x5a8(0x08)
	struct USafeZone* SafeZone_MobileCloseButton; // 0x5b0(0x08)
	struct USafeZone* SafeZone_Profile; // 0x5b8(0x08)
	struct USafeZone* SafeZone_Tabs; // 0x5c0(0x08)
	struct USafeZone* SafeZone_Title; // 0x5c8(0x08)
	struct USpacer* Spacer_Mobile; // 0x5d0(0x08)
	struct USidebarCollectionInputTextButton_C* TagsInfoButton; // 0x5d8(0x08)
	struct USimpleCommonButton_C* TagsInfoInputBlocker; // 0x5e0(0x08)

	void BP_OnShowTabsSet(bool bShowTabs); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.BP_OnShowTabsSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnWhatAreTagsDeactivated(); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.BP_OnWhatAreTagsDeactivated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnWhatAreTagsActivated(); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.BP_OnWhatAreTagsActivated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleTagsInfoTooltip(); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.ToggleTagsInfoTooltip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnCollectionTabTitleChange(enum class ESocialTagCategory& TagCategory); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.BP_OnCollectionTabTitleChange // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags(int32_t EntryPoint); // Function BP_SidebarCollectionScreenContainerEditTags.BP_SidebarCollectionScreenContainerEditTags_C.ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

