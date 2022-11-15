// WidgetBlueprintGeneratedClass LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C
// Size: 0x14b8 (Inherited: 0x1480)
struct ULobbyPlayerAddPlayer_C : UFortLobbyAddPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* ShowPartyFinderText; // 0x1488(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1490(0x08)
	struct UCommonTextBlock* ; // 0x1498(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x14a0(0x08)
	struct UOverlay* OverlayInputAction; // 0x14a8(0x08)
	struct UVerticalBox* VB_ControlLegend; // 0x14b0(0x08)

	void BP_OnHovered(); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LobbyPlayerAddPlayer(int32_t EntryPoint); // Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.ExecuteUbergraph_LobbyPlayerAddPlayer // (Final|UbergraphFunction) // @ game+0xdef49c
};

