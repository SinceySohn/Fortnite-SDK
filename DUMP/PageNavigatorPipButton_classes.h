// WidgetBlueprintGeneratedClass PageNavigatorPipButton.PageNavigatorPipButton_C
// Size: 0x1508 (Inherited: 0x14d0)
struct UPageNavigatorPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* Hover; // 0x14d8(0x08)
	struct UWidgetAnimation* Selected; // 0x14e0(0x08)
	struct UImage* BacchusMobileShadow; // 0x14e8(0x08)
	struct UCommonActionWidget* CommonActionWidget_RightStick; // 0x14f0(0x08)
	struct UImage* PIP; // 0x14f8(0x08)
	struct UOverlay* RSContainer; // 0x1500(0x08)

	void BP_OnDeselected(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Set Pip Colors(struct FLinearColor Base Color, struct FLinearColor Hover Color, struct FLinearColor Select Color); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.Set Pip Colors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetRightStickIconAllowed(bool Allowed); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.SetRightStickIconAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PageNavigatorPipButton(int32_t EntryPoint); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.ExecuteUbergraph_PageNavigatorPipButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

