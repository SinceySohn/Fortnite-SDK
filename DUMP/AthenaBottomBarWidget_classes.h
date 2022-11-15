// WidgetBlueprintGeneratedClass AthenaBottomBarWidget.AthenaBottomBarWidget_C
// Size: 0x2b1 (Inherited: 0x290)
struct UAthenaBottomBarWidget_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UBorder* BorderShell; // 0x298(0x08)
	struct UCommonBoundActionBar* ; // 0x2a0(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x2a8(0x08)
	bool Display Owner Actions Only; // 0x2b0(0x01)

	void Construct(); // Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaBottomBarWidget(int32_t EntryPoint); // Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.ExecuteUbergraph_AthenaBottomBarWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

