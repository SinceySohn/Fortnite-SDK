// WidgetBlueprintGeneratedClass CMSImageSlideShow.CMSImageSlideShow_C
// Size: 0x290 (Inherited: 0x268)
struct UCMSImageSlideShow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCommonWidgetCarousel* Images; // 0x270(0x08)
	double ScrollInterview; // 0x278(0x08)
	struct FMulticastInlineDelegate CarouselIndexChanged; // 0x280(0x10)

	void SetMediaURLs(struct TArray<struct FString>& MediaURLs); // Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature(struct UCommonWidgetCarousel* CarouselWidget, int32_t CurrentPageIndex); // Function CMSImageSlideShow.CMSImageSlideShow_C.BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CMSImageSlideShow(int32_t EntryPoint); // Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void CarouselIndexChanged__DelegateSignature(int32_t CurrentPageIndex); // Function CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

