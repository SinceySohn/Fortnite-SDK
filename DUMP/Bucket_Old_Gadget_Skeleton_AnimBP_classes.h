// AnimBlueprintGeneratedClass Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C
// Size: 0x12e8 (Inherited: 0x6f0)
struct UBucket_Old_Gadget_Skeleton_AnimBP_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6f8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x700(0x08)
	char pad_708[0x8]; // 0x708(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x710(0x990)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x10a0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x10c0(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x10e0(0xc0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x11a0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x11c0(0x128)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int32_t EntryPoint); // Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

