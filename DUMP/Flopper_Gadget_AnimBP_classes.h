// AnimBlueprintGeneratedClass Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C
// Size: 0x920 (Inherited: 0x350)
struct UFlopper_Gadget_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x368(0x10)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x378(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x398(0x20)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FAnimNode_Trail ; // 0x3c0(0x2a0)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x660(0x2a0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x900(0x20)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Flopper_Gadget_AnimBP(int32_t EntryPoint); // Function Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C.ExecuteUbergraph_Flopper_Gadget_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

