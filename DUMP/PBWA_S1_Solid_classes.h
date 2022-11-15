// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// Size: 0x1058 (Inherited: 0x1030)
struct APBWA_S1_Solid_C : ABuildingWall {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	int32_t GnomeWallChance; // 0x1038(0x04)
	int32_t GnomeWallMax; // 0x103c(0x04)
	bool Gnomed; // 0x1040(0x01)
	char pad_1041[0x7]; // 0x1041(0x07)
	struct UMaterialInstanceConstant* GnomeMaterial; // 0x1048(0x08)
	struct UStaticMesh* GnomeWall; // 0x1050(0x08)

	void UserConstructionScript(); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PBWA_S1_Solid(int32_t EntryPoint); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.ExecuteUbergraph_PBWA_S1_Solid // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

