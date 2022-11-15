// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// Size: 0xa61 (Inherited: 0x9f0)
struct AFortnitePartyBackdrop_Camera_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f0(0x08)
	struct UArrowComponent* Arrow; // 0x9f8(0x08)
	struct FTransform SavedTransform; // 0xa00(0x60)
	bool Active; // 0xa60(0x01)

	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Reset Location(); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ManualActivate(); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32_t EntryPoint); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

