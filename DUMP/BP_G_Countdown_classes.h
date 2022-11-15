// BlueprintGeneratedClass BP_G_Countdown.BP_G_Countdown_C
// Size: 0x568 (Inherited: 0x410)
struct ABP_G_Countdown_C : ABP_CountdownMaster_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UWidgetComponent* Widget_LiveInText; // 0x418(0x08)
	struct UStaticMeshComponent* SM_Galileo_PlatformBig_Hologram; // 0x420(0x08)
	float OpacityMult_NewTrack_0_56FEFD974C9CAF07532A909B7E71C09C; // 0x428(0x04)
	enum class ETimelineDirection OpacityMult__Direction_56FEFD974C9CAF07532A909B7E71C09C; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	struct UTimelineComponent* OpacityMult; // 0x430(0x08)
	float Timeline_0_Fade_AF07B16D4BAEBD0C4BCF0399A42298DB; // 0x438(0x04)
	enum class ETimelineDirection Timeline_0__Direction_AF07B16D4BAEBD0C4BCF0399A42298DB; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct UTimelineComponent* ; // 0x440(0x08)
	struct FString CountdownEvent; // 0x448(0x10)
	int32_t Stage; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	double SecondsRemaining; // 0x460(0x08)
	int32_t RepAudio; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct USoundBase* CountdownMusic; // 0x470(0x08)
	struct UAudioComponent* Music; // 0x478(0x08)
	struct FText StandbyText; // 0x480(0x18)
	struct FString CountdownHold; // 0x498(0x10)
	struct FVector Hologram Scale; // 0x4a8(0x18)
	struct FVector StartingInTextLocation; // 0x4c0(0x18)
	struct FVector StandbyTextLocation; // 0x4d8(0x18)
	double Blinkamount; // 0x4f0(0x08)
	struct FTimerHandle BlinkHandle; // 0x4f8(0x08)
	double TwoMinuteMark; // 0x500(0x08)
	struct TSoftObjectPtr<ABP_Generic_TimerManager_C> TimerManager; // 0x508(0x28)
	bool Has2MinWarningFired; // 0x530(0x01)
	bool IsLobbyTimer; // 0x531(0x01)
	char pad_532[0x6]; // 0x532(0x06)
	struct FVector Guava Fort Location; // 0x538(0x18)
	bool MoveTimer; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct TArray<struct FString> AllCalendarNames; // 0x558(0x10)

	void CheckActiveCalendar(); // Function BP_G_Countdown.BP_G_Countdown_C.CheckActiveCalendar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_MoveTimer(); // Function BP_G_Countdown.BP_G_Countdown_C.OnRep_MoveTimer // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_PlayLoopingAudio(); // Function BP_G_Countdown.BP_G_Countdown_C.OnRep_PlayLoopingAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopAudioInternal(); // Function BP_G_Countdown.BP_G_Countdown_C.StopAudioInternal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Audio Internal(double StartTime); // Function BP_G_Countdown.BP_G_Countdown_C.Play Audio Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_PlayAudio(); // Function BP_G_Countdown.BP_G_Countdown_C.OnRep_PlayAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_Stage(); // Function BP_G_Countdown.BP_G_Countdown_C.OnRep_Stage // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function BP_G_Countdown.BP_G_Countdown_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function BP_G_Countdown.BP_G_Countdown_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OpacityMult__FinishedFunc(); // Function BP_G_Countdown.BP_G_Countdown_C.OpacityMult__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void OpacityMult__UpdateFunc(); // Function BP_G_Countdown.BP_G_Countdown_C.OpacityMult__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnReady_94DBCC3B47D0EFF7A1326FA0C36D42B4(); // Function BP_G_Countdown.BP_G_Countdown_C.OnReady_94DBCC3B47D0EFF7A1326FA0C36D42B4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventEnded_0D8CA66F46B8FF9A8F4C398887B07136(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_G_Countdown.BP_G_Countdown_C.OnEventEnded_0D8CA66F46B8FF9A8F4C398887B07136 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventUpdated_0D8CA66F46B8FF9A8F4C398887B07136(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_G_Countdown.BP_G_Countdown_C.OnEventUpdated_0D8CA66F46B8FF9A8F4C398887B07136 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEventActive_0D8CA66F46B8FF9A8F4C398887B07136(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_G_Countdown.BP_G_Countdown_C.OnEventActive_0D8CA66F46B8FF9A8F4C398887B07136 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnComplete_DC499D2542DDC4A4D0BFD4BF670FD278(struct UUserWidget* UserWidget); // Function BP_G_Countdown.BP_G_Countdown_C.OnComplete_DC499D2542DDC4A4D0BFD4BF670FD278 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSyncComplete_C52593BD4FDFB36DA5B890A4B0841EE6(); // Function BP_G_Countdown.BP_G_Countdown_C.OnSyncComplete_C52593BD4FDFB36DA5B890A4B0841EE6 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_G_Countdown.BP_G_Countdown_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Stage1(); // Function BP_G_Countdown.BP_G_Countdown_C.Stage1 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Stage2(); // Function BP_G_Countdown.BP_G_Countdown_C.Stage2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FadeOut(bool Fade); // Function BP_G_Countdown.BP_G_Countdown_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ScrubComplete(); // Function BP_G_Countdown.BP_G_Countdown_C.ScrubComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlinkTimer(); // Function BP_G_Countdown.BP_G_Countdown_C.BlinkTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateLocalizedCountdownText(); // Function BP_G_Countdown.BP_G_Countdown_C.CreateLocalizedCountdownText // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Seconds Updated(int32_t SecondsRemaining); // Function BP_G_Countdown.BP_G_Countdown_C.Seconds Updated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTimerFinished(); // Function BP_G_Countdown.BP_G_Countdown_C.OnTimerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_G_Countdown(int32_t EntryPoint); // Function BP_G_Countdown.BP_G_Countdown_C.ExecuteUbergraph_BP_G_Countdown // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

