// WidgetBlueprintGeneratedClass PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C
// Size: 0x290 (Inherited: 0x268)
struct UPriceChangeAcknowledgeTextEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCommonRichTextBlock* Description; // 0x270(0x08)
	struct FText Text; // 0x278(0x18)

	void PreConstruct(bool IsDesignTime); // Function PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetText(struct FText InText); // Function PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PriceChangeAcknowledgeTextEntry(int32_t EntryPoint); // Function PriceChangeAcknowledgeTextEntry.PriceChangeAcknowledgeTextEntry_C.ExecuteUbergraph_PriceChangeAcknowledgeTextEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

