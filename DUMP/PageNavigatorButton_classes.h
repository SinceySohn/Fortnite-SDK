// WidgetBlueprintGeneratedClass PageNavigatorButton.PageNavigatorButton_C
// Size: 0x1441 (Inherited: 0x13f0)
struct UPageNavigatorButton_C : UFortPageNavigationButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13f0(0x08)
	struct UWidgetAnimation* FadeOutBacking; // 0x13f8(0x08)
	struct UWidgetAnimation* Translate_Bottom; // 0x1400(0x08)
	struct UWidgetAnimation* Translate_Top; // 0x1408(0x08)
	struct UWidgetAnimation* Hover; // 0x1410(0x08)
	struct UImage* Backing; // 0x1418(0x08)
	struct UBorder* Border_button; // 0x1420(0x08)
	struct UBorder* BorderButton; // 0x1428(0x08)
	struct UBorder* GridBoundBorder; // 0x1430(0x08)
	struct UImage* IMG_Arrow; // 0x1438(0x08)
	bool bIsTop; // 0x1440(0x01)

	void Set colors(); // Function PageNavigatorButton.PageNavigatorButton_C.Set colors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function PageNavigatorButton.PageNavigatorButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function PageNavigatorButton.PageNavigatorButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function PageNavigatorButton.PageNavigatorButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Set Button colors(struct FLinearColor Color1, struct FLinearColor Color2, struct FLinearColor Color3, struct FLinearColor Color4, struct FLinearColor Color5); // Function PageNavigatorButton.PageNavigatorButton_C.Set Button colors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PageNavigatorButton(int32_t EntryPoint); // Function PageNavigatorButton.PageNavigatorButton_C.ExecuteUbergraph_PageNavigatorButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

