// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
// Size: 0x464 (Inherited: 0x430)
struct USubgameSelectScreen_C : UFortSubgameSelectScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UOverlay* ModeSelect; // 0x438(0x08)
	struct UProgressModalWidget_C* LeavingMatchmakingDialog; // 0x440(0x08)
	struct UMaterialInstanceDynamic* MID-Keyart; // 0x448(0x08)
	struct TArray<struct UTexture*> TextureCycle; // 0x450(0x10)
	int32_t TextureCycleIndex; // 0x460(0x04)

	void IsMinorShutdownWarningEnabled(bool& Enabled); // Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool IsBusyMatchmaking(); // Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void AdvanceTextureCycle(); // Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InitializeTextureCycle(); // Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventEnded_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventEnded_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventUpdated_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventUpdated_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventActive_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventActive_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(); // Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SubgameSelectScreen(int32_t EntryPoint); // Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen // (Final|UbergraphFunction) // @ game+0xdef49c
};

