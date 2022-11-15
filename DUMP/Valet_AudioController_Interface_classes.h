// BlueprintGeneratedClass Valet_AudioController_Interface.Valet_AudioController_Interface_C
// Size: 0x28 (Inherited: 0x28)
struct UValet_AudioController_Interface_C : UInterface {

	void OnUpdateOverheat(double OverheatValue, double MaxValue, enum class EFortWeaponOverheatState State, bool IsInCoolDown); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnUpdateOverheat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnVehicleFadedOut(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnVehicleFadedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateVehicleFade(double Fade Amount); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnUpdateVehicleFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCollisionHit(struct FVector Impact Point, struct AActor* Actor Hit); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnCollisionHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHitPlayer(struct FVector ImpactPoint); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHitPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSleepStateChange(bool Awake); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnSleepStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBoostEnd(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBoostEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBoostStart(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBoostStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDestroy(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamage(double Damage Value); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTirePop(struct FName Bone Name); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnTirePop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWindowBreak(struct FName Bone Name); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnWindowBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWaterStateChanged(bool Is Entering Water); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnWaterStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDriverStateChanged(bool Enter); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnDriverStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStopTick(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnStopTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHorn(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHorn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHandbrake(bool Start); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnHandbrake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSuspensionCollision(bool& FilteredHit, double& Magnitude); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnSuspensionCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBodyCollision(struct FVector HitLocation, struct FVector NormalImpulse, bool& FilteredHit, double& Magnitude); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnBodyCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCacheReferences(struct AFortDagwoodVehicle* Vehicle); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnCacheReferences // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTick(); // Function Valet_AudioController_Interface.Valet_AudioController_Interface_C.OnTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

