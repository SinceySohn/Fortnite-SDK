// WidgetBlueprintGeneratedClass AthenaBannerSelectModal.AthenaBannerSelectModal_C
// Size: 0x550 (Inherited: 0x518)
struct UAthenaBannerSelectModal_C : UFortBannerSelectModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UCommonBorder* BorderTouch; // 0x520(0x08)
	struct UBP_LocalPlayerBannerEditor_C* BP_LocalPlayerBannerEditor; // 0x528(0x08)
	struct ULightbox_C* Lightbox; // 0x530(0x08)
	struct UScaleBox* ScaleBox_Banner; // 0x538(0x08)
	struct FDataTableRowHandle CloseAction; // 0x540(0x10)

	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Setup Input Action Handlers(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Setup Input Action Handlers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleCloseAction(bool& PassThrough); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleCloseAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(struct FName IconId, struct FName ColorId); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Close(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaBannerSelectModal(int32_t EntryPoint); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.ExecuteUbergraph_AthenaBannerSelectModal // (Final|UbergraphFunction) // @ game+0xdef49c
};

