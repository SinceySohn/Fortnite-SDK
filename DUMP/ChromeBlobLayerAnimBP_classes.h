// AnimBlueprintGeneratedClass ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C
// Size: 0x20b0 (Inherited: 0x1610)
struct UChromeBlobLayerAnimBP_C : UFortPlayerPrototypeAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1610(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x1618(0x0c)
	char pad_1624[0x4]; // 0x1624(0x04)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x1628(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x1630(0x08)
	struct FAnimNode_Root ; // 0x1638(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x1658(0xc0)
	struct FAnimNode_LinkedInputPose ; // 0x1718(0xc0)
	struct FAnimNode_LinkedInputPose ; // 0x17d8(0xc0)
	struct FAnimNode_Root ; // 0x1898(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x18b8(0xc0)
	struct FAnimNode_Root ; // 0x1978(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x1998(0xc0)
	struct FAnimNode_Root ; // 0x1a58(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x1a78(0xc0)
	struct FAnimNode_Root ; // 0x1b38(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x1b58(0xc0)
	struct FAnimNode_TransitionResult ; // 0x1c18(0x28)
	struct FAnimNode_TransitionResult ; // 0x1c40(0x28)
	struct FAnimNode_TransitionResult ; // 0x1c68(0x28)
	struct FAnimNode_BlendSpacePlayer ; // 0x1c90(0x68)
	struct FAnimNode_StateResult ; // 0x1cf8(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1d18(0x68)
	struct FAnimNode_StateResult ; // 0x1d80(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1da0(0x40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1de0(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1e00(0x28)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1e28(0xc8)
	struct FAnimNode_Root ; // 0x1ef0(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x1f10(0xc0)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1fd0(0xc0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2090(0x20)

	void MovementMode_LowerBodyOverride(struct FPoseLink InLowerBodyPose, struct FPoseLink InSourcePose, struct FPoseLink InSourcePosePreUpperBodySlot, struct FPoseLink& MovementMode_LowerBodyOverride); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.MovementMode_LowerBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_LocomotionAdditives(struct FPoseLink InLocomotionAdditivesPose, struct FPoseLink& MovementMode_LocomotionAdditives); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.MovementMode_LocomotionAdditives // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_SourcePose(struct FPoseLink InSourcePoseBase, struct FPoseLink& MovementMode_SourcePose); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.MovementMode_SourcePose // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_FullBodyOverride(struct FPoseLink InputPoseFullBody, struct FPoseLink& MovementMode_FullBodyOverride); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.MovementMode_FullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_FinalPoseOverride(struct FPoseLink InFinalPose, struct FPoseLink& MovementMode_FinalPoseOverride); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.MovementMode_FinalPoseOverride // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void MovementMode_AimOffset(struct FPoseLink InAimOffsetsPose, struct FPoseLink InSourcePosePreAimOffsets, struct FPoseLink& MovementMode_AimOffset); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.MovementMode_AimOffset // (HasOutParms|BlueprintCallable) // @ game+0xdef49c
	void AnimGraph(struct FPoseLink& AnimGraph); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ChromeBlobLayerAnimBP_AnimGraphNode_TransitionResult_E1B150DD43508B27C3DD3A8330B36EA9(); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChromeBlobLayerAnimBP_AnimGraphNode_TransitionResult_E1B150DD43508B27C3DD3A8330B36EA9 // (BlueprintEvent) // @ game+0xdef49c
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ChromeBlobLayerAnimBP_AnimGraphNode_TransitionResult_DB49830B48078ECC15BF7A848992C8D6(); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChromeBlobLayerAnimBP_AnimGraphNode_TransitionResult_DB49830B48078ECC15BF7A848992C8D6 // (BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ChromeBlobLayerAnimBP(int32_t EntryPoint); // Function ChromeBlobLayerAnimBP.ChromeBlobLayerAnimBP_C.ExecuteUbergraph_ChromeBlobLayerAnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

