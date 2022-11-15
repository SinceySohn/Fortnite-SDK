// WidgetBlueprintGeneratedClass VictoryCrownHUDResource.VictoryCrownHUDResource_C
// Size: 0x324 (Inherited: 0x2d0)
struct UVictoryCrownHUDResource_C : UFortHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* Anim_ShowCrown; // 0x2d8(0x08)
	struct UImage* burst; // 0x2e0(0x08)
	struct UOverlay* ; // 0x2e8(0x08)
	struct UOverlay* OverlayFX; // 0x2f0(0x08)
	struct UImage* RedGlow; // 0x2f8(0x08)
	struct UImage* SmallTriangles_Left; // 0x300(0x08)
	struct FText VictoryCrownsTotalText; // 0x308(0x18)
	int32_t TotalVictoryRoyales; // 0x320(0x04)

	void Construct(); // Function VictoryCrownHUDResource.VictoryCrownHUDResource_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnVictoryCrownStatusChanged(struct AFortPlayerControllerAthena* FortPlayerControllerAthena, struct UFortItem* CrownItem); // Function VictoryCrownHUDResource.VictoryCrownHUDResource_C.OnVictoryCrownStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function VictoryCrownHUDResource.VictoryCrownHUDResource_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_VictoryCrownHUDResource(int32_t EntryPoint); // Function VictoryCrownHUDResource.VictoryCrownHUDResource_C.ExecuteUbergraph_VictoryCrownHUDResource // (Final|UbergraphFunction) // @ game+0xdef49c
};

