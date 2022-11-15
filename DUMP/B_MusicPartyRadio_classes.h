// BlueprintGeneratedClass B_MusicPartyRadio.B_MusicPartyRadio_C
// Size: 0x2f0 (Inherited: 0x2c8)
struct AB_MusicPartyRadio_C : AFortMediaStreamingRadio {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UFortQuartzSynchronizer* FortQuartzSynchronizer; // 0x2d0(0x08)
	struct UMediaSoundComponent* MediaSound; // 0x2d8(0x08)
	bool bRadioIsActive; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	int32_t StationIndex; // 0x2e4(0x04)
	struct UMusicPartyManagerComponent_C* Manager; // 0x2e8(0x08)

	void GetQuartzClock(struct UQuartzClockHandle*& Quartz Clock); // Function B_MusicPartyRadio.B_MusicPartyRadio_C.GetQuartzClock // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_StationIndex(); // Function B_MusicPartyRadio.B_MusicPartyRadio_C.OnRep_StationIndex // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ChangeStation(int32_t Station Index); // Function B_MusicPartyRadio.B_MusicPartyRadio_C.ChangeStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopRadio(); // Function B_MusicPartyRadio.B_MusicPartyRadio_C.StopRadio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartRadio(); // Function B_MusicPartyRadio.B_MusicPartyRadio_C.StartRadio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__B_HollowBasePartyController_FortQuartzSynchronizer_K2Node_ComponentBoundEvent_0_OnTimestampEvent__DelegateSignature(struct FFortTimestampEvent Event); // Function B_MusicPartyRadio.B_MusicPartyRadio_C.BndEvt__B_HollowBasePartyController_FortQuartzSynchronizer_K2Node_ComponentBoundEvent_0_OnTimestampEvent__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_MusicPartyRadio.B_MusicPartyRadio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_MusicPartyRadio(int32_t EntryPoint); // Function B_MusicPartyRadio.B_MusicPartyRadio_C.ExecuteUbergraph_B_MusicPartyRadio // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

