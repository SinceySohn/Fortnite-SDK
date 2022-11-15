// WidgetBlueprintGeneratedClass SocialPanel.SocialPanel_C
// Size: 0x568 (Inherited: 0x538)
struct USocialPanel_C : UFortSocialPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* OnOpened; // 0x540(0x08)
	struct UImage* Image_Back; // 0x548(0x08)
	struct ULightbox_C* Lightbox; // 0x550(0x08)
	struct USafeZone* ; // 0x558(0x08)
	struct USocialPanel_TopBarExtension_C* SocialPanel_TopBarExtension; // 0x560(0x08)

	void Play Panel Animation Sound(); // Function SocialPanel.SocialPanel_C.Play Panel Animation Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClosePanelAfterAnimation(); // Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply (struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPanel.SocialPanel_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ClosePanel(); // Function SocialPanel.SocialPanel_C.ClosePanel // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleOutroEnded(); // Function SocialPanel.SocialPanel_C.HandleOutroEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBeginOutro(); // Function SocialPanel.SocialPanel_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnBeginIntro(); // Function SocialPanel.SocialPanel_C.OnBeginIntro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleIntroEnded(); // Function SocialPanel.SocialPanel_C.HandleIntroEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function SocialPanel.SocialPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialPanel(int32_t EntryPoint); // Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel // (Final|UbergraphFunction) // @ game+0xdef49c
};

