// AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C
// Size: 0x3e0 (Inherited: 0x350)
struct UBP_Shotgun_BreakAction_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x388(0x48)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3d0(0x10)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Shotgun_BreakAction(int32_t EntryPoint); // Function BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C.ExecuteUbergraph_BP_Shotgun_BreakAction // (Final|UbergraphFunction) // @ game+0xdef49c
};

