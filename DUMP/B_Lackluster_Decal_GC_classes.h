// BlueprintGeneratedClass B_Lackluster_Decal_GC.B_Lackluster_Decal_GC_C
// Size: 0x2b0 (Inherited: 0x290)
struct AB_Lackluster_Decal_GC_C : ADecalActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UMaterialInstanceDynamic* DecalMID; // 0x298(0x08)
	float ImageIndex; // 0x2a0(0x04)
	float DecalLifetime; // 0x2a4(0x04)
	float DecalFadeDelay; // 0x2a8(0x04)
	float DecalFadeTime; // 0x2ac(0x04)

	void UserConstructionScript(); // Function B_Lackluster_Decal_GC.B_Lackluster_Decal_GC_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Lackluster_Decal_GC.B_Lackluster_Decal_GC_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Lackluster_Decal_GC(int32_t EntryPoint); // Function B_Lackluster_Decal_GC.B_Lackluster_Decal_GC_C.ExecuteUbergraph_B_Lackluster_Decal_GC // (Final|UbergraphFunction) // @ game+0xdef49c
};

