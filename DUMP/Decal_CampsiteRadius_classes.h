// BlueprintGeneratedClass Decal_CampsiteRadius.Decal_CampsiteRadius_C
// Size: 0x2b0 (Inherited: 0x290)
struct ADecal_CampsiteRadius_C : ADecalActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	float Timeline_0_NewTrack_0_3F0BD8B04637A74B1AF8E185EBE6CF28; // 0x298(0x04)
	enum class ETimelineDirection Timeline_0__Direction_3F0BD8B04637A74B1AF8E185EBE6CF28; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* ; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* Decal_MID; // 0x2a8(0x08)

	void UserConstructionScript(); // Function Decal_CampsiteRadius.Decal_CampsiteRadius_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function Decal_CampsiteRadius.Decal_CampsiteRadius_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function Decal_CampsiteRadius.Decal_CampsiteRadius_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Decal_CampsiteRadius.Decal_CampsiteRadius_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Decal_CampsiteRadius(int32_t EntryPoint); // Function Decal_CampsiteRadius.Decal_CampsiteRadius_C.ExecuteUbergraph_Decal_CampsiteRadius // (Final|UbergraphFunction) // @ game+0xdef49c
};

