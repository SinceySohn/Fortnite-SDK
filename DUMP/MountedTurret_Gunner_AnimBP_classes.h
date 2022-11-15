// AnimBlueprintGeneratedClass MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C
// Size: 0x25b9 (Inherited: 0x1e60)
struct UMountedTurret_Gunner_AnimBP_C : UFortPlayerAnimInstance_MountedTurret {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e60(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x1e68(0x14)
	char pad_1E7C[0x4]; // 0x1e7c(0x04)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x1e80(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x1e88(0x08)
	struct FAnimNode_LegIK ; // 0x1e90(0xf8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1f88(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1fa8(0x20)
	struct FAnimNode_LegIK AnimGraphNode_LegIK; // 0x1fc8(0xf8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x20c0(0x20)
	struct FAnimNode_Slot ; // 0x20e0(0x48)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x2128(0x40)
	struct FAnimNode_ApplyAdditive ; // 0x2168(0xc8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2230(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2278(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x22c0(0xc8)
	struct FAnimNode_RefPose ; // 0x2388(0x10)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2398(0x40)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x23d8(0x110)
	struct FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0x24e8(0x10)
	struct FVector LocalLeftOffset; // 0x24f8(0x18)
	struct FVector WorldPosLeft; // 0x2510(0x18)
	struct FRotator LocalRotLeftOffset; // 0x2528(0x18)
	struct FRotator WorldRotLeft; // 0x2540(0x18)
	struct FVector LocalRightOffset; // 0x2558(0x18)
	struct FRotator LocalRotRightOffset; // 0x2570(0x18)
	struct FRotator WorldRotRight; // 0x2588(0x18)
	struct FVector WorldPosRight; // 0x25a0(0x18)
	bool isTurning; // 0x25b8(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87(); // Function MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87 // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MountedTurret_Gunner_AnimBP(int32_t EntryPoint); // Function MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C.ExecuteUbergraph_MountedTurret_Gunner_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

