// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
// Size: 0xf20 (Inherited: 0xef0)
struct ACinematicSequenceDeviceBase : ABuildingProp {
	char pad_EF0[0x8]; // 0xef0(0x08)
	struct ULevelSequence* Sequence; // 0xef8(0x08)
	struct ALevelSequenceActor* LevelSequenceActor; // 0xf00(0x08)
	struct AFortPlayerController* InstigatingController; // 0xf08(0x08)
	char InstigatingTeam; // 0xf10(0x01)
	char pad_F11[0x3]; // 0xf11(0x03)
	char bLoopPlayback : 1; // 0xf14(0x01)
	char bRestoreState : 1; // 0xf14(0x01)
	char bAutoPlay : 1; // 0xf14(0x01)
	char pad_F14_3 : 5; // 0xf14(0x01)
	char pad_F15[0x3]; // 0xf15(0x03)
	enum class ECinematicSequenceVisibility Visibility; // 0xf18(0x01)
	bool bLevelSequenceActorAlwaysRelevant; // 0xf19(0x01)
	char pad_F1A[0x6]; // 0xf1a(0x06)

	void Stop(); // Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x67f6910
	void Play(); // Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x67f68fc
	void Pause(); // Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x67f68d4
	void HandleSequencePlayerCreated(struct ULevelSequencePlayer* Player); // Function CRD_CinematicSequence.CinematicSequenceDeviceBase.HandleSequencePlayerCreated // (Native|Event|Protected|BlueprintEvent) // @ game+0x659d1c8
	struct UMovieSceneSequencePlayer* GetSequencePlayer(); // Function CRD_CinematicSequence.CinematicSequenceDeviceBase.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67f68b4
};

