// AnimBlueprintGeneratedClass SK_SpicySoda_AnimBP.SK_SpicySoda_AnimBP_C
// Size: 0x1458 (Inherited: 0x350)
struct USK_SpicySoda_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x368(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x388(0x20)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3b0(0x510)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x8c0(0xc0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x980(0x20)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x9a0(0x990)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1330(0x128)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function SK_SpicySoda_AnimBP.SK_SpicySoda_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SK_SpicySoda_AnimBP(int32_t EntryPoint); // Function SK_SpicySoda_AnimBP.SK_SpicySoda_AnimBP_C.ExecuteUbergraph_SK_SpicySoda_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

