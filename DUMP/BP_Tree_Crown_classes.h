// BlueprintGeneratedClass BP_Tree_Crown.BP_Tree_Crown_C
// Size: 0x330 (Inherited: 0x288)
struct ABP_Tree_Crown_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* AudioLocation; // 0x290(0x08)
	struct UNiagaraComponent* NS_Tree_Crown; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	float FallingTreeTop_GlobalRotate_874EE12049FA6ADD01D9B295F40A0260; // 0x2a8(0x04)
	float FallingTreeTop_Fall_in_Z_874EE12049FA6ADD01D9B295F40A0260; // 0x2ac(0x04)
	float FallingTreeTop_Bend_Angle_874EE12049FA6ADD01D9B295F40A0260; // 0x2b0(0x04)
	enum class ETimelineDirection FallingTreeTop__Direction_874EE12049FA6ADD01D9B295F40A0260; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* FallingTreeTop; // 0x2b8(0x08)
	double AxisRotationAngle; // 0x2c0(0x08)
	double BendAngle; // 0x2c8(0x08)
	struct FVector ImpactLocation; // 0x2d0(0x18)
	struct FVector ImpactNormal; // 0x2e8(0x18)
	struct FTimerHandle UpdateTreeDataTimerHandle; // 0x300(0x08)
	double MaxHeight; // 0x308(0x08)
	double MinHeight; // 0x310(0x08)
	struct FVector FallVector; // 0x318(0x18)

	void Set NSTree Info(double AxisRotationAngle, double MinHeight, double MaxHeight, double BendAngle, struct FVector FallVector); // Function BP_Tree_Crown.BP_Tree_Crown_C.Set NSTree Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FallingTreeTop__FinishedFunc(); // Function BP_Tree_Crown.BP_Tree_Crown_C.FallingTreeTop__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void FallingTreeTop__UpdateFunc(); // Function BP_Tree_Crown.BP_Tree_Crown_C.FallingTreeTop__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void UpdateTreeData(); // Function BP_Tree_Crown.BP_Tree_Crown_C.UpdateTreeData // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_Tree_Crown.BP_Tree_Crown_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Tree_Crown(int32_t EntryPoint); // Function BP_Tree_Crown.BP_Tree_Crown_C.ExecuteUbergraph_BP_Tree_Crown // (Final|UbergraphFunction) // @ game+0xdef49c
};

