// WidgetBlueprintGeneratedClass NoInputActionPipButton.NoInputActionPipButton_C
// Size: 0x14f8 (Inherited: 0x14d0)
struct UNoInputActionPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UWidgetAnimation* Hover; // 0x14d8(0x08)
	struct UWidgetAnimation* Selected; // 0x14e0(0x08)
	struct UImage* BacchusMobileShadow; // 0x14e8(0x08)
	struct UImage* PIP; // 0x14f0(0x08)

	void BP_OnDeselected(); // Function NoInputActionPipButton.NoInputActionPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function NoInputActionPipButton.NoInputActionPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function NoInputActionPipButton.NoInputActionPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function NoInputActionPipButton.NoInputActionPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Set Pip Colors(struct FLinearColor Base Color, struct FLinearColor Hover Color, struct FLinearColor Select Color); // Function NoInputActionPipButton.NoInputActionPipButton_C.Set Pip Colors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NoInputActionPipButton(int32_t EntryPoint); // Function NoInputActionPipButton.NoInputActionPipButton_C.ExecuteUbergraph_NoInputActionPipButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

