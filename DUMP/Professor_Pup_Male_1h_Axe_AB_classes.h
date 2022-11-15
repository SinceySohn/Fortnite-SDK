// AnimBlueprintGeneratedClass Professor_Pup_Male_1h_Axe_AB.Professor_Pup_Male_1h_Axe_AB_C
// Size: 0x990 (Inherited: 0x6f0)
struct UProfessor_Pup_Male_1h_Axe_AB_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6f8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x700(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x708(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x728(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x850(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x870(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x890(0xc0)
	double deltaTimeRemap; // 0x950(0x08)
	double velocityMult; // 0x958(0x08)
	double spinA; // 0x960(0x08)
	double speedA; // 0x968(0x08)
	struct FRotator spinResultA; // 0x970(0x18)
	double spinVar; // 0x988(0x08)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Professor_Pup_Male_1h_Axe_AB.Professor_Pup_Male_1h_Axe_AB_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Spin Function(double Spin, double Speed, double& Output); // Function Professor_Pup_Male_1h_Axe_AB.Professor_Pup_Male_1h_Axe_AB_C.Spin Function // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Professor_Pup_Male_1h_Axe_AB.Professor_Pup_Male_1h_Axe_AB_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Professor_Pup_Male_1h_Axe_AB(int32_t EntryPoint); // Function Professor_Pup_Male_1h_Axe_AB.Professor_Pup_Male_1h_Axe_AB_C.ExecuteUbergraph_Professor_Pup_Male_1h_Axe_AB // (Final|UbergraphFunction) // @ game+0xdef49c
};

