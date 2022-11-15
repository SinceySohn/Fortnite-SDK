// BlueprintGeneratedClass BP_Vehicle_Radio.BP_Vehicle_Radio_C
// Size: 0x2e0 (Inherited: 0x288)
struct ABP_Vehicle_Radio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UMediaSoundComponent* RadioSpeaker; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct UMediaPlayer* RadioMediaPlayer; // 0x2a0(0x08)
	struct UFortStreamMediaSource* RadioMediaSource; // 0x2a8(0x08)
	struct TArray<struct FString> RadioStations; // 0x2b0(0x10)
	int32_t RadioRetryCounter; // 0x2c0(0x04)
	int32_t RadioRetries; // 0x2c4(0x04)
	struct FString RadioURL; // 0x2c8(0x10)
	bool RadioURLFailure; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32_t RadioStationIndex; // 0x2dc(0x04)

	void RadioSendAnalytics(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioSendAnalytics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RadioClosed(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RadioRetry(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioRetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RadioUnbindEvents(bool JustURL); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RadioPlay(struct FString URL); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void StartRadio(int32_t StationIndex); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.StartRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayRadio(struct FString RetrievedUrl); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.PlayRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RadioURLFailed(struct FString RetrievedUrl); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioURLFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RadioOpenFailed(struct FString FailedUrl); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioOpenFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopRadio(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.StopRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Vehicle_Radio(int32_t EntryPoint); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.ExecuteUbergraph_BP_Vehicle_Radio // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

