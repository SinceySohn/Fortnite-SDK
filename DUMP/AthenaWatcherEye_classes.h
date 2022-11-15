// WidgetBlueprintGeneratedClass AthenaWatcherEye.AthenaWatcherEye_C
// Size: 0x2b0 (Inherited: 0x268)
struct UAthenaWatcherEye_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Mad; // 0x270(0x08)
	struct UWidgetAnimation* Blink_New; // 0x278(0x08)
	struct UWidgetAnimation* Surprise; // 0x280(0x08)
	struct UWidgetAnimation* Blink; // 0x288(0x08)
	struct UWidgetAnimation* LookAround; // 0x290(0x08)
	struct UWidgetAnimation* Open; // 0x298(0x08)
	struct UImage* I_Watcher; // 0x2a0(0x08)
	struct FTimerHandle WatcherFinishedTransitionTimer; // 0x2a8(0x08)

	void SpectatorAdded_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Hide_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Show_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void End_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SpectatorRemoved_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Begin_Watcher(bool ManySpectatorsJoining); // Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ManySpectatorsAdded_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaWatcherEye(int32_t EntryPoint); // Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

