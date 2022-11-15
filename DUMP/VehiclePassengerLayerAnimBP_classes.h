// AnimBlueprintGeneratedClass VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C
// Size: 0xfc0 (Inherited: 0x4e0)
struct UVehiclePassengerLayerAnimBP_C : UFortVehicleLayerAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x4e8(0x18)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x500(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x508(0x08)
	struct FAnimNode_Root ; // 0x510(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x530(0xc0)
	struct FAnimNode_Root ; // 0x5f0(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x610(0xc0)
	struct FAnimNode_Root ; // 0x6d0(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x6f0(0xc0)
	struct FAnimNode_LinkedInputPose ; // 0x7b0(0xc0)
	struct FAnimNode_Root ; // 0x870(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x890(0xc0)
	struct FAnimNode_RotationOffsetBlendSpace ; // 0x950(0x110)
	struct FAnimNode_RotationOffsetBlendSpace ; // 0xa60(0x110)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0xb70(0x110)
	struct FAnimNode_LinkedInputPose ; // 0xc80(0xc0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xd40(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xd88(0x100)
	struct FAnimNode_UseCachedPose ; // 0xe88(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xeb0(0x28)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xed8(0xc0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xf98(0x20)
	double DisableNoise; // 0xfb8(0x08)

	void VehicleFinalPoseOverride(struct FPoseLink InFinalPose, struct FPoseLink& VehicleFinalPoseOverride); // Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.VehicleFinalPoseOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void VehicleFullBodyOverride(struct FPoseLink InPoseFullBody, struct FPoseLink& VehicleFullBodyOverride); // Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.VehicleFullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void VehicleLowerBodyOverride(struct FPoseLink InPoseLowerBodyDefault, struct FPoseLink InPoseUpperBody, struct FPoseLink& VehicleLowerBodyOverride); // Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.VehicleLowerBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void VehicleSplitBodyOverride(struct FPoseLink InPoseSplitBody, struct FPoseLink InPoseUpperAndLowerBody, struct FFortAnimInput_TurnInPlace TurnInPlace, struct FPoseLink InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink& VehicleSplitBodyOverride); // Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.VehicleSplitBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void AnimGraph(struct FPoseLink& AnimGraph); // Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_VehiclePassengerLayerAnimBP(int32_t EntryPoint); // Function VehiclePassengerLayerAnimBP.VehiclePassengerLayerAnimBP_C.ExecuteUbergraph_VehiclePassengerLayerAnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

