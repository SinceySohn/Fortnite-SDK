// BlueprintGeneratedClass BP_HoverDronePawn.BP_HoverDronePawn_C
// Size: 0x4a8 (Inherited: 0x440)
struct ABP_HoverDronePawn_C : AHoverDronePawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	bool WindAudioEnabled; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct UAudioComponent* AltitudeWindAudioComp; // 0x450(0x08)
	double WindAudioAltMin; // 0x458(0x08)
	double WindAudioAltMax; // 0x460(0x08)
	double WindAudioVolMin; // 0x468(0x08)
	double WindAudioVolMax; // 0x470(0x08)
	struct USoundBase* SoundWindMovementLoop; // 0x478(0x08)
	struct USoundBase* SoundWindAltitudeLoop; // 0x480(0x08)
	double CurrentAltitudeWindVolume; // 0x488(0x08)
	double Speed; // 0x490(0x08)
	struct UAudioComponent* MovementWindAudioComp; // 0x498(0x08)
	double CurrentMovementWindVolume; // 0x4a0(0x08)

	void GetWindVolumeFromAltitude(double Altitude, double& Volume); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.GetWindVolumeFromAltitude // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetWindAudioEnabled(bool Enabled); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.SetWindAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Update Wind Audio(); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.Update Wind Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceivePossessed(struct AController* NewController); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceivePossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveUnpossessed(struct AController* OldController); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveUnpossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_HoverDronePawn(int32_t EntryPoint); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ExecuteUbergraph_BP_HoverDronePawn // (Final|UbergraphFunction) // @ game+0xdef49c
};

