// WidgetBlueprintGeneratedClass DualBladeMenu.DualBladeMenu_C
// Size: 0x420 (Inherited: 0x408)
struct UDualBladeMenu_C : UFortDualBladeMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UOverlay* MainOverlay; // 0x410(0x08)
	struct UOverlay* Overlay_xp; // 0x418(0x08)

	void OnInitialized(); // Function DualBladeMenu.DualBladeMenu_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnFullScreenWidgetCreated(struct UWidget* NewWidget); // Function DualBladeMenu.DualBladeMenu_C.OnFullScreenWidgetCreated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_DualBladeMenu(int32_t EntryPoint); // Function DualBladeMenu.DualBladeMenu_C.ExecuteUbergraph_DualBladeMenu // (Final|UbergraphFunction) // @ game+0xdef49c
};

