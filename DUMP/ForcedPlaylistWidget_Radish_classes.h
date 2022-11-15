// WidgetBlueprintGeneratedClass ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C
// Size: 0x4f0 (Inherited: 0x478)
struct UForcedPlaylistWidget_Radish_C : UFortUIStateWidget_ForcedPlaylist {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UImage* Black; // 0x480(0x08)
	struct USkewButton_C* CloseButton; // 0x488(0x08)
	struct UImage* LoadingImage; // 0x490(0x08)
	struct UImage* LoadingSpinner; // 0x498(0x08)
	struct UCommonTextBlock* Text_Button_Close; // 0x4a0(0x08)
	struct UCommonTextBlock* Text_Dots; // 0x4a8(0x08)
	struct TArray<struct FText> Dots; // 0x4b0(0x10)
	int32_t DotCount; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TSoftObjectPtr<UTexture2D> LoadingTexture; // 0x4c8(0x28)

	void OnLoaded_5FFE955E48439632DF448D9A57D91897(struct UObject* Loaded); // Function ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C.OnLoaded_5FFE955E48439632DF448D9A57D91897 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ForcedPlaylistWidget_Radish_CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C.BndEvt__ForcedPlaylistWidget_Radish_CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void UpdateDots(); // Function ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C.UpdateDots // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ForcedPlaylistWidget_Radish_CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C.BndEvt__ForcedPlaylistWidget_Radish_CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ForcedPlaylistWidget_Radish_CloseButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C.BndEvt__ForcedPlaylistWidget_Radish_CloseButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnInitialized(); // Function ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void TryLoadTexture(); // Function ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C.TryLoadTexture // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ForcedPlaylistWidget_Radish(int32_t EntryPoint); // Function ForcedPlaylistWidget_Radish.ForcedPlaylistWidget_Radish_C.ExecuteUbergraph_ForcedPlaylistWidget_Radish // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

