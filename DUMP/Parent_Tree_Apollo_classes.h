// BlueprintGeneratedClass Parent_Tree_Apollo.Parent_Tree_Apollo_C
// Size: 0xf80 (Inherited: 0xef0)
struct AParent_Tree_Apollo_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	bool Has Bugs; // 0xef8(0x01)
	char pad_EF9[0x7]; // 0xef9(0x07)
	double Use Lightning Bug; // 0xf00(0x08)
	struct FVector BugOffset; // 0xf08(0x18)
	bool Has Falling Leaves; // 0xf20(0x01)
	char pad_F21[0x7]; // 0xf21(0x07)
	struct FVector LeavesOffset; // 0xf28(0x18)
	int32_t Priority; // 0xf40(0x04)
	enum class Tree_Color_options Tree Color Option; // 0xf44(0x01)
	char pad_F45[0x3]; // 0xf45(0x03)
	struct FLinearColor Color; // 0xf48(0x10)
	double HueVariation; // 0xf58(0x08)
	double ValueVariation; // 0xf60(0x08)
	int32_t PrioritySetbyVolume; // 0xf68(0x04)
	char pad_F6C[0x4]; // 0xf6c(0x04)
	struct UTreeSeasonColor_Data_C* TreeSeasonColor Data; // 0xf70(0x08)
	struct UFortGameStateComponent_SurfaceOverride* SurfaceOverrideComponent; // 0xf78(0x08)

	void SetTreeSeasonalColor(); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.SetTreeSeasonalColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSeasonPresetColors(); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.SetSeasonPresetColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateColor(); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.UpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool IsSubmergedByWater(); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.IsSubmergedByWater // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWaterLevelSetOffline(); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.OnWaterLevelSetOffline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveUnderwaterTrees(); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.RemoveUnderwaterTrees // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Parent_Tree_Apollo(int32_t EntryPoint); // Function Parent_Tree_Apollo.Parent_Tree_Apollo_C.ExecuteUbergraph_Parent_Tree_Apollo // (Final|UbergraphFunction) // @ game+0xdef49c
};

