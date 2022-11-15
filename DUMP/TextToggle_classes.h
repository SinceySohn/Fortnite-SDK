// WidgetBlueprintGeneratedClass TextToggle.TextToggle_C
// Size: 0x2f0 (Inherited: 0x290)
struct UTextToggle_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* ToggleOff; // 0x298(0x08)
	struct UWidgetAnimation* ToggleOn; // 0x2a0(0x08)
	struct UCommonTextBlock* CText_Off; // 0x2a8(0x08)
	struct UCommonTextBlock* CText_On; // 0x2b0(0x08)
	bool IsOn; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct FText OffText; // 0x2c0(0x18)
	struct FText OnText; // 0x2d8(0x18)

	void Refresh(); // Function TextToggle.TextToggle_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwitchToggle(); // Function TextToggle.TextToggle_C.SwitchToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetToggleState(bool IsOn); // Function TextToggle.TextToggle_C.SetToggleState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function TextToggle.TextToggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function TextToggle.TextToggle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TextToggle(int32_t EntryPoint); // Function TextToggle.TextToggle_C.ExecuteUbergraph_TextToggle // (Final|UbergraphFunction) // @ game+0xdef49c
};

