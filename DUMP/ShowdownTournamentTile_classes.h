// WidgetBlueprintGeneratedClass ShowdownTournamentTile.ShowdownTournamentTile_C
// Size: 0x1489 (Inherited: 0x1460)
struct UShowdownTournamentTile_C : UFortShowdownTournamentTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1460(0x08)
	struct UWidgetAnimation* sizeUp; // 0x1468(0x08)
	struct UWidgetAnimation* changeFocus; // 0x1470(0x08)
	struct UImage* Image_TileFade; // 0x1478(0x08)
	struct USizeBox* PosterSizeBox; // 0x1480(0x08)
	bool isFaded; // 0x1488(0x01)

	void BP_OnSelected(); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventFade(bool FadeOut); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.EventFade // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownTournamentTile(int32_t EntryPoint); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.ExecuteUbergraph_ShowdownTournamentTile // (Final|UbergraphFunction) // @ game+0xdef49c
};

