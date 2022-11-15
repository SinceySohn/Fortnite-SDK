// WidgetBlueprintGeneratedClass ProgressiveHeaderBanner.ProgressiveHeaderBanner_C
// Size: 0x2c0 (Inherited: 0x268)
struct UProgressiveHeaderBanner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBorder* Banner_Border; // 0x270(0x08)
	struct UCommonRichTextBlock* Banner_Text; // 0x278(0x08)
	struct UImage* Image; // 0x280(0x08)
	struct FText Debug Text Preview; // 0x288(0x18)
	struct FLinearColor Subscribed; // 0x2a0(0x10)
	struct FLinearColor Unsubscribed; // 0x2b0(0x10)

	void Update Text(struct FText InText); // Function ProgressiveHeaderBanner.ProgressiveHeaderBanner_C.Update Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Banner State(struct FText Text, bool Current Sets Complete, bool Subscribed); // Function ProgressiveHeaderBanner.ProgressiveHeaderBanner_C.Update Banner State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ProgressiveHeaderBanner.ProgressiveHeaderBanner_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveHeaderBanner(int32_t EntryPoint); // Function ProgressiveHeaderBanner.ProgressiveHeaderBanner_C.ExecuteUbergraph_ProgressiveHeaderBanner // (Final|UbergraphFunction) // @ game+0xdef49c
};

