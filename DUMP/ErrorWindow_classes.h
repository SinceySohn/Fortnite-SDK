// WidgetBlueprintGeneratedClass ErrorWindow.ErrorWindow_C
// Size: 0x640 (Inherited: 0x5c0)
struct UErrorWindow_C : UFortErrorWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UWidgetAnimation* ; // 0x5c8(0x08)
	struct UWidgetAnimation* ; // 0x5d0(0x08)
	struct UWidgetAnimation* ; // 0x5d8(0x08)
	struct UWidgetAnimation* ; // 0x5e0(0x08)
	struct UErrorLlama_C* ; // 0x5e8(0x08)
	struct UErrorLlama_C* ; // 0x5f0(0x08)
	struct UErrorLlama_C* ; // 0x5f8(0x08)
	struct UImage* Image_Separator_Down; // 0x600(0x08)
	struct UImage* Image_Separator_Up; // 0x608(0x08)
	struct ULightbox_C* Lightbox; // 0x610(0x08)
	struct UWidgetAnimation* CurLlamaAnim; // 0x618(0x08)
	struct TArray<struct UErrorLlama_C*> LlamaArray; // 0x620(0x10)
	struct FTimerHandle LlamaReverseTimer; // 0x630(0x08)
	struct FTimerHandle AmbientLlamaPlayTimer; // 0x638(0x08)

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Initialize Close Button(); // Function ErrorWindow.ErrorWindow_C.Initialize Close Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ErrorWindow.ErrorWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function ErrorWindow.ErrorWindow_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnBeginOutro(); // Function ErrorWindow.ErrorWindow_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBeginIntro(); // Function ErrorWindow.ErrorWindow_C.OnBeginIntro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function ErrorWindow.ErrorWindow_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleLlamaAnimFinish(); // Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LlamaReverse(); // Function ErrorWindow.ErrorWindow_C.LlamaReverse // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleLlamaCycleFinished(); // Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayRandomAmbientLlama(); // Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartAmbientLlamaSequence(); // Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetLlamas(); // Function ErrorWindow.ErrorWindow_C.ResetLlamas // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOverrideCloseButtonText(struct FText& OverrideText); // Function ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ErrorWindow(int32_t EntryPoint); // Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

