// BlueprintGeneratedClass BP_SpectatorPawn.BP_SpectatorPawn_C
// Size: 0x428 (Inherited: 0x400)
struct ABP_SpectatorPawn_C : AFortReplaySpectatorPawnBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	bool bIsTargetSkydiving; // 0x408(0x01)
	bool bIsTargetParachuting; // 0x409(0x01)
	bool bIsSkydivingAudioEnabled; // 0x40a(0x01)
	char pad_40B[0x5]; // 0x40b(0x05)
	struct USoundBase* CurrentSkydivingSound; // 0x410(0x08)
	struct UAudioComponent* SkydivingAudioLoop; // 0x418(0x08)
	struct AFortPlayerPawnAthena* Current Player Pawn; // 0x420(0x08)

	void SetSkydivingAudioEnabled(bool Enabled); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.SetSkydivingAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct USoundBase* GetSkydivingSound(); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.GetSkydivingSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Handle Parachute Audio State(); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.Handle Parachute Audio State // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_SpectatorPawn(int32_t EntryPoint); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.ExecuteUbergraph_BP_SpectatorPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

