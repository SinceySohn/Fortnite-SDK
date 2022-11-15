// BlueprintGeneratedClass LoginCamera_Blueprint.LoginCamera_Blueprint_C
// Size: 0xa08 (Inherited: 0x9f0)
struct ALoginCamera_Blueprint_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x9f8(0x08)
	struct UCameraComponent* ; // 0xa00(0x08)

	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LoginCamera_Blueprint(int32_t EntryPoint); // Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

