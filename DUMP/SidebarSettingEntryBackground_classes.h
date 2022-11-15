// WidgetBlueprintGeneratedClass SidebarSettingEntryBackground.SidebarSettingEntryBackground_C
// Size: 0x290 (Inherited: 0x268)
struct USidebarSettingEntryBackground_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* OnHover; // 0x270(0x08)
	struct UNamedSlot* Content; // 0x278(0x08)
	struct FMulticastInlineDelegate OnMouseEnterChanged; // 0x280(0x10)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SidebarSettingEntryBackground.SidebarSettingEntryBackground_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SidebarSettingEntryBackground.SidebarSettingEntryBackground_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarSettingEntryBackground(int32_t EntryPoint); // Function SidebarSettingEntryBackground.SidebarSettingEntryBackground_C.ExecuteUbergraph_SidebarSettingEntryBackground // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnMouseEnterChanged__DelegateSignature(bool IsEnterEvent); // Function SidebarSettingEntryBackground.SidebarSettingEntryBackground_C.OnMouseEnterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

