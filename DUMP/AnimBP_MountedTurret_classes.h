// AnimBlueprintGeneratedClass AnimBP_MountedTurret.AnimBP_MountedTurret_C
// Size: 0xda0 (Inherited: 0x610)
struct UAnimBP_MountedTurret_C : UFortMountedTurretAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x610(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x618(0x0c)
	char pad_624[0x4]; // 0x624(0x04)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x628(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x630(0x08)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x638(0x48)
	struct FAnimNode_TransitionResult ; // 0x680(0x28)
	struct FAnimNode_TransitionResult ; // 0x6a8(0x28)
	struct FAnimNode_TransitionResult ; // 0x6d0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x6f8(0x28)
	struct FAnimNode_SequenceEvaluator ; // 0x720(0x40)
	struct FAnimNode_StateResult ; // 0x760(0x20)
	struct FAnimNode_SequencePlayer ; // 0x780(0x40)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x7c0(0x110)
	struct FAnimNode_StateResult ; // 0x8d0(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8f0(0x48)
	struct FAnimNode_SequencePlayer ; // 0x938(0x40)
	struct FAnimNode_SequencePlayer ; // 0x978(0x40)
	struct FAnimNode_StateResult ; // 0x9b8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9d8(0x40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa18(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa38(0xc8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb00(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xb20(0x128)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xc48(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xc68(0x20)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xc88(0x40)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xcc8(0xc8)
	bool isTurning; // 0xd90(0x01)
	char pad_D91[0x7]; // 0xd91(0x07)
	double AimingYawLastFrame; // 0xd98(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3(); // Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3 // (BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_RotationOffsetBlendSpace_63329B54429754D46B24A7924B9E9D96(); // Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_RotationOffsetBlendSpace_63329B54429754D46B24A7924B9E9D96 // (BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AnimBP_MountedTurret(int32_t EntryPoint); // Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.ExecuteUbergraph_AnimBP_MountedTurret // (Final|UbergraphFunction) // @ game+0xdef49c
};

