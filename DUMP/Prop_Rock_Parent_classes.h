// BlueprintGeneratedClass Prop_Rock_Parent.Prop_Rock_Parent_C
// Size: 0xf00 (Inherited: 0xef0)
struct AProp_Rock_Parent_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	double SnowCoverageAmount; // 0xef8(0x08)

	void UserConstructionScript(); // Function Prop_Rock_Parent.Prop_Rock_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Prop_Rock_Parent.Prop_Rock_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function Prop_Rock_Parent.Prop_Rock_Parent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prop_Rock_Parent(int32_t EntryPoint); // Function Prop_Rock_Parent.Prop_Rock_Parent_C.ExecuteUbergraph_Prop_Rock_Parent // (Final|UbergraphFunction) // @ game+0xdef49c
};

