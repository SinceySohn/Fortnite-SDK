// BlueprintGeneratedClass B_Shotgun_BreakAction_Athena.B_Shotgun_BreakAction_Athena_C
// Size: 0x18b0 (Inherited: 0x1818)
struct AB_Shotgun_BreakAction_Athena_C : AB_Shotgun_Standard_Athena_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	struct UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x1820(0x08)
	bool Debug; // 0x1828(0x01)
	char pad_1829[0x7]; // 0x1829(0x07)
	double FXTraceYawFullAngle; // 0x1830(0x08)
	double FXTracePitchFullAngle; // 0x1838(0x08)
	struct FVector EndOfCenterFXTrace; // 0x1840(0x18)
	struct TArray<struct FVector> AllFXTraceEndPoints; // 0x1858(0x10)
	struct FVector CurrentFXTraceEnd; // 0x1868(0x18)
	bool CurrentFXTraceWasHit; // 0x1880(0x01)
	char pad_1881[0x7]; // 0x1881(0x07)
	struct TArray<struct FVector> AllFXTracerSpawnPoints; // 0x1888(0x10)
	bool SpawnTracersInsteadOfDummyImpactFX; // 0x1898(0x01)
	char pad_1899[0x7]; // 0x1899(0x07)
	double MysteriousRangeBufferForTracers; // 0x18a0(0x08)
	double RangeLong; // 0x18a8(0x08)

	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Shotgun_BreakAction_Athena.B_Shotgun_BreakAction_Athena_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Shotgun_BreakAction_Athena(int32_t EntryPoint); // Function B_Shotgun_BreakAction_Athena.B_Shotgun_BreakAction_Athena_C.ExecuteUbergraph_B_Shotgun_BreakAction_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

