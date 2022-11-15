// AnimBlueprintGeneratedClass SlidingLayerAnimBP.SlidingLayerAnimBP_C
// Size: 0x1c70 (Inherited: 0x4d0)
struct USlidingLayerAnimBP_C : UFortSlidingLayerAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x4d8(0x40)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x518(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x520(0x08)
	struct FAnimNode_LinkedInputPose ; // 0x528(0xc0)
	struct FAnimNode_LinkedInputPose ; // 0x5e8(0xc0)
	struct FAnimNode_Root ; // 0x6a8(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x6c8(0xc0)
	struct FAnimNode_Root ; // 0x788(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x7a8(0xc0)
	struct FAnimNode_Root ; // 0x868(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x888(0xc0)
	struct FAnimNode_ApplyMeshSpaceAdditive ; // 0x948(0xd0)
	struct FAnimNode_Root ; // 0xa18(0x20)
	struct FAnimNode_BlendSpacePlayer ; // 0xa38(0x68)
	struct FAnimNode_BlendListByBool ; // 0xaa0(0x48)
	struct FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0xae8(0x10)
	struct FAnimNode_BlendSpacePlayer ; // 0xaf8(0x68)
	struct FAnimNode_ApplyMeshSpaceAdditive ; // 0xb60(0xd0)
	struct FAnimNode_Root ; // 0xc30(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xc50(0xc0)
	struct FAnimNode_RotateRootBone ; // 0xd10(0xa8)
	struct FAnimNode_TransitionResult ; // 0xdb8(0x28)
	struct FAnimNode_TransitionResult ; // 0xde0(0x28)
	struct FAnimNode_TransitionResult ; // 0xe08(0x28)
	struct FAnimNode_TransitionResult ; // 0xe30(0x28)
	struct FAnimNode_TransitionResult ; // 0xe58(0x28)
	struct FAnimNode_TransitionResult ; // 0xe80(0x28)
	struct FAnimNode_TransitionResult ; // 0xea8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xed0(0x28)
	struct FAnimNode_BlendListByBool ; // 0xef8(0x48)
	struct FAnimNode_ApplyMeshSpaceAdditive ; // 0xf40(0xd0)
	struct FAnimNode_SequencePlayer ; // 0x1010(0x40)
	struct FAnimNode_BlendSpacePlayer ; // 0x1050(0x68)
	struct FAnimNode_ApplyMeshSpaceAdditive ; // 0x10b8(0xd0)
	struct FAnimNode_BlendSpacePlayer ; // 0x1188(0x68)
	struct FAnimNode_SequencePlayer ; // 0x11f0(0x40)
	struct FAnimNode_StateResult ; // 0x1230(0x20)
	struct FAnimNode_BlendSpacePlayer ; // 0x1250(0x68)
	struct FAnimNode_StateResult ; // 0x12b8(0x20)
	struct FAnimNode_ApplyMeshSpaceAdditive ; // 0x12d8(0xd0)
	struct FAnimNode_SequencePlayer ; // 0x13a8(0x40)
	struct FAnimNode_BlendSpacePlayer ; // 0x13e8(0x68)
	struct FAnimNode_StateResult ; // 0x1450(0x20)
	struct FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x1470(0xd0)
	struct FAnimNode_SequencePlayer ; // 0x1540(0x40)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1580(0x68)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x15e8(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1608(0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x16d0(0x100)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x17d0(0x48)
	struct FAnimNode_UseCachedPose ; // 0x1818(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1840(0x28)
	struct FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x1868(0xa8)
	struct FAnimNode_LinkedInputPose ; // 0x1910(0xc0)
	struct FAnimNode_LinkedInputPose ; // 0x19d0(0xc0)
	struct FAnimNode_Root ; // 0x1a90(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1ab0(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1b70(0x40)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1bb0(0x20)
	bool IsKneeSliding; // 0x1bd0(0x01)
	bool b_KneeSlideNote_bTransition_FullBody_Sprinting; // 0x1bd1(0x01)
	char pad_1BD2[0x6]; // 0x1bd2(0x06)
	struct FRotator ; // 0x1bd8(0x18)
	struct FRotator ; // 0x1bf0(0x18)
	struct AFortPlayerPawn* ; // 0x1c08(0x08)
	struct UFortPlayerAnimInstance* Fort Player Anim Instance; // 0x1c10(0x08)
	double Delta Time ; // 0x1c18(0x08)
	double KneeSlideLowerBodyYawOffset; // 0x1c20(0x08)
	double ; // 0x1c28(0x08)
	double ; // 0x1c30(0x08)
	double ; // 0x1c38(0x08)
	double ; // 0x1c40(0x08)
	double ; // 0x1c48(0x08)
	bool TransitionToKneeSlide; // 0x1c50(0x01)
	char pad_1C51[0x7]; // 0x1c51(0x07)
	double ; // 0x1c58(0x08)
	bool InitiatedSlideUpHill; // 0x1c60(0x01)
	bool ; // 0x1c61(0x01)
	char pad_1C62[0x6]; // 0x1c62(0x06)
	double ; // 0x1c68(0x08)

	void MovementMode_AimOffset(struct FPoseLink InAimOffsetsPose, struct FPoseLink InSourcePosePreAimOffsets, struct FPoseLink& MovementMode_AimOffset); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_AimOffset // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_FinalPoseOverride(struct FPoseLink InFinalPose, struct FPoseLink& MovementMode_FinalPoseOverride); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_FinalPoseOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_FullBodyOverride(struct FPoseLink InputPoseFullBody, struct FPoseLink& MovementMode_FullBodyOverride); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_FullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_SourcePose(struct FPoseLink InSourcePoseBase, struct FPoseLink& MovementMode_SourcePose); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_SourcePose // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_LowerBodyOverride(struct FPoseLink InLowerBodyPose, struct FPoseLink InSourcePose, struct FPoseLink InSourcePosePreUpperBodySlot, struct FPoseLink& MovementMode_LowerBodyOverride); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LowerBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_LocomotionAdditives(struct FPoseLink InLocomotionAdditivesPose, struct FPoseLink& MovementMode_LocomotionAdditives); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.MovementMode_LocomotionAdditives // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void AnimGraph(struct FPoseLink& AnimGraph); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BlueprintInitializeAnimation(); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6(); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SlidingLayerAnimBP_AnimGraphNode_ApplyMeshSpaceAdditive_CA45D1154A0385BF8F15FBB40CA66AD6 // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SlidingLayerAnimBP(int32_t EntryPoint); // Function SlidingLayerAnimBP.SlidingLayerAnimBP_C.ExecuteUbergraph_SlidingLayerAnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};
