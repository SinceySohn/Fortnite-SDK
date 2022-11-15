// AnimBlueprintGeneratedClass Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C
// Size: 0x15ea (Inherited: 0x700)
struct UGameplay_FaceSystem_StateMachine_AnimBP_C : UHeadPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x708(0x0c)
	char pad_714[0x4]; // 0x714(0x04)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x718(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x720(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x728(0x20)
	struct FAnimNode_TransitionResult ; // 0x748(0x28)
	struct FAnimNode_TransitionResult ; // 0x770(0x28)
	struct FAnimNode_TransitionResult ; // 0x798(0x28)
	struct FAnimNode_TransitionResult ; // 0x7c0(0x28)
	struct FAnimNode_TransitionResult ; // 0x7e8(0x28)
	struct FAnimNode_TransitionResult ; // 0x810(0x28)
	struct FAnimNode_TransitionResult ; // 0x838(0x28)
	struct FAnimNode_TransitionResult ; // 0x860(0x28)
	struct FAnimNode_TransitionResult ; // 0x888(0x28)
	struct FAnimNode_TransitionResult ; // 0x8b0(0x28)
	struct FAnimNode_TransitionResult ; // 0x8d8(0x28)
	struct FAnimNode_TransitionResult ; // 0x900(0x28)
	struct FAnimNode_TransitionResult ; // 0x928(0x28)
	struct FAnimNode_TransitionResult ; // 0x950(0x28)
	struct FAnimNode_TransitionResult ; // 0x978(0x28)
	struct FAnimNode_SequencePlayer ; // 0x9a0(0x40)
	struct FAnimNode_StateResult ; // 0x9e0(0x20)
	struct FAnimNode_SequencePlayer ; // 0xa00(0x40)
	struct FAnimNode_StateResult ; // 0xa40(0x20)
	struct FAnimNode_SequencePlayer ; // 0xa60(0x40)
	struct FAnimNode_StateResult ; // 0xaa0(0x20)
	struct FAnimNode_SequencePlayer ; // 0xac0(0x40)
	struct FAnimNode_StateResult ; // 0xb00(0x20)
	struct FAnimNode_SequencePlayer ; // 0xb20(0x40)
	struct FAnimNode_StateResult ; // 0xb60(0x20)
	struct FAnimNode_SequencePlayer ; // 0xb80(0x40)
	struct FAnimNode_StateResult ; // 0xbc0(0x20)
	struct FAnimNode_SequencePlayer ; // 0xbe0(0x40)
	struct FAnimNode_StateResult ; // 0xc20(0x20)
	struct FAnimNode_SequencePlayer ; // 0xc40(0x40)
	struct FAnimNode_StateResult ; // 0xc80(0x20)
	struct FAnimNode_StateMachine ; // 0xca0(0xc8)
	struct FAnimNode_TransitionResult ; // 0xd68(0x28)
	struct FAnimNode_TransitionResult ; // 0xd90(0x28)
	struct FAnimNode_TransitionResult ; // 0xdb8(0x28)
	struct FAnimNode_TransitionResult ; // 0xde0(0x28)
	struct FAnimNode_TransitionResult ; // 0xe08(0x28)
	struct FAnimNode_TransitionResult ; // 0xe30(0x28)
	struct FAnimNode_TransitionResult ; // 0xe58(0x28)
	struct FAnimNode_TransitionResult ; // 0xe80(0x28)
	struct FAnimNode_TransitionResult ; // 0xea8(0x28)
	struct FAnimNode_TransitionResult ; // 0xed0(0x28)
	struct FAnimNode_TransitionResult ; // 0xef8(0x28)
	struct FAnimNode_TransitionResult ; // 0xf20(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xf48(0x28)
	struct FAnimNode_SequencePlayer ; // 0xf70(0x40)
	struct FAnimNode_StateResult ; // 0xfb0(0x20)
	struct FAnimNode_SequencePlayer ; // 0xfd0(0x40)
	struct FAnimNode_StateResult ; // 0x1010(0x20)
	struct FAnimNode_SequencePlayer ; // 0x1030(0x40)
	struct FAnimNode_StateResult ; // 0x1070(0x20)
	struct FAnimNode_SequencePlayer ; // 0x1090(0x40)
	struct FAnimNode_StateResult ; // 0x10d0(0x20)
	struct FAnimNode_SequencePlayer ; // 0x10f0(0x40)
	struct FAnimNode_StateResult ; // 0x1130(0x20)
	struct FAnimNode_StateResult ; // 0x1150(0x20)
	struct FAnimNode_SequencePlayer ; // 0x1170(0x40)
	struct FAnimNode_StateResult ; // 0x11b0(0x20)
	struct FAnimNode_StateResult ; // 0x11d0(0x20)
	struct FAnimNode_SequencePlayer ; // 0x11f0(0x40)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1230(0x68)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1298(0x48)
	struct FAnimNode_StateResult ; // 0x12e0(0x20)
	struct FAnimNode_SequencePlayer ; // 0x1300(0x40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1340(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1360(0xc8)
	struct FAnimNode_TwoWayBlend ; // 0x1428(0xc0)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x14e8(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x15a8(0x40)
	bool CurrentlyShooting; // 0x15e8(0x01)
	bool UsingWeapon; // 0x15e9(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_589FAA9C413B34BDF8347D810349CF13(); // Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_589FAA9C413B34BDF8347D810349CF13 // (BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_E54914DB4B5DAD605B909E9914CC2A0C(); // Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_E54914DB4B5DAD605B909E9914CC2A0C // (BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_4C4AEB794B0EE8002304C6AC541E65CF(); // Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP_AnimGraphNode_TransitionResult_4C4AEB794B0EE8002304C6AC541E65CF // (BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32_t EntryPoint); // Function Gameplay_FaceSystem_StateMachine_AnimBP.Gameplay_FaceSystem_StateMachine_AnimBP_C.ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};
