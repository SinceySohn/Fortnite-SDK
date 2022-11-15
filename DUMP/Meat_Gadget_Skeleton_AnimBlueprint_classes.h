// AnimBlueprintGeneratedClass Meat_Gadget_Skeleton_AnimBlueprint.Meat_Gadget_Skeleton_AnimBlueprint_C
// Size: 0xec8 (Inherited: 0x350)
struct UMeat_Gadget_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x388(0xc0)
	char pad_448[0x8]; // 0x448(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x450(0x990)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xde0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xe00(0x20)
	struct FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0xe20(0xa8)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Meat_Gadget_Skeleton_AnimBlueprint.Meat_Gadget_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Meat_Gadget_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function Meat_Gadget_Skeleton_AnimBlueprint.Meat_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Meat_Gadget_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0xdef49c
};

