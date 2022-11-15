// BlueprintGeneratedClass Tree_Palm_C.Tree_Palm_C_C
// Size: 0x1048 (Inherited: 0x1018)
struct ATree_Palm_C_C : AParent_Tree_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1018(0x08)
	bool HasBugs; // 0x1020(0x01)
	char pad_1021[0x7]; // 0x1021(0x07)
	double UseLightningBug; // 0x1028(0x08)
	struct FVector BugOffset; // 0x1030(0x18)

	void UserConstructionScript(); // Function Tree_Palm_C.Tree_Palm_C_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Tree_Palm_C.Tree_Palm_C_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Tree_Palm_C(int32_t EntryPoint); // Function Tree_Palm_C.Tree_Palm_C_C.ExecuteUbergraph_Tree_Palm_C // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

