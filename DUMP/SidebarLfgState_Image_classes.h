// WidgetBlueprintGeneratedClass SidebarLfgState_Image.SidebarLfgState_Image_C
// Size: 0x2b8 (Inherited: 0x268)
struct USidebarLfgState_Image_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* LFG_Icon; // 0x270(0x08)
	struct TSoftObjectPtr<UMaterialInterface> LFG_Material; // 0x278(0x28)
	struct FLinearColor LFG_Color; // 0x2a0(0x10)
	struct UMaterialInstanceDynamic* LFG_DynamicMaterial; // 0x2b0(0x08)

	void SetColor(struct FLinearColor InColorAndOpacity); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.SetMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarLfgState_Image(int32_t EntryPoint); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.ExecuteUbergraph_SidebarLfgState_Image // (Final|UbergraphFunction) // @ game+0xdef49c
};

