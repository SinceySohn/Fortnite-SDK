// WidgetBlueprintGeneratedClass EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C
// Size: 0x28c (Inherited: 0x268)
struct UEventLeaderboardDetails_Stat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* UpdateStat; // 0x270(0x08)
	struct UCommonTextBlock* Text_StatName; // 0x278(0x08)
	struct UCommonTextBlock* Text_StatValue; // 0x280(0x08)
	int32_t StatItemIndex; // 0x288(0x04)

	void SetStatData(struct FText Name, double Value, int32_t NumFractionalDigits); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.SetStatData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventStatAnim(); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.EventStatAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventLeaderboardDetails_Stat(int32_t EntryPoint); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.ExecuteUbergraph_EventLeaderboardDetails_Stat // (Final|UbergraphFunction) // @ game+0xdef49c
};

