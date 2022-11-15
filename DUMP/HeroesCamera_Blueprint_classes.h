// BlueprintGeneratedClass HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
// Size: 0xa08 (Inherited: 0x9f0)
struct AHeroesCamera_Blueprint_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f0(0x08)
	bool MouseDown; // 0x9f8(0x01)
	char pad_9F9[0x7]; // 0x9f9(0x07)
	struct AFortPlayerPawn* Cached Pawn; // 0xa00(0x08)

	void HandleMousePress(); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleMouseRelease(); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMouseRelease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (struct FKey Key); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C. // (BlueprintEvent) // @ game+0xdef49c
	void (struct FKey Key); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C. // (BlueprintEvent) // @ game+0xdef49c
	void (struct FKey Key); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C. // (BlueprintEvent) // @ game+0xdef49c
	void (struct FKey Key); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C. // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_HeroesCamera_Blueprint(int32_t EntryPoint); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

