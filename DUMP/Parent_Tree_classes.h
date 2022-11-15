// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
// Size: 0x1018 (Inherited: 0xef0)
struct AParent_Tree_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct FVector Wind Direction; // 0xef8(0x18)
	bool StormActive?; // 0xf10(0x01)
	bool DistanceFieldsEnabled?; // 0xf11(0x01)
	char pad_F12[0x2]; // 0xf12(0x02)
	struct FFortWindImpulseHandle WindHandle; // 0xf14(0x04)
	bool DebugWind; // 0xf18(0x01)
	char pad_F19[0x7]; // 0xf19(0x07)
	double Debug Wind Intensity; // 0xf20(0x08)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0xf28(0x08)
	double DebugWindYaw; // 0xf30(0x08)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0xf38(0x08)
	bool SpawnWindFX?; // 0xf40(0x01)
	char pad_F41[0xf]; // 0xf41(0x0f)
	struct FTransform WindFX_Transform; // 0xf50(0x60)
	double WindFX_MaxDrawDistance; // 0xfb0(0x08)
	struct UParticleSystemComponent* WindFX; // 0xfb8(0x08)
	double LeafRadius; // 0xfc0(0x08)
	struct FVector LeafCenter_Offset; // 0xfc8(0x18)
	bool UseCylinder; // 0xfe0(0x01)
	char pad_FE1[0x7]; // 0xfe1(0x07)
	double Hue; // 0xfe8(0x08)
	struct FVector WindDirection; // 0xff0(0x18)
	double BoundRadius; // 0x1008(0x08)
	double BoundsHeight(CylinderOnly); // 0x1010(0x08)

	void RemoveTestWind(double BlendTime); // Function Parent_Tree.Parent_Tree_C.RemoveTestWind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Parent_Tree.Parent_Tree_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ChangeWindIntensity(double Intensity, double Time It Takes To Reach New Intensity); // Function Parent_Tree.Parent_Tree_C.ChangeWindIntensity // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function Parent_Tree.Parent_Tree_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Parent_Tree.Parent_Tree_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Parent_Tree(int32_t EntryPoint); // Function Parent_Tree.Parent_Tree_C.ExecuteUbergraph_Parent_Tree // (Final|UbergraphFunction) // @ game+0xdef49c
};

