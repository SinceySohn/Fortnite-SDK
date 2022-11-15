// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
// Size: 0x3e0 (Inherited: 0x350)
struct USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x388(0x48)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x3d0(0x10)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0xdef49c
};

