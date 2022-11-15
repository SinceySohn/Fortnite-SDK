// BlueprintGeneratedClass B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C
// Size: 0xb68 (Inherited: 0xb1c)
struct AB_Prj_Athena_AppleSun_Attached_C : AB_Prj_Athena_AppleSun__C {
	char pad_B1C[0x4]; // 0xb1c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	float DistanceFromPlayer_RelativeZpos_7385E36642C7F3056E2198B8275ED834; // 0xb28(0x04)
	enum class ETimelineDirection DistanceFromPlayer__Direction_7385E36642C7F3056E2198B8275ED834; // 0xb2c(0x01)
	char pad_B2D[0x3]; // 0xb2d(0x03)
	struct UTimelineComponent* DistanceFromPlayer; // 0xb30(0x08)
	bool BGA_Spawned; // 0xb38(0x01)
	char pad_B39[0x7]; // 0xb39(0x07)
	struct FScalableFloat LeadDistance; // 0xb40(0x28)

	void DistanceFromPlayer__FinishedFunc(); // Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.DistanceFromPlayer__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void DistanceFromPlayer__UpdateFunc(); // Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.DistanceFromPlayer__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_AppleSun_Attached(int32_t EntryPoint); // Function B_Prj_Athena_AppleSun_Attached.B_Prj_Athena_AppleSun_Attached_C.ExecuteUbergraph_B_Prj_Athena_AppleSun_Attached // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

