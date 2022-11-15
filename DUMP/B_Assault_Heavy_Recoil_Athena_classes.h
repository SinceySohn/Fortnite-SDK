// BlueprintGeneratedClass B_Assault_Heavy_Recoil_Athena.B_Assault_Heavy_Recoil_Athena_C
// Size: 0x18b8 (Inherited: 0x1818)
struct AB_Assault_Heavy_Recoil_Athena_C : AB_Assault_Generic_C {
	struct UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x1818(0x08)
	double Firing Rate; // 0x1820(0x08)
	bool Firing; // 0x1828(0x01)
	char pad_1829[0x7]; // 0x1829(0x07)
	struct UTimelineComponent* FireShake; // 0x1830(0x08)
	struct FTimerHandle RecoilTimerHandle; // 0x1838(0x08)
	double XRecoilOffset; // 0x1840(0x08)
	double YRecoilOffset; // 0x1848(0x08)
	double ADSAlpha; // 0x1850(0x08)
	double YADSOffset; // 0x1858(0x08)
	double PreADSYOffset; // 0x1860(0x08)
	double XADSOffset; // 0x1868(0x08)
	double PreADSXOffset; // 0x1870(0x08)
	struct FRotator PreviousRotation; // 0x1878(0x18)
	double YOffsetInterpTarget; // 0x1890(0x08)
	double XOffsetInterpTarget; // 0x1898(0x08)
	double XStrafeOffset; // 0x18a0(0x08)
	double YOffset; // 0x18a8(0x08)
	double XOffset; // 0x18b0(0x08)
};

