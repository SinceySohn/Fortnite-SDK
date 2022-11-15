// WidgetBlueprintGeneratedClass SidebarButton.SidebarButton_C
// Size: 0x1529 (Inherited: 0x1500)
struct USidebarButton_C : UFortSocialSidebarButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1500(0x08)
	struct UWidgetAnimation* Unselected; // 0x1508(0x08)
	struct UWidgetAnimation* Hovered; // 0x1510(0x08)
	struct UWidgetAnimation* Selected; // 0x1518(0x08)
	struct USizeBox* ; // 0x1520(0x08)
	bool Condition; // 0x1528(0x01)

	void SetSkewBoxColor(struct FLinearColor InputPin); // Function SidebarButton.SidebarButton_C.SetSkewBoxColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SidebarButton.SidebarButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SidebarButton.SidebarButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function SidebarButton.SidebarButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function SidebarButton.SidebarButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function SidebarButton.SidebarButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SidebarButton.SidebarButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarButton(int32_t EntryPoint); // Function SidebarButton.SidebarButton_C.ExecuteUbergraph_SidebarButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

