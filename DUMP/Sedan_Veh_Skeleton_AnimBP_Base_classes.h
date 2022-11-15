// AnimBlueprintGeneratedClass Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C
// Size: 0x3961 (Inherited: 0x610)
struct USedan_Veh_Skeleton_AnimBP_Base_C : UFortGoatVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x610(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x618(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x620(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x628(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x648(0x20)
	struct FAnimNode_ModifyBone ; // 0x668(0x128)
	struct FAnimNode_ModifyBone ; // 0x790(0x128)
	struct FAnimNode_ModifyBone ; // 0x8b8(0x128)
	struct FAnimNode_ModifyBone ; // 0x9e0(0x128)
	struct FAnimNode_ModifyBone ; // 0xb08(0x128)
	struct FAnimNode_ModifyBone ; // 0xc30(0x128)
	struct FAnimNode_ModifyBone ; // 0xd58(0x128)
	struct FAnimNode_ModifyBone ; // 0xe80(0x128)
	struct FAnimNode_ModifyBone ; // 0xfa8(0x128)
	struct FAnimNode_ModifyBone ; // 0x10d0(0x128)
	struct FAnimNode_ModifyBone ; // 0x11f8(0x128)
	struct FAnimNode_ModifyBone ; // 0x1320(0x128)
	struct FAnimNode_ModifyBone ; // 0x1448(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1570(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1590(0x10)
	struct FAnimNode_RigidBody ; // 0x15a0(0x990)
	struct FAnimNode_ModifyBone ; // 0x1f30(0x128)
	char pad_2058[0x8]; // 0x2058(0x08)
	struct FAnimNode_RigidBody ; // 0x2060(0x990)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x29f0(0x990)
	struct FAnimNode_ModifyBone ; // 0x3380(0x128)
	struct FAnimNode_ModifyBone ; // 0x34a8(0x128)
	struct FAnimNode_ModifyBone ; // 0x35d0(0x128)
	struct FAnimNode_ModifyBone ; // 0x36f8(0x128)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3820(0x128)
	double triggerTrunk; // 0x3948(0x08)
	double TriggerMirrorL; // 0x3950(0x08)
	double TriggerMirrorR; // 0x3958(0x08)
	bool HasTireMod; // 0x3960(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Sedan_Veh_Skeleton_AnimBP_Base(int32_t EntryPoint); // Function Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C.ExecuteUbergraph_Sedan_Veh_Skeleton_AnimBP_Base // (Final|UbergraphFunction) // @ game+0xdef49c
};

