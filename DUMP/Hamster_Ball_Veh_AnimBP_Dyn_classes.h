// AnimBlueprintGeneratedClass Hamster_Ball_Veh_AnimBP_Dyn.Hamster_Ball_Veh_AnimBP_Dyn_C
// Size: 0x1190 (Inherited: 0x6c0)
struct UHamster_Ball_Veh_AnimBP_Dyn_C : UFortOctopusVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6c8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x6d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x6d8(0x20)
	char pad_6F8[0x8]; // 0x6f8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x700(0x990)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1090(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x10b0(0xc0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1170(0x20)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Hamster_Ball_Veh_AnimBP_Dyn.Hamster_Ball_Veh_AnimBP_Dyn_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Hamster_Ball_Veh_AnimBP_Dyn(int32_t EntryPoint); // Function Hamster_Ball_Veh_AnimBP_Dyn.Hamster_Ball_Veh_AnimBP_Dyn_C.ExecuteUbergraph_Hamster_Ball_Veh_AnimBP_Dyn // (Final|UbergraphFunction) // @ game+0xdef49c
};

