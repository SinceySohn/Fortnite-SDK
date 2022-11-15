// BlueprintGeneratedClass B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C
// Size: 0xb08 (Inherited: 0xa20)
struct AB_Prj_AntiVehicleTurret_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UNiagaraComponent* NS_Turret_Bullet_Trail_Heavy; // 0xa28(0x08)
	struct UStaticMeshComponent* Mesh; // 0xa30(0x08)
	struct UParticleSystemComponent* Ribbon_Trail_PSC; // 0xa38(0x08)
	struct UParticleSystem* Ribbon_Trail_PS; // 0xa40(0x08)
	struct UParticleSystem* Explosion_Generic_PS; // 0xa48(0x08)
	struct UParticleSystemComponent* Explosion_Generic_PSC; // 0xa50(0x08)
	struct USoundBase* Projectile_Explosion_Sound; // 0xa58(0x08)
	struct FVector StopLocation; // 0xa60(0x18)
	struct UParticleSystem* Explosion_Flesh_Damage_PS; // 0xa78(0x08)
	struct FRotator StopRotZ; // 0xa80(0x18)
	struct UParticleSystemComponent* Explosion_Flesh_Damage_PSC; // 0xa98(0x08)
	struct USoundBase* Projectile_Explosion_Water_Sound; // 0xaa0(0x08)
	struct UParticleSystemComponent* RocketTrailPS; // 0xaa8(0x08)
	double Explosion Impact Offset; // 0xab0(0x08)
	bool TimerMaxReached?; // 0xab8(0x01)
	enum class EPhysicalSurface SurfaceType; // 0xab9(0x01)
	char pad_ABA[0x6]; // 0xaba(0x06)
	struct AFortPlayerPawn* PlayerPawn; // 0xac0(0x08)
	struct UFXSystemAsset* FX_Water_Explosion_Asset; // 0xac8(0x08)
	struct UFXSystemAsset* FX_Explosion_Asset; // 0xad0(0x08)
	struct FGameplayTag FeedbackCue; // 0xad8(0x04)
	char pad_ADC[0x4]; // 0xadc(0x04)
	struct FGameplayTagContainer VehicleTags; // 0xae0(0x20)
	double Time; // 0xb00(0x08)

	void SetMaterialParameters(struct FVector Left, struct FVector Right, enum class EDualWeaponHand Index); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.SetMaterialParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void FuseTimerMax(); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.FuseTimerMax // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HideOnDeath(); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.HideOnDeath // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Projectile_Impact(); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.Projectile_Impact // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_AntiVehicleTurret(int32_t EntryPoint); // Function B_Prj_AntiVehicleTurret.B_Prj_AntiVehicleTurret_C.ExecuteUbergraph_B_Prj_AntiVehicleTurret // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

