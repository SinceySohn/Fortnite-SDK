// AnimBlueprintGeneratedClass WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C
// Size: 0x6e8 (Inherited: 0x440)
struct UWrapBandages_Prop_AnimBP_C : UFortItemAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x448(0x02)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x450(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x458(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x460(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x480(0x40)
	struct FAnimNode_Slot ; // 0x4c0(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x508(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x550(0x100)
	struct FAnimNode_UseCachedPose ; // 0x650(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x678(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x6a0(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WrapBandages_Prop_AnimBP(int32_t EntryPoint); // Function WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C.ExecuteUbergraph_WrapBandages_Prop_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

