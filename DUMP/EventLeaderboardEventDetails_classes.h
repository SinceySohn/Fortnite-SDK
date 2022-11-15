// WidgetBlueprintGeneratedClass EventLeaderboardEventDetails.EventLeaderboardEventDetails_C
// Size: 0x738 (Inherited: 0x718)
struct UEventLeaderboardEventDetails_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UCommonTextBlock* Text_EventName; // 0x720(0x08)
	struct UCommonTextBlock* Text_RegionName; // 0x728(0x08)
	struct UCommonTextBlock* Text_SessionName; // 0x730(0x08)

	void RefreshDataBP(); // Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_EventLeaderboardEventDetails(int32_t EntryPoint); // Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.ExecuteUbergraph_EventLeaderboardEventDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

