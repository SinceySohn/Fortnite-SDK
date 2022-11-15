// WidgetBlueprintGeneratedClass SidebarLfgState2Widget.SidebarLfgState2Widget_C
// Size: 0x3f8 (Inherited: 0x3d0)
struct USidebarLfgState2Widget_C : UFortSidebarLfgState2Widget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USidebarLfgState_Image_C* SidebarLfgState_Image; // 0x3d8(0x08)
	struct USidebarLfgState_RichText_C* SidebarLfgState_RichText; // 0x3e0(0x08)
	struct TArray<struct UTexture2D*> LfgStateTextureArray; // 0x3e8(0x10)

	void UpdateButtonVisibility(enum class ELfgState LfgState); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.UpdateButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetIcon(enum class ELfgState LfgState, enum class ESlateVisibility Icon Visiblity); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.GetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStateChanged(enum class ELfgState NewLfgState, enum class ESlateVisibility BodyVisibility, struct FText& StateText, struct FText& StateButton); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.OnStateChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarLfgState2Widget(int32_t EntryPoint); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.ExecuteUbergraph_SidebarLfgState2Widget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

