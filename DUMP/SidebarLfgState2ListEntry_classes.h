// WidgetBlueprintGeneratedClass SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C
// Size: 0x1498 (Inherited: 0x1460)
struct USidebarLfgState2ListEntry_C : UFortSidebarLfgState2ListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1460(0x08)
	struct UWidgetAnimation* Selected; // 0x1468(0x08)
	struct UWidgetAnimation* Hovered; // 0x1470(0x08)
	struct UOverlay* ButtonContainer; // 0x1478(0x08)
	struct UBorder* EntryBorder; // 0x1480(0x08)
	struct USidebarLfgState_Image_C* SidebarLfgState_Image; // 0x1488(0x08)
	struct USidebarLfgState_RichText_C* SidebarLfgState_RichText; // 0x1490(0x08)

	void UpdateButtonVisibility(enum class ELfgState LfgState); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.UpdateButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetIcon(enum class ELfgState LfgState); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.GetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStateChanged(enum class ELfgState NewLfgState, enum class ESlateVisibility BodyVisibility, struct FText& StateText, struct FText& StateButton); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.OnStateChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarLfgState2ListEntry(int32_t EntryPoint); // Function SidebarLfgState2ListEntry.SidebarLfgState2ListEntry_C.ExecuteUbergraph_SidebarLfgState2ListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

