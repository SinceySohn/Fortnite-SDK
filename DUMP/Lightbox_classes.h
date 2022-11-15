// WidgetBlueprintGeneratedClass Lightbox.Lightbox_C
// Size: 0x328 (Inherited: 0x290)
struct ULightbox_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* FadeOut; // 0x298(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2a0(0x08)
	struct UBorder* Border_Darken; // 0x2a8(0x08)
	struct UButton* ClickCatcher; // 0x2b0(0x08)
	struct UNamedSlot* Content; // 0x2b8(0x08)
	struct UBorder* Dimmer; // 0x2c0(0x08)
	struct USafeZone* ; // 0x2c8(0x08)
	struct UCommonVisibilityWidgetLegacy* WindowButtons; // 0x2d0(0x08)
	struct UOverlay* WindowsOverlay; // 0x2d8(0x08)
	struct Uwindowchromebuttons_C* WindowTitleBar; // 0x2e0(0x08)
	struct FMulticastInlineDelegate IntroEnded; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OutroEnded; // 0x2f8(0x10)
	bool ShowWindowControlButtons; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	double DimAmount; // 0x310(0x08)
	struct FLinearColor BackgroundColor; // 0x318(0x10)

	void RemoveContent(); // Function Lightbox.Lightbox_C.RemoveContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AddContent(struct UCommonUserWidget* Content); // Function Lightbox.Lightbox_C.AddContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Outro(); // Function Lightbox.Lightbox_C.Outro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Intro(); // Function Lightbox.Lightbox_C.Intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function Lightbox.Lightbox_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function Lightbox.Lightbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function Lightbox.Lightbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void (); // Function Lightbox.Lightbox_C. // (BlueprintEvent) // @ game+0xdef49c
	void (); // Function Lightbox.Lightbox_C. // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Lightbox(int32_t EntryPoint); // Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox // (Final|UbergraphFunction) // @ game+0xdef49c
	void OutroEnded__DelegateSignature(); // Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IntroEnded__DelegateSignature(); // Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

