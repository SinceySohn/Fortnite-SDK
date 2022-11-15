// WidgetBlueprintGeneratedClass LobbyGadgetButton.LobbyGadgetButton_C
// Size: 0x2e9 (Inherited: 0x290)
struct ULobbyGadgetButton_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UPanelButton_C* Button; // 0x298(0x08)
	struct UImage* EmptySlot; // 0x2a0(0x08)
	struct UFortMultiSizeItemCard* Item; // 0x2a8(0x08)
	struct TArray<struct UFortWorldItemDefinition*> DesignTestItemDefinitions; // 0x2b0(0x10)
	struct UFortWorldItem* GadgetItem; // 0x2c0(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x2d8(0x10)
	bool bLocked; // 0x2e8(0x01)

	void Focus(); // Function LobbyGadgetButton.LobbyGadgetButton_C.Focus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetLocked(bool& bLocked); // Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetLocked(bool bLocked); // Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetGadgetItem(struct UFortWorldItem*& GadgetItem); // Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Refresh(struct UFortWorldItem* WorldItem); // Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LobbyGadgetButton(int32_t EntryPoint); // Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton // (Final|UbergraphFunction) // @ game+0xdef49c
	void OnButtonHovered__DelegateSignature(struct ULobbyGadgetButton_C* GadgetButton); // Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnButtonClicked__DelegateSignature(struct ULobbyGadgetButton_C* GadgetButton); // Function LobbyGadgetButton.LobbyGadgetButton_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

