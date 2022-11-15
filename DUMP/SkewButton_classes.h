// WidgetBlueprintGeneratedClass SkewButton.SkewButton_C
// Size: 0x1493 (Inherited: 0x1430)
struct USkewButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Released; // 0x1438(0x08)
	struct UWidgetAnimation* Pressed; // 0x1440(0x08)
	struct UWidgetAnimation* Hover; // 0x1448(0x08)
	struct UImage* ImageButtonFill; // 0x1450(0x08)
	struct UImage* ImageShadow; // 0x1458(0x08)
	struct UNamedSlot* NamedSlot_ButtonContent; // 0x1460(0x08)
	struct UOverlay* Overlay_SkewBrushes; // 0x1468(0x08)
	struct FLinearColor ButtonColor; // 0x1470(0x10)
	struct FLinearColor HoverColor; // 0x1480(0x10)
	bool Chip; // 0x1490(0x01)
	bool Skew; // 0x1491(0x01)
	bool NoHoverColor; // 0x1492(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function SkewButton.SkewButton_C.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function SkewButton.SkewButton_C.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SkewButton.SkewButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SkewButton.SkewButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SkewButton.SkewButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function SkewButton.SkewButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SkewButton.SkewButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SkewButton(int32_t EntryPoint); // Function SkewButton.SkewButton_C.ExecuteUbergraph_SkewButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

