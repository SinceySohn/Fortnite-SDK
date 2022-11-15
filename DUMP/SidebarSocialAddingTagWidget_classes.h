// WidgetBlueprintGeneratedClass SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C
// Size: 0x2d8 (Inherited: 0x290)
struct USidebarSocialAddingTagWidget_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* AddingTag; // 0x298(0x08)
	struct UBorder* Border_AddingTagBorder; // 0x2a0(0x08)
	struct UImage* Image_AddingTagArrow; // 0x2a8(0x08)
	struct UOverlay* Overlay_AddingTag; // 0x2b0(0x08)
	struct UCommonTextBlock* Text_AddingTagName; // 0x2b8(0x08)
	struct FString TagCategory_AddTag; // 0x2c0(0x10)
	struct FName Name_InnerColor; // 0x2d0(0x04)
	struct FName OuterColor; // 0x2d4(0x04)

	void EventSetTag(); // Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.EventSetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarSocialAddingTagWidget(int32_t EntryPoint); // Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.ExecuteUbergraph_SidebarSocialAddingTagWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

