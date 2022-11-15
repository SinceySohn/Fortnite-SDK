// AnimBlueprintGeneratedClass REcoilRifle_BP.REcoilRifle_BP_C
// Size: 0x3e0 (Inherited: 0x350)
struct UREcoilRifle_BP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x388(0x10)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x398(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function REcoilRifle_BP.REcoilRifle_BP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_REcoilRifle_BP(int32_t EntryPoint); // Function REcoilRifle_BP.REcoilRifle_BP_C.ExecuteUbergraph_REcoilRifle_BP // (Final|UbergraphFunction) // @ game+0xdef49c
};

