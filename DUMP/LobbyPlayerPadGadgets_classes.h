// WidgetBlueprintGeneratedClass LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C
// Size: 0x2d0 (Inherited: 0x290)
struct ULobbyPlayerPadGadgets_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct ULobbyGadgetButton_C* Gadget1; // 0x298(0x08)
	struct ULobbyGadgetButton_C* Gadget2; // 0x2a0(0x08)
	int32_t PlayerIndex; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FMulticastInlineDelegate OnGadgetsMouseEntered; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnGadgetsMouseLeft; // 0x2c0(0x10)

	void Initialize(int32_t PlayerIndex); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInputClicked(); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnInputClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Refresh(struct FFortTeamMemberInfo TeamMemberInfo); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LobbyPlayerPadGadgets(int32_t EntryPoint); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.ExecuteUbergraph_LobbyPlayerPadGadgets // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnGadgetsMouseLeft__DelegateSignature(); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnGadgetsMouseEntered__DelegateSignature(); // Function LobbyPlayerPadGadgets.LobbyPlayerPadGadgets_C.OnGadgetsMouseEntered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

