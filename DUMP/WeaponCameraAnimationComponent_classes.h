// BlueprintGeneratedClass WeaponCameraAnimationComponent.WeaponCameraAnimationComponent_C
// Size: 0xe8 (Inherited: 0xa0)
struct UWeaponCameraAnimationComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct UWeaponFireCameraAnimationData_C* HipfireShakeData; // 0xa8(0x08)
	struct UWeaponFireCameraAnimationData_C* ADSShakeData; // 0xb0(0x08)
	struct AFortWeaponRanged* OwnerWeapon; // 0xb8(0x08)
	struct UFortCameraMode* NewTargetingCamera; // 0xc0(0x08)
	struct UFortCameraMode* NewTargetingReloadCamera; // 0xc8(0x08)
	struct UFortCameraMode* NewBaseCamera; // 0xd0(0x08)
	bool TriggerPressed; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	int64_t LastFiredFrame; // 0xe0(0x08)

	void IsUpdatedFeedbackEnabled(bool& Enabled); // Function WeaponCameraAnimationComponent.WeaponCameraAnimationComponent_C.IsUpdatedFeedbackEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleStartFiring(); // Function WeaponCameraAnimationComponent.WeaponCameraAnimationComponent_C.HandleStartFiring // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function WeaponCameraAnimationComponent.WeaponCameraAnimationComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Fired(struct AFortWeapon* Weapon); // Function WeaponCameraAnimationComponent.WeaponCameraAnimationComponent_C.Fired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WeaponCameraAnimationComponent(int32_t EntryPoint); // Function WeaponCameraAnimationComponent.WeaponCameraAnimationComponent_C.ExecuteUbergraph_WeaponCameraAnimationComponent // (Final|UbergraphFunction) // @ game+0xdef49c
};

