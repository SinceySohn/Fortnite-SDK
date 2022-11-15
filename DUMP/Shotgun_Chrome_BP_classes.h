// AnimBlueprintGeneratedClass Shotgun_Chrome_BP.Shotgun_Chrome_BP_C
// Size: 0x3e0 (Inherited: 0x350)
struct UShotgun_Chrome_BP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x388(0x10)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x398(0x48)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Shotgun_Chrome_BP.Shotgun_Chrome_BP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Shotgun_Chrome_BP(int32_t EntryPoint); // Function Shotgun_Chrome_BP.Shotgun_Chrome_BP_C.ExecuteUbergraph_Shotgun_Chrome_BP // (Final|UbergraphFunction) // @ game+0xdef49c
};

