// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// Size: 0xa10 (Inherited: 0x9f0)
struct AFortnitePartyHeroSelect_Camera_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f0(0x08)
	struct UCameraComponent* ; // 0x9f8(0x08)
	bool MouseDown; // 0xa00(0x01)
	char pad_A01[0x7]; // 0xa01(0x07)
	struct AFortPlayerPawn* CachedPawn; // 0xa08(0x08)

	void HandleMousePress(); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleMouseRelease(); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void (struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C. // (BlueprintEvent) // @ game+0xdef49c
	void (struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C. // (BlueprintEvent) // @ game+0xdef49c
	void (struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C. // (BlueprintEvent) // @ game+0xdef49c
	void (struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C. // (BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32_t EntryPoint); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

