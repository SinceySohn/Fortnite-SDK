// AnimBlueprintGeneratedClass Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C
// Size: 0x1529 (Inherited: 0x350)
struct UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x368(0xc0)
	char pad_428[0x8]; // 0x428(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x430(0x990)
	struct FAnimNode_ConvertLocalToComponentSpace ; // 0xdc0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace ; // 0xde0(0x20)
	struct FAnimNode_TransitionResult ; // 0xe00(0x28)
	struct FAnimNode_TransitionResult ; // 0xe28(0x28)
	struct FAnimNode_TransitionResult ; // 0xe50(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xe78(0x28)
	struct FAnimNode_SequencePlayer ; // 0xea0(0x40)
	struct FAnimNode_StateResult ; // 0xee0(0x20)
	struct FAnimNode_SequencePlayer ; // 0xf00(0x40)
	struct FAnimNode_StateResult ; // 0xf40(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xf60(0x40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xfa0(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xfc0(0xc8)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1088(0x128)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x11b0(0x2a0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1450(0x48)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1498(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x14b8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x14d8(0x20)
	bool OneHandGrip; // 0x14f8(0x01)
	char pad_14F9[0x7]; // 0x14f9(0x07)
	double Trail_Alpha; // 0x1500(0x08)
	double Trail_RelaxScale; // 0x1508(0x08)
	struct FRotator GripRotation; // 0x1510(0x18)
	bool IsTethered; // 0x1528(0x01)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0xdef49c
};

