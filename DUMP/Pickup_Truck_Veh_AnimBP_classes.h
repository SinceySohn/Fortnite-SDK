// AnimBlueprintGeneratedClass Pickup_Truck_Veh_AnimBP.Pickup_Truck_Veh_AnimBP_C
// Size: 0x3391 (Inherited: 0x610)
struct UPickup_Truck_Veh_AnimBP_C : UFortGoatVehicleAnimInstance {
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
	struct FAnimNode_RigidBody ; // 0x1f30(0x990)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x28c0(0x990)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3250(0x128)
	double triggerTailgate; // 0x3378(0x08)
	double TriggerMirrorL; // 0x3380(0x08)
	double TriggerMirrorR; // 0x3388(0x08)
	bool HasTireMod; // 0x3390(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Pickup_Truck_Veh_AnimBP.Pickup_Truck_Veh_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Pickup_Truck_Veh_AnimBP.Pickup_Truck_Veh_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Pickup_Truck_Veh_AnimBP(int32_t EntryPoint); // Function Pickup_Truck_Veh_AnimBP.Pickup_Truck_Veh_AnimBP_C.ExecuteUbergraph_Pickup_Truck_Veh_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

