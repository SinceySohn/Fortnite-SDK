// WidgetBlueprintGeneratedClass ProgressModalWidget.ProgressModalWidget_C
// Size: 0x630 (Inherited: 0x620)
struct UProgressModalWidget_C : UFortProgressModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct ULightbox_C* Lightbox; // 0x628(0x08)

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ProgressModalWidget.ProgressModalWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HandleIntroEnded(); // Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleOutroEnded(); // Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBeginIntro(); // Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBeginOutro(); // Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function ProgressModalWidget.ProgressModalWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressModalWidget(int32_t EntryPoint); // Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

