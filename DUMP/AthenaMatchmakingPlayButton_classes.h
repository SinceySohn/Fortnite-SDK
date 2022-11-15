// WidgetBlueprintGeneratedClass AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C
// Size: 0x1490 (Inherited: 0x1450)
struct UAthenaMatchmakingPlayButton_C : UAthenaMatchmakingPlayButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* Disabled; // 0x1458(0x08)
	struct UWidgetAnimation* PlayShine; // 0x1460(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1468(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1470(0x08)
	struct UImage* Image_ButtonTop; // 0x1478(0x08)
	struct UImage* Image_Shadow; // 0x1480(0x08)
	struct UMatchmakingInputIndicator_C* MatchmakingInputIndicator; // 0x1488(0x08)

	void SetButtonText(struct FText InText); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaMatchmakingPlayButton(int32_t EntryPoint); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

