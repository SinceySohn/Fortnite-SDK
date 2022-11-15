// BlueprintGeneratedClass BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C
// Size: 0x6f0 (Inherited: 0x3d8)
struct ABP_Valet_AudioController_Parent_C : AFortValetAudioController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct USynthComponentMoto* SynthComponentMoto; // 0x3e0(0x08)
	struct UFortCollisionAudioComponent* CollisionAudio_HitObject; // 0x3e8(0x08)
	struct UAudioComponent* Horn; // 0x3f0(0x08)
	struct UAudioComponent* Engine_OnOff; // 0x3f8(0x08)
	struct UFortLayeredAudioComponent* Engine; // 0x400(0x08)
	struct UFortCollisionAudioComponent* CollisionAudio_Suspension; // 0x408(0x08)
	struct UFortCollisionAudioComponent* CollisionAudio_Body; // 0x410(0x08)
	float Moto_FadeOut_Volume_A91224EC482A9C0F90B4E198803A420B; // 0x418(0x04)
	enum class ETimelineDirection Moto_FadeOut__Direction_A91224EC482A9C0F90B4E198803A420B; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct UTimelineComponent* Moto FadeOut; // 0x420(0x08)
	float Shift_Up_Alpha_93F8CCBD410A7922FEA656ACD9B2EFFB; // 0x428(0x04)
	enum class ETimelineDirection Shift_Up__Direction_93F8CCBD410A7922FEA656ACD9B2EFFB; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	struct UTimelineComponent* Shift Up; // 0x430(0x08)
	struct TMap<enum class EPhysicalSurface, int32_t> SurfaceToSwitchMap; // 0x438(0x50)
	struct TSoftObjectPtr<USoundWave> EngineIdleLoopWave; // 0x488(0x28)
	struct FName EngineIdleWaveParam; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct TSoftObjectPtr<USoundWave> EngineStartWave; // 0x4b8(0x28)
	struct FName EngineStartWaveParam; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct TSoftObjectPtr<USoundWave> EngineOffWave; // 0x4e8(0x28)
	struct FName EngineOffWaveParam; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct TSoftObjectPtr<USoundWave> HornWave; // 0x518(0x28)
	struct FName HornWaveParam; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct USoundBase* ShiftSoundCue; // 0x548(0x08)
	struct FVector2D RPMWobbleRange; // 0x550(0x10)
	struct UCurveFloat* ShiftUpCurve; // 0x560(0x08)
	struct FVector2D ShiftUpCurveRange; // 0x568(0x10)
	struct FVector2D ShiftUpPositiveVarianceMultiplier; // 0x578(0x10)
	struct FVector2D ShiftUpNegativeVarianceMultiplier; // 0x588(0x10)
	struct FVector2D ShiftCurveDurationRange; // 0x598(0x10)
	struct USoundBase* ShiftDownSoundCue; // 0x5a8(0x08)
	struct USoundBase* WaterEnterSoundCue; // 0x5b0(0x08)
	struct USoundBase* WaterExitSoundCue; // 0x5b8(0x08)
	struct UMotoSynthPreset* MotoSynthPreset; // 0x5c0(0x08)
	bool bAssetsLoaded; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct USoundBase* TirePoppedSoundCue; // 0x5d0(0x08)
	struct USoundBase* WindowBreakSoundCue; // 0x5d8(0x08)
	struct USoundBase* DamagedCue; // 0x5e0(0x08)
	struct USoundBase* PreDestroySoundCue; // 0x5e8(0x08)
	struct USoundBase* DestroySoundCue; // 0x5f0(0x08)
	struct USoundBase* DestroyedLandSound; // 0x5f8(0x08)
	bool bDestroyed; // 0x600(0x01)
	char pad_601[0x7]; // 0x601(0x07)
	struct UAudioComponent* DamageAudioComponent; // 0x608(0x08)
	struct USoundBase* DestroyedPassBySound; // 0x610(0x08)
	struct USoundBase* BoostSoundCue; // 0x618(0x08)
	struct USoundBase* BoostEndSoundCue; // 0x620(0x08)
	int32_t TiresPopped; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	double DamageValue; // 0x630(0x08)
	bool bMotoSynthStopped; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct USoundBase* CollisionBodyLightSoundCue; // 0x640(0x08)
	struct FVector2D HornPitchOffset; // 0x648(0x10)
	double EngineonDelay; // 0x658(0x08)
	struct FName ReversingWaveParam; // 0x660(0x04)
	bool bHasReverseAudio; // 0x664(0x01)
	char pad_665[0x3]; // 0x665(0x03)
	double ReversingTriggerTime; // 0x668(0x08)
	struct TSoftObjectPtr<USoundWave> ReversingWave; // 0x670(0x28)
	struct FName TireBoneName; // 0x698(0x04)
	bool bInitialDestroy; // 0x69c(0x01)
	char pad_69D[0x3]; // 0x69d(0x03)
	struct TArray<enum class EObjectTypeQuery> Object Types; // 0x6a0(0x10)
	struct FTimerHandle LaunchOverlapHandle; // 0x6b0(0x08)
	struct UAudioComponent* LaunchPassbyAudio; // 0x6b8(0x08)
	struct FTimerHandle LaunchUpOverlapHandle; // 0x6c0(0x08)
	struct FVector TireOffset; // 0x6c8(0x18)
	struct UAudioComponent* PreDestroyAudioComponent; // 0x6e0(0x08)
	struct UAudioComponent* DestroyAudio; // 0x6e8(0x08)

	void OnSuspensionCollision(bool& FilteredHit, double& Magnitude); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnSuspensionCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBodyCollision(struct FVector HitLocation, struct FVector NormalImpulse, bool& FilteredHit, double& Magnitude); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnBodyCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopDamageAudio(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.StopDamageAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Direction(struct FVector From, struct FVector To, struct FVector Offset, struct FVector& OutputPin); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Get Direction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void On Launch Passby(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.On Launch Passby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destroyed Land Audio(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Destroyed Land Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Vehicle End Play(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Vehicle End Play // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Tire Bone Name(struct FName& TireBoneName); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Get Tire Bone Name // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetReversingParameter(bool InBool); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.SetReversingParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CallReversingAudio(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.CallReversingAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LocalPlayerInVehicleBP(bool& Result); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.LocalPlayerInVehicleBP // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	struct FVector2D CalculateRPMWobbleRange(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.CalculateRPMWobbleRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetVehicleSurfaceType(int32_t& Surface ID); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.GetVehicleSurfaceType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Shift Up__FinishedFunc(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Shift Up__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Shift Up__UpdateFunc(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Shift Up__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Moto FadeOut__FinishedFunc(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Moto FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Moto FadeOut__UpdateFunc(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Moto FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238EEAC03718(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238EEAC03718 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238E15993521(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E15993521 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238E201F8882(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E201F8882 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238E616A5320(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E616A5320 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238E9E335119(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E9E335119 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238E1ED77825(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E1ED77825 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238E6A241E24(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E6A241E24 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238EBA52E151(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238EBA52E151 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238E54ECEE83(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E54ECEE83 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_034A6FEB4ACEA4EE540B238ECEA18750(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238ECEA18750 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHitPlayer(struct FVector ImpactPoint); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnHitPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateOverheat(double OverheatValue, double MaxValue, enum class EFortWeaponOverheatState State, bool IsInCoolDown); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnUpdateOverheat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCacheReferences(struct AFortDagwoodVehicle* Vehicle); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnCacheReferences // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Engine_K2Node_ComponentBoundEvent_1_OnLayeredAudioComponentOneshot__DelegateSignature(struct UAudioComponent* AudioComponent, struct FName ParameterName, int32_t OneshotIndex); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.BndEvt__Engine_K2Node_ComponentBoundEvent_1_OnLayeredAudioComponentOneshot__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnHandbrake(bool Start); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnHandbrake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTick(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDriverStateChanged(bool Enter); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnDriverStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStopTick(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnStopTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Cancel Tick Stop Rampdown(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Cancel Tick Stop Rampdown // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnHorn(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnHorn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnShiftGear_Event(bool UpShift); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnShiftGear_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnShiftCompleted_Event(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnShiftCompleted_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWaterStateChanged(bool Is Entering Water); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnWaterStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTirePop(struct FName Bone Name); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnTirePop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWindowBreak(struct FName Bone Name); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnWindowBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamage(double Damage Value); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDestroy(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBoostStart(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnBoostStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBoostEnd(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnBoostEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSleepStateChange(bool Awake); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnSleepStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Vehicle Surface Changed(enum class EPhysicalSurface SurfaceTypeVehicleIsOn); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.On Vehicle Surface Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateVehicleFade(double Fade Amount); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnUpdateVehicleFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnVehicleFadedOut(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnVehicleFadedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTireModApplied(struct FTireInfo& AppliedTireMod); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnTireModApplied // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Range(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Range // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCollisionHit(struct FVector Impact Point, struct AActor* Actor Hit); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnCollisionHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EngineIdleOn(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.EngineIdleOn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TurnOnEngineLoops(bool DriverEnter); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.TurnOnEngineLoops // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPawnEnteredVehicleSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnPawnEnteredVehicleSeat // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPawnExitedVehicleSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnPawnExitedVehicleSeat // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventReversingAudio(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.EventReversingAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Destroyed Launch(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.On Destroyed Launch // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destroyed Launch Audio(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Destroyed Launch Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Valet_AudioController_Parent(int32_t EntryPoint); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.ExecuteUbergraph_BP_Valet_AudioController_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

