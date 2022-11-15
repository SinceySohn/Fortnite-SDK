// UserDefinedStruct B_Lackluster_MaterialsAndTypes.B_Lackluster_MaterialsAndTypes
// Size: 0xf0 (Inherited: 0x00)
struct FB_Lackluster_MaterialsAndTypes {
	enum class B_Lackluster_ActorTypes ActorType_2_5B99D33C44FCFC26B361EE99B2BC0A4A; // 0x00(0x01)
	enum class B_Lackluster_ChromeTypes ChromeType_5_68195ABA4BF5BD23330635BC8CE95A46; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FB_Lackluster_ChromeMaterialStruct> ChromeMaterialStructs_9_A596659C4EB279EB1D6A5288D978425C; // 0x08(0x10)
	struct TArray<struct FB_Lackluster_OriginalMaterialStruct> OriginalMaterialStructs_12_567C73AE46C386F2A6D4C9B35C9D5864; // 0x18(0x10)
	enum class ELacklusterActorType NativeActorType_22_CFDBF9B1473C12413CFD3B947DB2E001; // 0x28(0x01)
	enum class ELacklusterChromeType NativeChromeType_23_860F664148DEBFE8FC0F50A5E7FEFB6F; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct TArray<struct FLacklusterMaterialData> NativeChromeMaterialStructs_21_EB1373E044D8F3E92F5F7C97E850FE26; // 0x30(0x10)
	struct TArray<struct FLacklusterOriginalMaterialData> NativeOriginalMaterialStructs_29_3B92ABD442DB398F00ADB889972847B8; // 0x40(0x10)
	struct TMap<struct FName, double> ContainerMaterialScalarParamMap_34_88450D0546BB2F29CE9612BA6AAA1B20; // 0x50(0x50)
	struct TMap<struct FName, struct FLinearColor> ContainerMaterialVectorParamMap_37_3436013E48082FBF8E5AABA2B0BD7901; // 0xa0(0x50)
};

