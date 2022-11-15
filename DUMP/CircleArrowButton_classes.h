// WidgetBlueprintGeneratedClass CircleArrowButton.CircleArrowButton_C
// Size: 0x14aa (Inherited: 0x1430)
struct UCircleArrowButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Click; // 0x1438(0x08)
	struct UWidgetAnimation* Hover; // 0x1440(0x08)
	struct UImage* Image_Arrow; // 0x1448(0x08)
	struct UImage* Image_Shadow; // 0x1450(0x08)
	struct UOverlay* Overlay_ButtonContainer; // 0x1458(0x08)
	struct USizeBox* Sizebox_InputAction; // 0x1460(0x08)
	bool Flip; // 0x1468(0x01)
	char pad_1469[0x3]; // 0x1469(0x03)
	struct FLinearColor ArrowColor; // 0x146c(0x10)
	struct FLinearColor ShadowColor; // 0x147c(0x10)
	char pad_148C[0x4]; // 0x148c(0x04)
	double EdgeSoftness; // 0x1490(0x08)
	struct FLinearColor HoverColor; // 0x1498(0x10)
	bool UseShadow; // 0x14a8(0x01)
	bool InputActionOnSide; // 0x14a9(0x01)

	void UpdateArrowColor(struct FLinearColor Color, struct FLinearColor HoverColor); // Function CircleArrowButton.CircleArrowButton_C.UpdateArrowColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function CircleArrowButton.CircleArrowButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CircleArrowButton(int32_t EntryPoint); // Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

