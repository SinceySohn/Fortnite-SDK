// WidgetBlueprintGeneratedClass LoadingSubGameContentModal.LoadingSubGameContentModal_C
// Size: 0x439 (Inherited: 0x3f0)
struct ULoadingSubGameContentModal_C : UFortLoadingOnDemandContentModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* Outro; // 0x3f8(0x08)
	struct UWidgetAnimation* Intro; // 0x400(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x408(0x08)
	struct UProgressBar* DownloadingProgressBar; // 0x410(0x08)
	struct ULightbox_C* Lightbox; // 0x418(0x08)
	struct UVerticalBox* Modal_VertBox; // 0x420(0x08)
	struct UCommonTextBlock* Text_Content; // 0x428(0x08)
	struct UCommonTextBlock* Text_Progress; // 0x430(0x08)
	bool HasPlayedAnim; // 0x438(0x01)

	void OnUpdatedProgress(float Percent); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetCancelButtonText(struct FText& InText); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LoadingSubGameContentModal(int32_t EntryPoint); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

