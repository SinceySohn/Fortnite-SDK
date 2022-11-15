// AnimBlueprintGeneratedClass Tent_Pickup_Gadget_AnimBP.Tent_Pickup_Gadget_AnimBP_C
// Size: 0xe20 (Inherited: 0x350)
struct UTent_Pickup_Gadget_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	char pad_388[0x8]; // 0x388(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x390(0x990)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xd20(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xd40(0xc0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xe00(0x20)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Tent_Pickup_Gadget_AnimBP.Tent_Pickup_Gadget_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Tent_Pickup_Gadget_AnimBP(int32_t EntryPoint); // Function Tent_Pickup_Gadget_AnimBP.Tent_Pickup_Gadget_AnimBP_C.ExecuteUbergraph_Tent_Pickup_Gadget_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

