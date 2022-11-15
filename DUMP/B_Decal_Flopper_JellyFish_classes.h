// BlueprintGeneratedClass B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C
// Size: 0x2b0 (Inherited: 0x290)
struct AB_Decal_Flopper_JellyFish_C : ADecalActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	float FadeIn_NewTrack_0_2F2CC4164B50B3516AA9909D745FF7CB; // 0x298(0x04)
	enum class ETimelineDirection FadeIn__Direction_2F2CC4164B50B3516AA9909D745FF7CB; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* FadeIn; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* Decal_MID; // 0x2a8(0x08)

	void UserConstructionScript(); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FadeIn__FinishedFunc(); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void FadeIn__UpdateFunc(); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Decal_Flopper_JellyFish(int32_t EntryPoint); // Function B_Decal_Flopper_JellyFish.B_Decal_Flopper_JellyFish_C.ExecuteUbergraph_B_Decal_Flopper_JellyFish // (Final|UbergraphFunction) // @ game+0xdef49c
};

