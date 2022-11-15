// WidgetBlueprintGeneratedClass ShowdownEventTile.ShowdownEventTile_C
// Size: 0x14e0 (Inherited: 0x1430)
struct UShowdownEventTile_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Focus_Violator; // 0x1438(0x08)
	struct UWidgetAnimation* Hover; // 0x1440(0x08)
	struct UWidgetAnimation* Focus; // 0x1448(0x08)
	struct UWidgetAnimation* TransitionSize; // 0x1450(0x08)
	struct UWidgetAnimation* Intro; // 0x1458(0x08)
	struct UCommonBorder* CommonBorder_InputContainer; // 0x1460(0x08)
	struct UImage* Image_BG; // 0x1468(0x08)
	struct UImage* Image_Ended; // 0x1470(0x08)
	struct UImage* Image_Focus; // 0x1478(0x08)
	struct UImage* Image_Hover; // 0x1480(0x08)
	struct UImage* Image_Tail; // 0x1488(0x08)
	struct UShowdownEventTile_RoundBreak_C* ShowdownEventTile_RoundBreak; // 0x1490(0x08)
	struct UShowdownEventTileInfo_C* ShowdownEventTileInfo; // 0x1498(0x08)
	struct UShowdownEventTileViolator_C* Violator; // 0x14a0(0x08)
	struct FString EventId; // 0x14a8(0x10)
	bool isEnded; // 0x14b8(0x01)
	bool IsLive; // 0x14b9(0x01)
	char pad_14BA[0x6]; // 0x14ba(0x06)
	struct FMulticastInlineDelegate OnWindowSelected; // 0x14c0(0x10)
	struct FString TournamentId; // 0x14d0(0x10)

	void SetData(struct FString TournamentInfo, struct FString EventInfo); // Function ShowdownEventTile.ShowdownEventTile_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ShowdownEventTile.ShowdownEventTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventIntro(int32_t Index); // Function ShowdownEventTile.ShowdownEventTile_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventResize(bool Out); // Function ShowdownEventTile.ShowdownEventTile_C.EventResize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventSetState(enum class EFortShowdownEventState EventState); // Function ShowdownEventTile.ShowdownEventTile_C.EventSetState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventColorize(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTile.ShowdownEventTile_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventColorizeDispatch(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventMultiRoundStyle(); // Function ShowdownEventTile.ShowdownEventTile_C.EventMultiRoundStyle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownEventTile(int32_t EntryPoint); // Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnWindowSelected__DelegateSignature(); // Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

