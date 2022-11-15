// WidgetBlueprintGeneratedClass B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
// Size: 0x2a4 (Inherited: 0x268)
struct UB_MusicEventDebugWidget_C : UMusicEventSubsystemDebugWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UBackgroundBlur* Background; // 0x270(0x08)
	struct UCommonListView* EventInstances; // 0x278(0x08)
	struct FString AssetFilter; // 0x280(0x10)
	struct TArray<struct UMusicEventInstance*> Instances; // 0x290(0x10)
	int32_t FontSize; // 0x2a0(0x04)

	void FilterInstances(); // Function B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.FilterInstances // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetEventInstances(struct TArray<struct UMusicEventInstance*>& Instances); // Function B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetEventInstances // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetMusicEventPos(double X, double Y); // Function B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventPos // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMusicEventAssetFilter(struct FString Filter); // Function B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventAssetFilter // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetMusicEventFontSize(int32_t Size); // Function B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventFontSize // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_MusicEventDebugWidget(int32_t EntryPoint); // Function B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.ExecuteUbergraph_B_MusicEventDebugWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

