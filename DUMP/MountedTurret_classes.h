// BlueprintGeneratedClass MountedTurret.MountedTurret_C
// Size: 0x1d51 (Inherited: 0x1be0)
struct AMountedTurret_C : AFortMountedTurret {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1be0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActorComp; // 0x1be8(0x08)
	struct UAudioComponent* AudioOverheat; // 0x1bf0(0x08)
	struct UAudioComponent* AudioOnOverheat; // 0x1bf8(0x08)
	struct UFortLayeredAudioComponent* ServoAudioComponent; // 0x1c00(0x08)
	struct UFortVehicleAimingWeaponComp* FortVehicleAimingWeaponComp; // 0x1c08(0x08)
	struct UCapsuleComponent* PawnCollision; // 0x1c10(0x08)
	struct UParticleSystemComponent* OverHeatScreen_R; // 0x1c18(0x08)
	struct UParticleSystemComponent* OverHeatScreen_L; // 0x1c20(0x08)
	struct UParticleSystemComponent* OverheatSmoke; // 0x1c28(0x08)
	struct UParticleSystemComponent* MagazineGlowR; // 0x1c30(0x08)
	struct UParticleSystemComponent* MagazineGlowL; // 0x1c38(0x08)
	struct UParticleSystemComponent* BarrelGlowL; // 0x1c40(0x08)
	struct UParticleSystemComponent* BarrelGlowR; // 0x1c48(0x08)
	struct UBoxComponent* OverlapVolume; // 0x1c50(0x08)
	struct USoundBase* OnDeathSound; // 0x1c58(0x08)
	struct UGameplayEffect* GE_BlockWeaponFire; // 0x1c60(0x08)
	struct UGameplayEffect* GE_GrantWeapon; // 0x1c68(0x08)
	struct AFortPlayerPawn* DriverPawn; // 0x1c70(0x08)
	struct FActiveGameplayEffectHandle GE_EnterTurret; // 0x1c78(0x08)
	struct UAnimMontage* PlayerEnterAnimation; // 0x1c80(0x08)
	struct UAnimMontage* TurretEnterAnimation; // 0x1c88(0x08)
	struct UAnimMontage* PlayerFireAnimation; // 0x1c90(0x08)
	struct AFortWeapon* PlayerWeapon; // 0x1c98(0x08)
	struct AFortWeaponRangedDual* TurretWeapon; // 0x1ca0(0x08)
	struct FTimerHandle GetWeaponTimer; // 0x1ca8(0x08)
	struct FTimerHandle OverheatCostmeticTimer; // 0x1cb0(0x08)
	struct UAnimMontage* TurretFireLeftAnimation; // 0x1cb8(0x08)
	struct UAnimMontage* TurretFireRightAnimation; // 0x1cc0(0x08)
	struct UCurveFloat* OverheatAudioCurve; // 0x1cc8(0x08)
	struct FRotator TurretRotation; // 0x1cd0(0x18)
	struct UAnimMontage* TurretStartAnimation; // 0x1ce8(0x08)
	struct UAnimMontage* TurretExitAnimation; // 0x1cf0(0x08)
	double ZeroIfOverheating; // 0x1cf8(0x08)
	bool bCanInteract; // 0x1d00(0x01)
	char pad_1D01[0x7]; // 0x1d01(0x07)
	double fInteractionDelay; // 0x1d08(0x08)
	double fInteractionDelayOffset; // 0x1d10(0x08)
	struct TArray<struct FGameplayTag> Hide HUD Gameplay Tags; // 0x1d18(0x10)
	int32_t ReplicateOverheatOf20; // 0x1d28(0x04)
	char pad_1D2C[0x4]; // 0x1d2c(0x04)
	struct FTimerHandle OverheatOnServerTimer; // 0x1d30(0x08)
	bool bStartMountedTurretAwake; // 0x1d38(0x01)
	char pad_1D39[0x7]; // 0x1d39(0x07)
	struct AFortPlayerControllerGameplay* DriverControllerGameplay; // 0x1d40(0x08)
	struct USoundBase* ServoSound; // 0x1d48(0x08)
	bool bSkipOverheatBind; // 0x1d50(0x01)

	void HandleLinkedActorDestroyed(); // Function MountedTurret.MountedTurret_C.HandleLinkedActorDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Magazine Size Coefficient(double Ammo Pool); // Function MountedTurret.MountedTurret_C.Set Magazine Size Coefficient // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnGetExitSocketTransform(struct FName ExitSocket, int32_t SocketIndex, struct FTransform InTransform, bool& bOutOverriderExitSocket, struct FTransform& OutOverrideTransform); // Function MountedTurret.MountedTurret_C.OnGetExitSocketTransform // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BP_CanInteract(struct AController* InController); // Function MountedTurret.MountedTurret_C.BP_CanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	double CurrentOverheatScalar(); // Function MountedTurret.MountedTurret_C.CurrentOverheatScalar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetIconPlacement(struct AActor* SelfActor, struct AActor* ViewingActor, struct FVector& OutLocation, struct FVector& OutExtents); // Function MountedTurret.MountedTurret_C.GetIconPlacement // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UserConstructionScript(); // Function MountedTurret.MountedTurret_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_761292E24A89E794B70E9C9206892380(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyEnd_761292E24A89E794B70E9C9206892380 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_761292E24A89E794B70E9C9206892380(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyBegin_761292E24A89E794B70E9C9206892380 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_761292E24A89E794B70E9C9206892380(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnInterrupted_761292E24A89E794B70E9C9206892380 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_761292E24A89E794B70E9C9206892380(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnBlendOut_761292E24A89E794B70E9C9206892380 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_761292E24A89E794B70E9C9206892380(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnCompleted_761292E24A89E794B70E9C9206892380 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_43B2536B49D71F6DB759A49367555C0D(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyEnd_43B2536B49D71F6DB759A49367555C0D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_43B2536B49D71F6DB759A49367555C0D(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyBegin_43B2536B49D71F6DB759A49367555C0D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_43B2536B49D71F6DB759A49367555C0D(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnInterrupted_43B2536B49D71F6DB759A49367555C0D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_43B2536B49D71F6DB759A49367555C0D(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnBlendOut_43B2536B49D71F6DB759A49367555C0D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_43B2536B49D71F6DB759A49367555C0D(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnCompleted_43B2536B49D71F6DB759A49367555C0D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnInterrupted_BE998F90462B0AB8D888EB90F677D680 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnBlendOut_BE998F90462B0AB8D888EB90F677D680 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_BE998F90462B0AB8D888EB90F677D680(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnCompleted_BE998F90462B0AB8D888EB90F677D680 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnInterrupted_C545F8F445E4AE78043EFD8678F12483 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnBlendOut_C545F8F445E4AE78043EFD8678F12483 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_C545F8F445E4AE78043EFD8678F12483(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnCompleted_C545F8F445E4AE78043EFD8678F12483 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_1E67D99B41450F4F37BDBF8C6F8AAE0B(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyEnd_1E67D99B41450F4F37BDBF8C6F8AAE0B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_1E67D99B41450F4F37BDBF8C6F8AAE0B(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyBegin_1E67D99B41450F4F37BDBF8C6F8AAE0B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_1E67D99B41450F4F37BDBF8C6F8AAE0B(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnInterrupted_1E67D99B41450F4F37BDBF8C6F8AAE0B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_1E67D99B41450F4F37BDBF8C6F8AAE0B(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnBlendOut_1E67D99B41450F4F37BDBF8C6F8AAE0B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_1E67D99B41450F4F37BDBF8C6F8AAE0B(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnCompleted_1E67D99B41450F4F37BDBF8C6F8AAE0B // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnInterrupted_DC5D83234D74654A536804AC35F92FE4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnBlendOut_DC5D83234D74654A536804AC35F92FE4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_DC5D83234D74654A536804AC35F92FE4(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnCompleted_DC5D83234D74654A536804AC35F92FE4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyEnd_F3BC573B4FBE468D904567BB4DB89D59(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyEnd_F3BC573B4FBE468D904567BB4DB89D59 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_F3BC573B4FBE468D904567BB4DB89D59(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnNotifyBegin_F3BC573B4FBE468D904567BB4DB89D59 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_F3BC573B4FBE468D904567BB4DB89D59(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnInterrupted_F3BC573B4FBE468D904567BB4DB89D59 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_F3BC573B4FBE468D904567BB4DB89D59(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnBlendOut_F3BC573B4FBE468D904567BB4DB89D59 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_F3BC573B4FBE468D904567BB4DB89D59(struct FName NotifyName); // Function MountedTurret.MountedTurret_C.OnCompleted_F3BC573B4FBE468D904567BB4DB89D59 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function MountedTurret.MountedTurret_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnPawnEnterVehicle(struct AFortPlayerPawn* PlayerPawn, int32_t SeatIdx); // Function MountedTurret.MountedTurret_C.OnPawnEnterVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPawnExitVehicle(struct AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName); // Function MountedTurret.MountedTurret_C.OnPawnExitVehicle // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function MountedTurret.MountedTurret_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function MountedTurret.MountedTurret_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Get Turret Weapon(); // Function MountedTurret.MountedTurret_C.Get Turret Weapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Event On Weapon Fired(enum class EDualWeaponHand Hand, bool bPersistantFire); // Function MountedTurret.MountedTurret_C.Event On Weapon Fired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideQuickBarForAbility(bool Hide); // Function MountedTurret.MountedTurret_C.HideQuickBarForAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Clear FX And AudioTimer(); // Function MountedTurret.MountedTurret_C.Clear FX And AudioTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Start FX And Audio Timer(); // Function MountedTurret.MountedTurret_C.Start FX And Audio Timer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHoldExitStarted(struct AFortPawn* ExitingPawn, float ExitDuration); // Function MountedTurret.MountedTurret_C.OnHoldExitStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnHoldExitStopped(struct AFortPawn* ExitingPawn); // Function MountedTurret.MountedTurret_C.OnHoldExitStopped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void overheat changed(float CurrentValue, float MaxValue, enum class EFortWeaponOverheatState State, bool bIsInCooldown); // Function MountedTurret.MountedTurret_C.overheat changed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateOverheatOnServer(); // Function MountedTurret.MountedTurret_C.UpdateOverheatOnServer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CallNativeUpdateOverheatCosmetics(); // Function MountedTurret.MountedTurret_C.CallNativeUpdateOverheatCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortVehicleAimingWeaponComp_K2Node_ComponentBoundEvent_0_OnOverheatStateChanged__DelegateSignature(enum class EFortWeaponOverheatState OverheatState); // Function MountedTurret.MountedTurret_C.BndEvt__FortVehicleAimingWeaponComp_K2Node_ComponentBoundEvent_0_OnOverheatStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MountedCannon__v2_FortLinkToActorComp_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function MountedTurret.MountedTurret_C.BndEvt__MountedCannon__v2_FortLinkToActorComp_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void PlayDeathEffects(); // Function MountedTurret.MountedTurret_C.PlayDeathEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MountedTurret(int32_t EntryPoint); // Function MountedTurret.MountedTurret_C.ExecuteUbergraph_MountedTurret // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

