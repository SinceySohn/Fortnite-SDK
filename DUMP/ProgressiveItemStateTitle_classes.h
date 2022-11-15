// WidgetBlueprintGeneratedClass ProgressiveItemStateTitle.ProgressiveItemStateTitle_C
// Size: 0x344 (Inherited: 0x268)
struct UProgressiveItemStateTitle_C : UFortProgressiveItemStateTitleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCrewCrown_Animated_C* CrewCrown_Animated; // 0x270(0x08)
	struct UProgressiveTagsBase_C* ProgressiveTags_Benefits; // 0x278(0x08)
	struct UProgressiveTagsBase_C* ProgressiveTags_Stages; // 0x280(0x08)
	struct UProgressiveTagsBase_C* ProgressiveTags_Subscribed; // 0x288(0x08)
	struct UCommonTextBlock* Text_Subheading; // 0x290(0x08)
	struct UCommonTextBlock* Text_Title; // 0x298(0x08)
	struct FLinearColor Subbed Dark Green; // 0x2a0(0x10)
	struct FText Text; // 0x2b0(0x18)
	bool Show Multi-Benefits tag; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FText Title Text; // 0x2d0(0x18)
	struct FSlateColor Unsubscribed Subheader Color; // 0x2e8(0x14)
	struct FSlateColor Subscibed Subheader Color; // 0x2fc(0x14)
	struct FSlateColor Unsubbed White; // 0x310(0x14)
	struct FLinearColor Subbed Light Green; // 0x324(0x10)
	struct FLinearColor Unsubbed Pink BG; // 0x334(0x10)

	void Update Subscribed Tag(bool Subscribed); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update Subscribed Tag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Subheading(struct FText Text, bool Subscribed); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update Subheading // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Title Text(); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update Title Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update MultiBenefits Tag(bool Index); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update MultiBenefits Tag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update Stages Tag(bool Subscribed, int32_t Current Stage, int32_t Max Stage); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update Stages Tag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSetHeaderInfo(struct FText& Subheading, bool bSubscribed, int32_t UnlockedStages, int32_t MaxStages); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.BP_OnSetHeaderInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ProgressiveItemStateTitle(int32_t EntryPoint); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.ExecuteUbergraph_ProgressiveItemStateTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

