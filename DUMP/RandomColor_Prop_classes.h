// BlueprintGeneratedClass RandomColor_Prop.RandomColor_Prop_C
// Size: 0xf60 (Inherited: 0xef0)
struct ARandomColor_Prop_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	bool RandomizeSwatchByPosition; // 0xef8(0x01)
	char pad_EF9[0x7]; // 0xef9(0x07)
	struct URandomColor_Prop_Palette_C* SwatchDataAsset; // 0xf00(0x08)
	int32_t SwatchIndex; // 0xf08(0x04)
	char pad_F0C[0x4]; // 0xf0c(0x04)
	double SwatchTransitionDistance; // 0xf10(0x08)
	bool RandomizeMeshByPosition; // 0xf18(0x01)
	char pad_F19[0x7]; // 0xf19(0x07)
	struct TArray<struct TSoftObjectPtr<UStaticMesh>> MeshList; // 0xf20(0x10)
	int32_t MeshIndex; // 0xf30(0x04)
	char pad_F34[0x4]; // 0xf34(0x04)
	double MeshTransitionDistance; // 0xf38(0x08)
	struct UStaticMesh* CurrentStaticMeshLoaded; // 0xf40(0x08)
	struct UStaticMeshComponent* CurrentLoadedMeshComponent; // 0xf48(0x08)
	enum class RandomColorProp_MaterialApply_Enum MeshMaterialOverride; // 0xf50(0x01)
	char pad_F51[0x7]; // 0xf51(0x07)
	struct URandomColor_Prop_Palette_C* currentPalette; // 0xf58(0x08)

	void ValidateMeshMaterials(); // Function RandomColor_Prop.RandomColor_Prop_C.ValidateMeshMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ValidateVisuals_Meshes(); // Function RandomColor_Prop.RandomColor_Prop_C.ValidateVisuals_Meshes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RandomMeshByPosition(); // Function RandomColor_Prop.RandomColor_Prop_C.RandomMeshByPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RunRandomization(); // Function RandomColor_Prop.RandomColor_Prop_C.RunRandomization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Validate Visuals All(); // Function RandomColor_Prop.RandomColor_Prop_C.Validate Visuals All // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool Should Randomize(); // Function RandomColor_Prop.RandomColor_Prop_C.Should Randomize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ValidateVisuals_Swatches(); // Function RandomColor_Prop.RandomColor_Prop_C.ValidateVisuals_Swatches // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RandomSwatchByPosition(); // Function RandomColor_Prop.RandomColor_Prop_C.RandomSwatchByPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetSwatchArray(struct TArray<struct UBuildingTextureData*>& Color Swatches, int32_t& Swatch Count); // Function RandomColor_Prop.RandomColor_Prop_C.GetSwatchArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function RandomColor_Prop.RandomColor_Prop_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LoadMesh(); // Function RandomColor_Prop.RandomColor_Prop_C.LoadMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function RandomColor_Prop.RandomColor_Prop_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RandomColor_Prop(int32_t EntryPoint); // Function RandomColor_Prop.RandomColor_Prop_C.ExecuteUbergraph_RandomColor_Prop // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

