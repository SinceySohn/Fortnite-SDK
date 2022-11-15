// WidgetBlueprintGeneratedClass EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C
// Size: 0x750 (Inherited: 0x718)
struct UEventLeaderboardPlayerPerformance_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UEventsSimpleButton_C* Button_MyPosition; // 0x720(0x08)
	struct UCommonTextBlock* ; // 0x728(0x08)
	struct UCommonTextBlock* ; // 0x730(0x08)
	struct UHorizontalBox* HorizontalBox_Container; // 0x738(0x08)
	struct UCommonTextBlock* Text_PlayerPerformance; // 0x740(0x08)
	struct UCommonTextBlock* Text_PlayerScore; // 0x748(0x08)

	void RefreshDataBP(); // Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventLeaderboardPlayerPerformance(int32_t EntryPoint); // Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.ExecuteUbergraph_EventLeaderboardPlayerPerformance // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

