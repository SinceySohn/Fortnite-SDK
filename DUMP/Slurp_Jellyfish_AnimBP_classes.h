// AnimBlueprintGeneratedClass Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C
// Size: 0xd70 (Inherited: 0x350)
struct USlurp_Jellyfish_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x368(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x388(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3a8(0x10)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3b8(0x20)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x3e0(0x990)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Slurp_Jellyfish_AnimBP(int32_t EntryPoint); // Function Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C.ExecuteUbergraph_Slurp_Jellyfish_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

