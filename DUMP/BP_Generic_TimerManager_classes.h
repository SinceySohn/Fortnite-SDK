// BlueprintGeneratedClass BP_Generic_TimerManager.BP_Generic_TimerManager_C
// Size: 0x361 (Inherited: 0x288)
struct ABP_Generic_TimerManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	double ServerWorldSecondsAtEvent; // 0x298(0x08)
	int32_t TimeOffsetSeconds; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FTimerHandle CountDownTimerAccuracyfix; // 0x2a8(0x08)
	struct FTimespan TimeUntilCountdownEnd; // 0x2b0(0x08)
	int32_t SecondsRemaining; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FTimespan TimespanRemaining; // 0x2c0(0x08)
	struct FString CalendarEventName; // 0x2c8(0x10)
	struct FTimerHandle CountdownTimerHandle; // 0x2d8(0x08)
	double Phase3VisualDuration; // 0x2e0(0x08)
	struct FMulticastInlineDelegate OnSecondsRemainingUpdated; // 0x2e8(0x10)
	struct FMulticastInlineDelegate FadeOut; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnTimerStateChange; // 0x308(0x10)
	int32_t CurrentState; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct TArray<int32_t> TimerStatesSecondsRemaining; // 0x320(0x10)
	struct FMulticastInlineDelegate OnTimerActive; // 0x330(0x10)
	struct FMulticastInlineDelegate OnTimerFinished; // 0x340(0x10)
	bool bTimerActive; // 0x350(0x01)
	bool bTimerFinished; // 0x351(0x01)
	bool bIsFrontEnd; // 0x352(0x01)
	bool FakeTimer; // 0x353(0x01)
	char pad_354[0x4]; // 0x354(0x04)
	double FakeTimerOffset; // 0x358(0x08)
	bool SkipVisualUpdate; // 0x360(0x01)

	void CheckStage(int32_t SecondsRemaining, int32_t& CurrentStage); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.CheckStage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Fake Timer Offset(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.Set Fake Timer Offset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UseFakeTimer(double CountdownTime); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.UseFakeTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bTimerFinished(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnRep_bTimerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bIsActive(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnRep_bIsActive // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateStage(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.UpdateStage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_CurrentState(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnRep_CurrentState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_ServerWorldSecondsAtEvent(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnRep_ServerWorldSecondsAtEvent // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventEnded_60E8057840996C096DE192A0F298D20C(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnEventEnded_60E8057840996C096DE192A0F298D20C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventUpdated_60E8057840996C096DE192A0F298D20C(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnEventUpdated_60E8057840996C096DE192A0F298D20C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventActive_60E8057840996C096DE192A0F298D20C(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnEventActive_60E8057840996C096DE192A0F298D20C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_5CD17C734C5C64794A8D0BA05D00B72C(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnReady_5CD17C734C5C64794A8D0BA05D00B72C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnReady_B337321A443C013690B7869DF30E5BCC(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnReady_B337321A443C013690B7869DF30E5BCC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ErrorCorrection(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ErrorCorrection // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartFinalAccuracyadjustment(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.StartFinalAccuracyadjustment // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CountDownTimer_AccuracyFix(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.CountDownTimer_AccuracyFix // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CountdownTimer_New(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.CountdownTimer_New // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void VisualUpdateEverySecond(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.VisualUpdateEverySecond // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ContinueClockCountdown(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ContinueClockCountdown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ClearTimerVisuals(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ClearTimerVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DebugCountdown(double Server Seconds); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.DebugCountdown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TimerFinished(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.TimerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Generic_TimerManager(int32_t EntryPoint); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.ExecuteUbergraph_BP_Generic_TimerManager // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnTimerFinished__DelegateSignature(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnTimerFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimerActive__DelegateSignature(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnTimerActive__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimerStateChange__DelegateSignature(int32_t NewTimerState); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnTimerStateChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FadeOut__DelegateSignature(); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.FadeOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSecondsRemainingUpdated__DelegateSignature(int32_t SecondsRemaining); // Function BP_Generic_TimerManager.BP_Generic_TimerManager_C.OnSecondsRemainingUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

