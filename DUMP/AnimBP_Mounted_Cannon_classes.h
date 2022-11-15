// AnimBlueprintGeneratedClass AnimBP_Mounted_Cannon.AnimBP_Mounted_Cannon_C
// Size: 0xaf8 (Inherited: 0x620)
struct UAnimBP_Mounted_Cannon_C : UFortVehicleAnimInstance_MountedCannon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x628(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x630(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x638(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x640(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x660(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x680(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7a8(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x7c8(0x48)
	struct FAnimNode_TransitionResult ; // 0x810(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x838(0x28)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x860(0x110)
	struct FAnimNode_SequencePlayer ; // 0x970(0x40)
	struct FAnimNode_StateResult ; // 0x9b0(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9d0(0x40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa10(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa30(0xc8)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AnimBP_Mounted_Cannon.AnimBP_Mounted_Cannon_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Mounted_Cannon_AnimGraphNode_ModifyBone_9620BB6945E1C597ABB103BD90A5BF10(); // Function AnimBP_Mounted_Cannon.AnimBP_Mounted_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Mounted_Cannon_AnimGraphNode_ModifyBone_9620BB6945E1C597ABB103BD90A5BF10 // (BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Mounted_Cannon_AnimGraphNode_RotationOffsetBlendSpace_B4DDA68D41FF4C229C198C987977DC45(); // Function AnimBP_Mounted_Cannon.AnimBP_Mounted_Cannon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Mounted_Cannon_AnimGraphNode_RotationOffsetBlendSpace_B4DDA68D41FF4C229C198C987977DC45 // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AnimBP_Mounted_Cannon(int32_t EntryPoint); // Function AnimBP_Mounted_Cannon.AnimBP_Mounted_Cannon_C.ExecuteUbergraph_AnimBP_Mounted_Cannon // (Final|UbergraphFunction) // @ game+0xdef49c
};

