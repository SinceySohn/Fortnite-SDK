// BlueprintGeneratedClass BP_SafeZoneStorm.BP_SafeZoneStorm_C
// Size: 0x413 (Inherited: 0x2b0)
struct ABP_SafeZoneStorm_C : AFortSafeZoneStorm {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_CloudBottomBlend; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_CloudRing_Mobile; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_CloudRingTopBlend; // 0x2c8(0x08)
	struct UStaticMeshComponent* SM_Storm_ScreenEffect; // 0x2d0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x2d8(0x08)
	struct UBoxComponent* Box; // 0x2e0(0x08)
	struct UStaticMeshComponent* CloudsOuterRing; // 0x2e8(0x08)
	struct UStaticMeshComponent* StaticMesh10; // 0x2f0(0x08)
	struct UStaticMeshComponent* StaticMesh9; // 0x2f8(0x08)
	struct UStaticMeshComponent* StaticMesh8; // 0x300(0x08)
	struct UStaticMeshComponent* StaticMesh7; // 0x308(0x08)
	struct UStaticMeshComponent* StaticMesh6; // 0x310(0x08)
	struct UStaticMeshComponent* StaticMesh5; // 0x318(0x08)
	struct UStaticMeshComponent* StaticMesh4; // 0x320(0x08)
	struct UStaticMeshComponent* StaticMesh3; // 0x328(0x08)
	struct UStaticMeshComponent* StaticMesh2; // 0x330(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x338(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x340(0x08)
	struct UStaticMeshComponent* StormQuadMain16; // 0x348(0x08)
	struct UStaticMeshComponent* StormQuadMain15; // 0x350(0x08)
	struct UStaticMeshComponent* StormQuadMain1; // 0x358(0x08)
	struct UStaticMeshComponent* StormQuadMain13; // 0x360(0x08)
	struct UStaticMeshComponent* StormQuadMain12; // 0x368(0x08)
	struct UStaticMeshComponent* StormQuadMain11; // 0x370(0x08)
	struct UStaticMeshComponent* StormQuadMain10; // 0x378(0x08)
	struct UStaticMeshComponent* StormQuadMain9; // 0x380(0x08)
	struct UStaticMeshComponent* StormQuadMain8; // 0x388(0x08)
	struct UStaticMeshComponent* StormQuadMain7; // 0x390(0x08)
	struct UStaticMeshComponent* StormQuadMain6; // 0x398(0x08)
	struct UStaticMeshComponent* StormQuadMain5; // 0x3a0(0x08)
	struct UStaticMeshComponent* StormQuadMain4; // 0x3a8(0x08)
	struct UStaticMeshComponent* StormQuadMain3; // 0x3b0(0x08)
	struct UStaticMeshComponent* StormQuadMain2; // 0x3b8(0x08)
	struct UStaticMeshComponent* StormQuadMain14; // 0x3c0(0x08)
	struct UStaticMeshComponent* StormRings; // 0x3c8(0x08)
	struct UStaticMeshComponent* StormQuadMain; // 0x3d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d8(0x08)
	bool MobileMode; // 0x3e0(0x01)
	bool ShowStorm; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)
	double StormSize; // 0x3e8(0x08)
	double StormBias; // 0x3f0(0x08)
	struct FVector StormCenter; // 0x3f8(0x18)
	bool UseNewStorm; // 0x410(0x01)
	bool UseSeason11Storm; // 0x411(0x01)
	bool UseVolumetricStorm; // 0x412(0x01)

	void HandleGamePhase(bool& Handled); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.HandleGamePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void MobileClouds(bool Mobile); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.MobileClouds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowClouds(double Amount); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowClouds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowStormScreenEffect(bool Show); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowStormScreenEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.HandleGamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_SafeZoneStorm(int32_t EntryPoint); // Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ExecuteUbergraph_BP_SafeZoneStorm // (Final|UbergraphFunction) // @ game+0xdef49c
};

