// WidgetBlueprintGeneratedClass SidebarPanelKoala.SidebarPanelKoala_C
// Size: 0x440 (Inherited: 0x3e0)
struct USidebarPanelKoala_C : UFortSidebarPanelKoala {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* PanelWidget_KoalaElements; // 0x3e8(0x08)
	struct UCommonRichTextBlock* RichText_Description_SignIn; // 0x3f0(0x08)
	struct UFortRichTextBlockKeybind* RichText_Description_Use; // 0x3f8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Description; // 0x400(0x08)
	struct UCommonRichTextBlock* Text_BasicKoalaDescription; // 0x408(0x08)
	struct FText UsageDescText_KBM; // 0x410(0x18)
	struct FText UsageDescText_Gamepad; // 0x428(0x18)

	void UpdateUsageDescription(enum class ECommonInputType Index); // Function SidebarPanelKoala.SidebarPanelKoala_C.UpdateUsageDescription // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarPanelKoala.SidebarPanelKoala_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnConnectionChanged(bool bConnected); // Function SidebarPanelKoala.SidebarPanelKoala_C.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType); // Function SidebarPanelKoala.SidebarPanelKoala_C.OnInputMethodChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarPanelKoala(int32_t EntryPoint); // Function SidebarPanelKoala.SidebarPanelKoala_C.ExecuteUbergraph_SidebarPanelKoala // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

