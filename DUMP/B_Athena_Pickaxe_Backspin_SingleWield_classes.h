// BlueprintGeneratedClass B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C
// Size: 0x1331 (Inherited: 0x12f8)
struct AB_Athena_Pickaxe_Backspin_SingleWield_C : AB_Athena_Pickaxe_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12f8(0x08)
	float Timeline_1_Lerp_Alpha_7D9EEF3D47821FF5CEEBE78C24C6A449; // 0x1300(0x04)
	enum class ETimelineDirection Timeline_1__Direction_7D9EEF3D47821FF5CEEBE78C24C6A449; // 0x1304(0x01)
	char pad_1305[0x3]; // 0x1305(0x03)
	struct UTimelineComponent* ; // 0x1308(0x08)
	float Timeline_0_Lerp_Alpha_FB974F9C420E627CBF51939BB879EC54; // 0x1310(0x04)
	enum class ETimelineDirection Timeline_0__Direction_FB974F9C420E627CBF51939BB879EC54; // 0x1314(0x01)
	char pad_1315[0x3]; // 0x1315(0x03)
	struct UTimelineComponent* ; // 0x1318(0x08)
	double KillCount; // 0x1320(0x08)
	double GlowIntensity; // 0x1328(0x08)
	bool Right ?; // 0x1330(0x01)

	void Timeline_0__FinishedFunc(); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_1__FinishedFunc(); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_1__UpdateFunc(); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void (int32_t Watched Kills); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingLeft(); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.SwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingRight(); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.SwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInitWeaponCosmetics(); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.OnInitWeaponCosmetics // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_Pickaxe_Backspin_SingleWield(int32_t EntryPoint); // Function B_Athena_Pickaxe_Backspin_SingleWield.B_Athena_Pickaxe_Backspin_SingleWield_C.ExecuteUbergraph_B_Athena_Pickaxe_Backspin_SingleWield // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

