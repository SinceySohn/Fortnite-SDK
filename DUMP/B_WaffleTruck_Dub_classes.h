// BlueprintGeneratedClass B_WaffleTruck_Dub.B_WaffleTruck_Dub_C
// Size: 0x18a8 (Inherited: 0x1818)
struct AB_WaffleTruck_Dub_C : AB_Shotgun_Standard_Athena_C {
	struct UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x1818(0x08)
	bool Debug; // 0x1820(0x01)
	char pad_1821[0x7]; // 0x1821(0x07)
	double FXTraceYawFullAngle; // 0x1828(0x08)
	double FXTracePitchFullAngle; // 0x1830(0x08)
	struct FVector EndOfCenterFXTrace; // 0x1838(0x18)
	struct TArray<struct FVector> AllFXTraceEndPoints; // 0x1850(0x10)
	struct FVector CurrentFXTraceEnd; // 0x1860(0x18)
	bool CurrentFXTraceWasHit; // 0x1878(0x01)
	char pad_1879[0x7]; // 0x1879(0x07)
	struct TArray<struct FVector> AllFXTracerSpawnPoints; // 0x1880(0x10)
	bool SpawnTracersInsteadOfDummyImpactFX; // 0x1890(0x01)
	char pad_1891[0x7]; // 0x1891(0x07)
	double MysteriousRangeBufferForTracers; // 0x1898(0x08)
	double RangeLong; // 0x18a0(0x08)
};

