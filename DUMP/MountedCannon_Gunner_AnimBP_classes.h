// AnimBlueprintGeneratedClass MountedCannon_Gunner_AnimBP.MountedCannon_Gunner_AnimBP_C
// Size: 0x2139 (Inherited: 0x1e60)
struct UMountedCannon_Gunner_AnimBP_C : UFortPlayerAnimInstance_MountedTurret {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e60(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x1e68(0x02)
	char pad_1E6A[0x6]; // 0x1e6a(0x06)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x1e70(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x1e78(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1e80(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1ea0(0x48)
	struct FAnimNode_SequencePlayer ; // 0x1ee8(0x40)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1f28(0x48)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1f70(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2038(0x40)
	struct FVector LocalLeftOffset; // 0x2078(0x18)
	struct FVector WorldPosLeft; // 0x2090(0x18)
	struct FRotator LocalRotLeftOffset; // 0x20a8(0x18)
	struct FRotator WorldRotLeft; // 0x20c0(0x18)
	struct FVector LocalRightOffset; // 0x20d8(0x18)
	struct FRotator LocalRotRightOffset; // 0x20f0(0x18)
	struct FRotator WorldRotRight; // 0x2108(0x18)
	struct FVector WorldPosRight; // 0x2120(0x18)
	bool isTurning; // 0x2138(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function MountedCannon_Gunner_AnimBP.MountedCannon_Gunner_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MountedCannon_Gunner_AnimBP(int32_t EntryPoint); // Function MountedCannon_Gunner_AnimBP.MountedCannon_Gunner_AnimBP_C.ExecuteUbergraph_MountedCannon_Gunner_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

