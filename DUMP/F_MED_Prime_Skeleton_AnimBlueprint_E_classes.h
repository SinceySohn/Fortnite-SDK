// AnimBlueprintGeneratedClass F_MED_Prime_Skeleton_AnimBlueprint_E.F_MED_Prime_Skeleton_AnimBlueprint_E_C
// Size: 0x6688 (Inherited: 0x6f0)
struct UF_MED_Prime_Skeleton_AnimBlueprint_E_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6f8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x700(0x08)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x708(0x1d0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x8d8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8f8(0x20)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x918(0x470)
	struct FAnimNode_Constraint ; // 0xd88(0x108)
	struct FAnimNode_Constraint ; // 0xe90(0x108)
	struct FAnimNode_Constraint ; // 0xf98(0x108)
	struct FAnimNode_Constraint ; // 0x10a0(0x108)
	struct FAnimNode_Constraint ; // 0x11a8(0x108)
	struct FAnimNode_Constraint ; // 0x12b0(0x108)
	struct FAnimNode_Constraint ; // 0x13b8(0x108)
	struct FAnimNode_Constraint ; // 0x14c0(0x108)
	struct FAnimNode_ModifyBone ; // 0x15c8(0x128)
	struct FAnimNode_ModifyBone ; // 0x16f0(0x128)
	struct FAnimNode_Constraint ; // 0x1818(0x108)
	struct FAnimNode_RigidBody ; // 0x1920(0x990)
	struct FAnimNode_AnimDynamics ; // 0x22b0(0x510)
	struct FAnimNode_AnimDynamics ; // 0x27c0(0x510)
	struct FAnimNode_AnimDynamics ; // 0x2cd0(0x510)
	struct FAnimNode_AnimDynamics ; // 0x31e0(0x510)
	struct FAnimNode_AnimDynamics ; // 0x36f0(0x510)
	struct FAnimNode_AnimDynamics ; // 0x3c00(0x510)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4110(0x510)
	struct FAnimNode_RigidBody ; // 0x4620(0x990)
	struct FAnimNode_ModifyBone ; // 0x4fb0(0x128)
	struct FAnimNode_Constraint AnimGraphNode_Constraint; // 0x50d8(0x108)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x51e0(0x20)
	struct FAnimNode_ModifyBone ; // 0x5200(0x128)
	struct FAnimNode_ModifyBone ; // 0x5328(0x128)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x5450(0x990)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x5de0(0x128)
	struct FGravityOverrideParamsStruct Gravity Override Params; // 0x5f08(0x750)
	struct FVector Gravity Override; // 0x6658(0x18)
	double Neck Alpha; // 0x6670(0x08)
	double Head Tilt Alpha; // 0x6678(0x08)
	double Skydive Alpha; // 0x6680(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function F_MED_Prime_Skeleton_AnimBlueprint_E.F_MED_Prime_Skeleton_AnimBlueprint_E_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function F_MED_Prime_Skeleton_AnimBlueprint_E.F_MED_Prime_Skeleton_AnimBlueprint_E_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_F_MED_Prime_Skeleton_AnimBlueprint_E(int32_t EntryPoint); // Function F_MED_Prime_Skeleton_AnimBlueprint_E.F_MED_Prime_Skeleton_AnimBlueprint_E_C.ExecuteUbergraph_F_MED_Prime_Skeleton_AnimBlueprint_E // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

