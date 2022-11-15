// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C
// Size: 0x1488 (Inherited: 0x1450)
struct UEventPlayerStatProfileSelectorEntry_C : UFortEventPlayerStatProfileSelectorEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* Selected; // 0x1458(0x08)
	struct UImage* Image_SelectedBG; // 0x1460(0x08)
	struct FMulticastInlineDelegate Hovered; // 0x1468(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x1478(0x10)

	void BP_OnHovered(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32_t EntryPoint); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.ExecuteUbergraph_EventPlayerStatProfileSelectorEntry // (Final|UbergraphFunction) // @ game+0xdef49c
	void Unhovered__DelegateSignature(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Hovered__DelegateSignature(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

