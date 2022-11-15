// WidgetBlueprintGeneratedClass ItemPresentationEntry.ItemPresentationEntry_C
// Size: 0x153a (Inherited: 0x1510)
struct UItemPresentationEntry_C : UFortItemPresentationEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1510(0x08)
	struct UWidgetAnimation* Selected; // 0x1518(0x08)
	struct UWidgetAnimation* Intro; // 0x1520(0x08)
	struct UWidgetAnimation* Hovered; // 0x1528(0x08)
	struct UOverlay* Overlay_Content; // 0x1530(0x08)
	bool bIsSelected; // 0x1538(0x01)
	bool bCanHover; // 0x1539(0x01)

	void PlayIntro(double TimeBeforeStart); // Function ItemPresentationEntry.ItemPresentationEntry_C.PlayIntro // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandelDeselectedAnim(); // Function ItemPresentationEntry.ItemPresentationEntry_C.HandelDeselectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSelectedAnim(); // Function ItemPresentationEntry.ItemPresentationEntry_C.HandleSelectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleUnhover(); // Function ItemPresentationEntry.ItemPresentationEntry_C.HandleUnhover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleHover(); // Function ItemPresentationEntry.ItemPresentationEntry_C.HandleHover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DelayIntroAnimation(); // Function ItemPresentationEntry.ItemPresentationEntry_C.DelayIntroAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ItemPresentationEntry.ItemPresentationEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ItemPresentationEntry.ItemPresentationEntry_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ItemPresentationEntry(int32_t EntryPoint); // Function ItemPresentationEntry.ItemPresentationEntry_C.ExecuteUbergraph_ItemPresentationEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

