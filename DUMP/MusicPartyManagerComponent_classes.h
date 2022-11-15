// BlueprintGeneratedClass MusicPartyManagerComponent.MusicPartyManagerComponent_C
// Size: 0xd8 (Inherited: 0xa0)
struct UMusicPartyManagerComponent_C : UGameFrameworkComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct AB_MusicPartyRadio_C* PartyRadioActor; // 0xa8(0x08)
	struct TArray<struct UMusicPartyPropComponent_C*> PartySpeakerComponents; // 0xb0(0x10)
	bool bIsPartyActive; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t StationIndex; // 0xc4(0x04)
	struct FMulticastInlineDelegate OnTimestampEvent; // 0xc8(0x10)

	void GetQuartzClock(struct UQuartzClockHandle*& Quartz Clock); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.GetQuartzClock // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void OnRep_StationIndex(); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.OnRep_StationIndex // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_PartyRadioActor(); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.OnRep_PartyRadioActor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnComponentsChanged(); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.OnComponentsChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnregisterSpeakerComponent(struct UMusicPartyPropComponent_C*& Component); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.UnregisterSpeakerComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RegisterSpeakerComponent(struct UMusicPartyPropComponent_C*& Component); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.RegisterSpeakerComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ChangeStation(int32_t Station Index); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.ChangeStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MusicPartyManagerComponent(int32_t EntryPoint); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.ExecuteUbergraph_MusicPartyManagerComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnTimestampEvent__DelegateSignature(struct FFortTimestampEvent Event); // Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.OnTimestampEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

