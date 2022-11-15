// WidgetBlueprintGeneratedClass CloseButton.CloseButton_C
// Size: 0x14b9 (Inherited: 0x1440)
struct UCloseButton_C : UBacchusCloseButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* Unhover; // 0x1448(0x08)
	struct UWidgetAnimation* Pressed; // 0x1450(0x08)
	struct UWidgetAnimation* Hover; // 0x1458(0x08)
	struct UBorder* Border_Container; // 0x1460(0x08)
	struct UImage* ButtonBacking; // 0x1468(0x08)
	struct UImage* CloseIcon; // 0x1470(0x08)
	struct USizeBox* SizeBox_Control; // 0x1478(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x1480(0x08)
	struct FText Button Description; // 0x1488(0x18)
	bool FontSizeOveride; // 0x14a0(0x01)
	char pad_14A1[0x3]; // 0x14a1(0x03)
	int32_t FontSize; // 0x14a4(0x04)
	struct Fmargin Padding Overide; // 0x14a8(0x10)
	bool PaddingOveride; // 0x14b8(0x01)

	void SetText(struct FText Text); // Function CloseButton.CloseButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleSize(); // Function CloseButton.CloseButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function CloseButton.CloseButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function CloseButton.CloseButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CloseButton(int32_t EntryPoint); // Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

