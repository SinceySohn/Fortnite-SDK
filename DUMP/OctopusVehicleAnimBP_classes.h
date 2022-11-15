// AnimBlueprintGeneratedClass OctopusVehicleAnimBP.OctopusVehicleAnimBP_C
// Size: 0x1638 (Inherited: 0x6c0)
struct UOctopusVehicleAnimBP_C : UFortOctopusVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x6c8(0x0c)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6d8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x6e0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x6e8(0x20)
	struct FAnimNode_ModifyBone ; // 0x708(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x830(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x850(0x20)
	struct FAnimNode_ModifyBone ; // 0x870(0x128)
	struct FAnimNode_ModifyBone ; // 0x998(0x128)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xac0(0x128)
	struct FAnimNode_TransitionResult ; // 0xbe8(0x28)
	struct FAnimNode_TransitionResult ; // 0xc10(0x28)
	struct FAnimNode_TransitionResult ; // 0xc38(0x28)
	struct FAnimNode_TransitionResult ; // 0xc60(0x28)
	struct FAnimNode_TransitionResult ; // 0xc88(0x28)
	struct FAnimNode_TransitionResult ; // 0xcb0(0x28)
	struct FAnimNode_TransitionResult ; // 0xcd8(0x28)
	struct FAnimNode_TransitionResult ; // 0xd00(0x28)
	struct FAnimNode_TransitionResult ; // 0xd28(0x28)
	struct FAnimNode_TransitionResult ; // 0xd50(0x28)
	struct FAnimNode_TransitionResult ; // 0xd78(0x28)
	struct FAnimNode_TransitionResult ; // 0xda0(0x28)
	struct FAnimNode_TransitionResult ; // 0xdc8(0x28)
	struct FAnimNode_TransitionResult ; // 0xdf0(0x28)
	struct FAnimNode_TransitionResult ; // 0xe18(0x28)
	struct FAnimNode_TransitionResult ; // 0xe40(0x28)
	struct FAnimNode_TransitionResult ; // 0xe68(0x28)
	struct FAnimNode_TransitionResult ; // 0xe90(0x28)
	struct FAnimNode_TransitionResult ; // 0xeb8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xee0(0x28)
	struct FAnimNode_SequencePlayer ; // 0xf08(0x40)
	struct FAnimNode_StateResult ; // 0xf48(0x20)
	struct FAnimNode_SequencePlayer ; // 0xf68(0x40)
	struct FAnimNode_SequencePlayer ; // 0xfa8(0x40)
	struct FAnimNode_SequencePlayer ; // 0xfe8(0x40)
	struct FAnimNode_SequencePlayer ; // 0x1028(0x40)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1068(0x48)
	struct FAnimNode_StateResult ; // 0x10b0(0x20)
	struct FAnimNode_UseCachedPose ; // 0x10d0(0x28)
	struct FAnimNode_StateResult ; // 0x10f8(0x20)
	struct FAnimNode_SequencePlayer ; // 0x1118(0x40)
	struct FAnimNode_BlendListByBool ; // 0x1158(0x48)
	struct FAnimNode_SequencePlayer ; // 0x11a0(0x40)
	struct FAnimNode_StateResult ; // 0x11e0(0x20)
	struct FAnimNode_SequencePlayer ; // 0x1200(0x40)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1240(0x48)
	struct FAnimNode_SequencePlayer ; // 0x1288(0x40)
	struct FAnimNode_StateResult ; // 0x12c8(0x20)
	struct FAnimNode_SequencePlayer ; // 0x12e8(0x40)
	struct FAnimNode_StateResult ; // 0x1328(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1348(0x40)
	struct FAnimNode_StateResult ; // 0x1388(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x13a8(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x13d0(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x13f0(0xc8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x14b8(0x68)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1520(0x100)
	struct FVector PlungerScaleVector; // 0x1620(0x18)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function OctopusVehicleAnimBP.OctopusVehicleAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function OctopusVehicleAnimBP.OctopusVehicleAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_OctopusVehicleAnimBP(int32_t EntryPoint); // Function OctopusVehicleAnimBP.OctopusVehicleAnimBP_C.ExecuteUbergraph_OctopusVehicleAnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

