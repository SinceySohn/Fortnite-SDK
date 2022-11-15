// AnimBlueprintGeneratedClass FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C
// Size: 0x1269 (Inherited: 0x500)
struct UFloppingRabbitLayerAnimBP_C : UFortItemLayerAnimInstance_FullLocomotion {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x508(0x06)
	char pad_50E[0x2]; // 0x50e(0x02)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x510(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x518(0x08)
	struct FAnimNode_Root ; // 0x520(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x540(0xc0)
	struct FAnimNode_Root ; // 0x600(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x620(0xc0)
	struct FAnimNode_Root ; // 0x6e0(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x700(0xc0)
	struct FAnimNode_LinkedInputPose ; // 0x7c0(0xc0)
	struct FAnimNode_Root ; // 0x880(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x8a0(0xc0)
	struct FAnimNode_Root ; // 0x960(0x20)
	struct FAnimNode_SequencePlayer ; // 0x980(0x40)
	struct FAnimNode_BlendListByBool ; // 0x9c0(0x48)
	struct FAnimNode_SequencePlayer ; // 0xa08(0x40)
	struct FAnimNode_Root ; // 0xa48(0x20)
	struct FAnimNode_SequencePlayer ; // 0xa68(0x40)
	struct FAnimNode_BlendListByBool ; // 0xaa8(0x48)
	struct FAnimNode_SequencePlayer ; // 0xaf0(0x40)
	struct FAnimNode_Root ; // 0xb30(0x20)
	struct FAnimNode_SequencePlayer ; // 0xb50(0x40)
	struct FAnimNode_BlendListByBool ; // 0xb90(0x48)
	struct FAnimNode_SequencePlayer ; // 0xbd8(0x40)
	struct FAnimNode_Root ; // 0xc18(0x20)
	struct FAnimNode_SequencePlayer ; // 0xc38(0x40)
	struct FAnimNode_BlendListByBool ; // 0xc78(0x48)
	struct FAnimNode_SequencePlayer ; // 0xcc0(0x40)
	struct FAnimNode_Root ; // 0xd00(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xd20(0xc0)
	struct FAnimNode_Root ; // 0xde0(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xe00(0xc0)
	struct FAnimNode_Root ; // 0xec0(0x20)
	struct FAnimNode_Root ; // 0xee0(0x20)
	struct FAnimNode_Root ; // 0xf00(0x20)
	struct FAnimNode_Root ; // 0xf20(0x20)
	struct FAnimNode_Root ; // 0xf40(0x20)
	struct FAnimNode_Root ; // 0xf60(0x20)
	struct FAnimNode_Root ; // 0xf80(0x20)
	struct FAnimNode_Root ; // 0xfa0(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xfc0(0xc0)
	struct FAnimNode_Root ; // 0x1080(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x10a0(0xc0)
	struct FAnimNode_Root ; // 0x1160(0x20)
	struct FAnimNode_SequencePlayer ; // 0x1180(0x40)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x11c0(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1208(0x40)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1248(0x20)
	bool OneHandGrip; // 0x1268(0x01)

	void ItemPreIK(struct FPoseLink InPose_PreIK, struct FPoseLink& ItemPreIK); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemPreIK // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemFullBodyOverride(struct FPoseLink InPoseFullBody, struct FPoseLink& ItemFullBodyOverride); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemAimOffset(struct FPoseLink InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, struct FPoseLink InPose_UpperLowerPreMeleeAO, struct FPoseLink& ItemAimOffset); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemAimOffset // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemSkeletalControl(struct FPoseLink InPose, struct FPoseLink& ItemSkeletalControl); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSkeletalControl // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemSwimJumpSurfaceEnd(struct FPoseLink& ItemSwimJumpSurfaceEnd); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpSurfaceEnd // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemSwimJumpSurfaceLoop(struct FPoseLink& ItemSwimJumpSurfaceLoop); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpSurfaceLoop // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemSwimJumpFallLoop(struct FPoseLink& ItemSwimJumpFallLoop); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpFallLoop // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemSwimJumpStartLoop(struct FPoseLink& ItemSwimJumpStartLoop); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpStartLoop // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemUpperBody(struct FPoseLink InPoseUpperBody, struct FFortAnimInput_AdjustedAim InputParam, struct FPoseLink& ItemUpperBody); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemUpperBody // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemFullBodySprint(struct FPoseLink InPoseSprint, struct FPoseLink& ItemFullBodySprint); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFullBodySprint // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemIdleAdditive(struct FPoseLink InPoseIdleAdditive, struct FPoseLink& ItemIdleAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemIdleAdditive // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemCrouchTurningAdditive(struct FPoseLink& ItemCrouchTurningAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemCrouchTurningAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemSlopeSliding(struct FPoseLink& ItemSlopeSliding); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSlopeSliding // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemJumpUpAdditive(struct FPoseLink& ItemJumpUpAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJumpUpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemJumpLoopAdditive(struct FPoseLink& ItemJumpLoopAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJumpLoopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemFallAdditive(struct FPoseLink& ItemFallAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFallAdditive // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemFallLandAdditive(struct FPoseLink& ItemFallLandAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFallLandAdditive // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemJetPackStartAdditive(struct FPoseLink& ItemJetPackStartAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJetPackStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemJetPackJumpAdditive(struct FPoseLink& ItemJetPackJumpAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJetPackJumpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemZipLineStartAdditive(struct FPoseLink& ItemZipLineStartAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemZipLineStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemFlyModeStartAdditive(struct FPoseLink& ItemFlyModeStartAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFlyModeStartAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemFlyModeLoopAdditive(struct FPoseLink& ItemFlyModeLoopAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemFlyModeLoopAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemJogStartAdditive(struct FPoseLink InPoseJogStartAdditive, struct FPoseLink& ItemJogStartAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogStartAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemJogStopAdditive(struct FPoseLink InPoseJogStopAdditive, struct FPoseLink& ItemJogStopAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogStopAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemJogPrePivotAdditive(struct FPoseLink InPosePrePivotAdditive, struct FPoseLink& ItemJogPrePivotAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogPrePivotAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemJogPostPivotAdditive(struct FPoseLink InPosePostPivotAdditive, struct FPoseLink& ItemJogPostPivotAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemJogPostPivotAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemLowerBodyMovement(struct FPoseLink InPoseLowerBodyMovement, struct FPoseLink& ItemLowerBodyMovement); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyMovement // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemLowerBodyLeanAdditive(struct FPoseLink InPoseLowerBodyLeanAdditive, struct FPoseLink& ItemLowerBodyLeanAdditive); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyLeanAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemLowerBodyJogStart(struct FPoseLink InPoseLowerBodyJogStart, struct FPoseLink& ItemLowerBodyJogStart); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogStart // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemLowerBodyJogStop(struct FPoseLink InPoseLowerBodyJogStop, struct FPoseLink& ItemLowerBodyJogStop); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogStop // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemLowerBodyJogPrePivot(struct FPoseLink InPoseLowerBodyJogPrePivot, struct FPoseLink& ItemLowerBodyJogPrePivot); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogPrePivot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemLowerBodyJogPostPivot(struct FPoseLink InPoseLowerBodyJogPostPivot, struct FPoseLink& ItemLowerBodyJogPostPivot); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemLowerBodyJogPostPivot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ItemRelaxedEntry(struct FPoseLink InPoseRelaxedEntry, struct FPoseLink& ItemRelaxedEntry); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemRelaxedEntry // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void ItemSwimJumpStart(struct FPoseLink& ItemSwimJumpStart); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ItemSwimJumpStart // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void AnimGraph(struct FPoseLink& AnimGraph); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FloppingRabbitLayerAnimBP(int32_t EntryPoint); // Function FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C.ExecuteUbergraph_FloppingRabbitLayerAnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

