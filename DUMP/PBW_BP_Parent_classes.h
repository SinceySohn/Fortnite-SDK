// BlueprintGeneratedClass PBW_BP_Parent.PBW_BP_Parent_C
// Size: 0x1048 (Inherited: 0x1030)
struct APBW_BP_Parent_C : ABuildingWall {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct TArray<struct UStaticMesh*> StaticMeshAlternateArray; // 0x1038(0x10)

	void OnRep_Random Chance(); // Function PBW_BP_Parent.PBW_BP_Parent_C.OnRep_Random Chance // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function PBW_BP_Parent.PBW_BP_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PBW_BP_Parent(int32_t EntryPoint); // Function PBW_BP_Parent.PBW_BP_Parent_C.ExecuteUbergraph_PBW_BP_Parent // (Final|UbergraphFunction) // @ game+0xdef49c
};

