// WidgetBlueprintGeneratedClass LeaderboardTab.LeaderboardTab_C
// Size: 0x3e8 (Inherited: 0x3c8)
struct ULeaderboardTab_C : UFortLeaderboardViewTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x3d0(0x08)
	struct UEventLeaderboardHeader_C* EventLeaderboardHeaderDetails; // 0x3d8(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x3e0(0x08)

	void Colorize(struct FFortTournamentDisplayInfo Color Info); // Function LeaderboardTab.LeaderboardTab_C.Colorize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Event(struct FString EventId, struct FString EventWindowId); // Function LeaderboardTab.LeaderboardTab_C.Set Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LeaderboardTab(int32_t EntryPoint); // Function LeaderboardTab.LeaderboardTab_C.ExecuteUbergraph_LeaderboardTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

