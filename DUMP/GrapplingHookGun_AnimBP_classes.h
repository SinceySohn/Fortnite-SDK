// AnimBlueprintGeneratedClass GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C
// Size: 0xe91 (Inherited: 0x350)
struct UGrapplingHookGun_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x388(0x10)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x398(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4c0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4e0(0x20)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x500(0x990)
	bool IsFired; // 0xe90(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GrapplingHookGun_AnimBP(int32_t EntryPoint); // Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.ExecuteUbergraph_GrapplingHookGun_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

