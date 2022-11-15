// AnimBlueprintGeneratedClass Pistol_Core_AnimBP.Pistol_Core_AnimBP_C
// Size: 0x410 (Inherited: 0x350)
struct UPistol_Core_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x388(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3d0(0x40)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Pistol_Core_AnimBP.Pistol_Core_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Pistol_Core_AnimBP(int32_t EntryPoint); // Function Pistol_Core_AnimBP.Pistol_Core_AnimBP_C.ExecuteUbergraph_Pistol_Core_AnimBP // (Final|UbergraphFunction) // @ game+0xdef49c
};

