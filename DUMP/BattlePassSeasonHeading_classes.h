// WidgetBlueprintGeneratedClass BattlePassSeasonHeading.BattlePassSeasonHeading_C
// Size: 0x2e8 (Inherited: 0x298)
struct UBattlePassSeasonHeading_C : UBattlePassSeasonHeading {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* Intro; // 0x2a0(0x08)
	struct UFortLazyImage* HeaderImage; // 0x2a8(0x08)
	struct UImage* Image_Glow; // 0x2b0(0x08)
	struct UCommonRichTextBlock* Text_BattlePassTitle; // 0x2b8(0x08)
	struct TSoftObjectPtr<UTexture2D> BattlePassStarImage; // 0x2c0(0x28)

	void PreConstruct(bool IsDesignTime); // Function BattlePassSeasonHeading.BattlePassSeasonHeading_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EventPlayIntro(); // Function BattlePassSeasonHeading.BattlePassSeasonHeading_C.EventPlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BattlePassSeasonHeading(int32_t EntryPoint); // Function BattlePassSeasonHeading.BattlePassSeasonHeading_C.ExecuteUbergraph_BattlePassSeasonHeading // (Final|UbergraphFunction) // @ game+0xdef49c
};

