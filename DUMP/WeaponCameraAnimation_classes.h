// BlueprintGeneratedClass WeaponCameraAnimation.WeaponCameraAnimation_C
// Size: 0xd8 (Inherited: 0x48)
struct UWeaponCameraAnimation_C : UCameraModifier {
	double StartTime; // 0x48(0x08)
	struct UWeaponFireCameraAnimationData_C* ShakeData; // 0x50(0x08)
	double PreviousDeltaFOV; // 0x58(0x08)
	double NewVar; // 0x60(0x08)
	struct FVector PreviousForwardBack; // 0x68(0x18)
	double IntensityTimer; // 0x80(0x08)
	struct FVector PreviousLeftRight; // 0x88(0x18)
	struct FVector PreviousUpDown; // 0xa0(0x18)
	struct FVector WorldspaceDirectionalShake; // 0xb8(0x18)
	double TimeBetweenShots; // 0xd0(0x08)

	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector& NewViewLocation, struct FRotator& NewViewRotation, float& NewFOV); // Function WeaponCameraAnimation.WeaponCameraAnimation_C.BlueprintModifyCamera // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

