// BlueprintGeneratedClass B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C
// Size: 0x1910 (Inherited: 0x1818)
struct AB_DMR22_Athena_Weap_C : AB_Ranged_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	struct UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x1820(0x08)
	struct UStaticMeshComponent* scope_glass; // 0x1828(0x08)
	double Firing Rate; // 0x1830(0x08)
	double XOffset; // 0x1838(0x08)
	double YOffset; // 0x1840(0x08)
	double PreADSYOffset; // 0x1848(0x08)
	struct FRotator PreviousRotation; // 0x1850(0x18)
	double PreADSXOffset; // 0x1868(0x08)
	double YOffsetInterpTarget; // 0x1870(0x08)
	double XOffsetInterpTarget; // 0x1878(0x08)
	double YADSOffset; // 0x1880(0x08)
	double XADSOffset; // 0x1888(0x08)
	double ADSAlpha; // 0x1890(0x08)
	double XStrafeOffset; // 0x1898(0x08)
	double YRecoilOffset; // 0x18a0(0x08)
	double XRecoilOffset; // 0x18a8(0x08)
	bool Firing; // 0x18b0(0x01)
	char pad_18B1[0x7]; // 0x18b1(0x07)
	struct FTimerHandle RecoilTimerHandle; // 0x18b8(0x08)
	struct AB_Prj_Bullet_DMR22_C* As B Prj Bullet DMR; // 0x18c0(0x08)
	float Parameter Value; // 0x18c8(0x04)
	char pad_18CC[0x4]; // 0x18cc(0x04)
	struct UMaterialInstanceDynamic* Scope_Material; // 0x18d0(0x08)
	struct UMaterialInstanceDynamic* ScopeGlass; // 0x18d8(0x08)
	struct UMaterialInstanceDynamic* Maingun; // 0x18e0(0x08)
	struct UMaterialInterface* TempMarerial; // 0x18e8(0x08)
	bool MaterialEffectActive; // 0x18f0(0x01)
	char pad_18F1[0x7]; // 0x18f1(0x07)
	struct UMaterialInterface* OldMaingunMaterial; // 0x18f8(0x08)
	struct UMaterialInterface* OldScopeMaterial; // 0x1900(0x08)
	struct UMaterialInterface* OldScopeGlassMaterial; // 0x1908(0x08)

	void HandleLocalTargetingChange(bool IsTargeting); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.HandleLocalTargetingChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TurnOffScopeMaterialEffect(); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.TurnOffScopeMaterialEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TurnOnScopeMaterialEffect(); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.TurnOnScopeMaterialEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetTargeting(bool bNewIsTargeting); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSpawnProjectile(struct AFortProjectileBase* SpawnProjectile); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.OnSpawnProjectile // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ForceScopeFX(); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.ForceScopeFX // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnViewTargetChanged_Event(struct AFortPlayerController* PlayerController, struct AActor* OldViewTarget, struct AActor* NewViewTarget); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.OnViewTargetChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWrapApplied(struct UAthenaItemWrapDefinition* WrapDefinition); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.OnWrapApplied // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_DMR22_Athena_Weap(int32_t EntryPoint); // Function B_DMR22_Athena_Weap.B_DMR22_Athena_Weap_C.ExecuteUbergraph_B_DMR22_Athena_Weap // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

