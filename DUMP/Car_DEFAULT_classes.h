// BlueprintGeneratedClass Car_DEFAULT.Car_DEFAULT_C
// Size: 0x1198 (Inherited: 0xef0)
struct ACar_DEFAULT_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct UBuildingActorLootDropOnDeathComponent_C* BuildingActorLootDropOnDeathComponent; // 0xef8(0x08)
	float Timeline_2_SirenLightMultiplier_432AD11E41A8AFC288A559BCD8B4B9AF; // 0xf00(0x04)
	enum class ETimelineDirection Timeline_2__Direction_432AD11E41A8AFC288A559BCD8B4B9AF; // 0xf04(0x01)
	char pad_F05[0x3]; // 0xf05(0x03)
	struct UTimelineComponent* ; // 0xf08(0x08)
	float BounceCar_Vertical_Bounce_Component_80AD679E42DD1FF308EBD994998BB983; // 0xf10(0x04)
	enum class ETimelineDirection BounceCar__Direction_80AD679E42DD1FF308EBD994998BB983; // 0xf14(0x01)
	char pad_F15[0x3]; // 0xf15(0x03)
	struct UTimelineComponent* BounceCar; // 0xf18(0x08)
	float Timeline_0_AlarmLightMultiplier_431FAFC04FFC4DEBB684B3B6AF7510E7; // 0xf20(0x04)
	enum class ETimelineDirection Timeline_0__Direction_431FAFC04FFC4DEBB684B3B6AF7510E7; // 0xf24(0x01)
	char pad_F25[0x3]; // 0xf25(0x03)
	struct UTimelineComponent* ; // 0xf28(0x08)
	bool OverallAlarmCycleFinished; // 0xf30(0x01)
	char pad_F31[0x3]; // 0xf31(0x03)
	struct FLinearColor InitialEmissiveMultiplier; // 0xf34(0x10)
	struct FLinearColor InitialEmissiveMultiplier2; // 0xf44(0x10)
	int32_t AlarmLightCounter; // 0xf54(0x04)
	bool SoundIsRetriggerable; // 0xf58(0x01)
	bool CurrentFlashAnimationCycleFinished; // 0xf59(0x01)
	char pad_F5A[0x2]; // 0xf5a(0x02)
	int32_t NumberOfTimesTheLightsFlashWhenHit; // 0xf5c(0x04)
	double SirenLightEmissiveMultiplier; // 0xf60(0x08)
	bool SirenLightOn; // 0xf68(0x01)
	char pad_F69[0x3]; // 0xf69(0x03)
	struct FName Emissive Multiplier 2; // 0xf6c(0x04)
	struct FName Emissive Multiplier; // 0xf70(0x04)
	char pad_F74[0x4]; // 0xf74(0x04)
	struct USoundBase* Sound - HitAlarm; // 0xf78(0x08)
	bool Use Emissive 2; // 0xf80(0x01)
	char pad_F81[0x7]; // 0xf81(0x07)
	struct USoundBase* Sound - Jump on Car; // 0xf88(0x08)
	double SuspensionMovementAmount; // 0xf90(0x08)
	bool ParticleEffectHas_NOT_AlreadyBeenTriggered; // 0xf98(0x01)
	char pad_F99[0x7]; // 0xf99(0x07)
	struct UParticleSystemComponent* EngineSteamParticleEffect; // 0xfa0(0x08)
	struct USoundBase* Sound - Hit AutoBody; // 0xfa8(0x08)
	bool canMakeJumpingNoiseAgain; // 0xfb0(0x01)
	bool CarAlarmIsCurrentlyMakingNoise; // 0xfb1(0x01)
	bool CarAlarmEnabled; // 0xfb2(0x01)
	bool RandomlyDisableSomeCarAlarms; // 0xfb3(0x01)
	char pad_FB4[0x4]; // 0xfb4(0x04)
	double PercentageChanceOfCarAlarmsBeingDisabled; // 0xfb8(0x08)
	struct UPointLightComponent* HLight1; // 0xfc0(0x08)
	struct FVector HLight1SocketLocation; // 0xfc8(0x18)
	struct FVector HLight2SocketLocation; // 0xfe0(0x18)
	struct TArray<struct UMaterialInstanceDynamic*> AnimatingMIDArray; // 0xff8(0x10)
	struct UAudioComponent* AudibleAlarmSound; // 0x1008(0x08)
	bool UseCarBounce; // 0x1010(0x01)
	bool UseCarAlarm; // 0x1011(0x01)
	char pad_1012[0x6]; // 0x1012(0x06)
	double Headlight Emissive Brightness; // 0x1018(0x08)
	bool IsCarAlarmEnabledInitialized; // 0x1020(0x01)
	bool DebugWind; // 0x1021(0x01)
	char pad_1022[0x6]; // 0x1022(0x06)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x1028(0x10)
	struct TArray<struct UMaterialInterface*> IntenseWindMaterialsForPreview; // 0x1038(0x10)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0x1048(0x08)
	double Debug Wind Intensity; // 0x1050(0x08)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0x1058(0x08)
	bool CanDropOilDecal; // 0x1060(0x01)
	char pad_1061[0x7]; // 0x1061(0x07)
	double Wind Yaw Rotation; // 0x1068(0x08)
	struct UPointLightComponent* Taillight1; // 0x1070(0x08)
	struct UPointLightComponent* Taillight2; // 0x1078(0x08)
	double TailLightBrightness; // 0x1080(0x08)
	bool TailLightsExist; // 0x1088(0x01)
	bool HeadLightsExist; // 0x1089(0x01)
	char pad_108A[0x6]; // 0x108a(0x06)
	struct USpotLightComponent* HLight2; // 0x1090(0x08)
	double HeadLightLightBrightness; // 0x1098(0x08)
	struct FVector TLight1SocketLocation; // 0x10a0(0x18)
	struct FVector TLight2SocketLocation; // 0x10b8(0x18)
	struct FVector Bounce Offset; // 0x10d0(0x18)
	struct FVector hlight2 - impact bounce light location; // 0x10e8(0x18)
	struct FVector tlight2 - impact bounce light location; // 0x1100(0x18)
	bool Car Currently Bouncing From Jump; // 0x1118(0x01)
	char pad_1119[0x7]; // 0x1119(0x07)
	struct FVector hlight1 - impact bounce light location; // 0x1120(0x18)
	struct FVector tlight1 - impact bounce light location; // 0x1138(0x18)
	bool Randomly start with some cars lights on; // 0x1150(0x01)
	char pad_1151[0x7]; // 0x1151(0x07)
	double Percentage chance of lights being left off; // 0x1158(0x08)
	double Final Random Light Intensity Variance; // 0x1160(0x08)
	bool This Car's Lights Have Been Enabled; // 0x1168(0x01)
	bool TurnHeadLightsOn; // 0x1169(0x01)
	char pad_116A[0x6]; // 0x116a(0x06)
	double TimeSinceLastJumpSound; // 0x1170(0x08)
	double MinTimeBetweenJumpSound; // 0x1178(0x08)
	struct FMulticastInlineDelegate OnPlayDeathEffects; // 0x1180(0x10)
	double currentLightRuntimeIntensity; // 0x1190(0x08)

	void Construct Clean Up Lights(); // Function Car_DEFAULT.Car_DEFAULT_C.Construct Clean Up Lights // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void construct_ValidateLightsOnVars(bool& doesHaveLights); // Function Car_DEFAULT.Car_DEFAULT_C.construct_ValidateLightsOnVars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void validateLightVisibility(); // Function Car_DEFAULT.Car_DEFAULT_C.validateLightVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void generateMeshMIDs(); // Function Car_DEFAULT.Car_DEFAULT_C.generateMeshMIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void getCarMatsForLights(struct TArray<struct UMaterialInstanceDynamic*>& outMaterials); // Function Car_DEFAULT.Car_DEFAULT_C.getCarMatsForLights // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayJumpOnCarSound(struct FVector Location); // Function Car_DEFAULT.Car_DEFAULT_C.PlayJumpOnCarSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void toggle light visibility(bool bNewVisibility); // Function Car_DEFAULT.Car_DEFAULT_C.toggle light visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Randomize the target brightness levels(); // Function Car_DEFAULT.Car_DEFAULT_C.Randomize the target brightness levels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Light Brightness(double 0-1 Intensity, bool Include Second Emissive Channel, bool Force); // Function Car_DEFAULT.Car_DEFAULT_C.Set Light Brightness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	double MaterialEditorSine(double Look up value, double Period); // Function Car_DEFAULT.Car_DEFAULT_C.MaterialEditorSine // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	double SetCarAlarmEnabledBasedOnLocation(struct FVector Location, bool& NewParam); // Function Car_DEFAULT.Car_DEFAULT_C.SetCarAlarmEnabledBasedOnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void setcanmakebouncingnoisetrue(); // Function Car_DEFAULT.Car_DEFAULT_C.setcanmakebouncingnoisetrue // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopCarAlarmFromPlaying(); // Function Car_DEFAULT.Car_DEFAULT_C.StopCarAlarmFromPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Car_DEFAULT.Car_DEFAULT_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function Car_DEFAULT.Car_DEFAULT_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function Car_DEFAULT.Car_DEFAULT_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void BounceCar__FinishedFunc(); // Function Car_DEFAULT.Car_DEFAULT_C.BounceCar__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void BounceCar__UpdateFunc(); // Function Car_DEFAULT.Car_DEFAULT_C.BounceCar__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_2__FinishedFunc(); // Function Car_DEFAULT.Car_DEFAULT_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_2__UpdateFunc(); // Function Car_DEFAULT.Car_DEFAULT_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_2__FireOffNoise__EventFunc(); // Function Car_DEFAULT.Car_DEFAULT_C.Timeline_2__FireOffNoise__EventFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Car_DEFAULT.Car_DEFAULT_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Car_DEFAULT.Car_DEFAULT_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void StartSirenLight(); // Function Car_DEFAULT.Car_DEFAULT_C.StartSirenLight // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FadeSirenLight(); // Function Car_DEFAULT.Car_DEFAULT_C.FadeSirenLight // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TriggerLowHealthParticleEffect(); // Function Car_DEFAULT.Car_DEFAULT_C.TriggerLowHealthParticleEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Car_DEFAULT.Car_DEFAULT_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Car_DEFAULT.Car_DEFAULT_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Car_DEFAULT.Car_DEFAULT_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Car_DEFAULT.Car_DEFAULT_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void FireOffCarAlarm(); // Function Car_DEFAULT.Car_DEFAULT_C.FireOffCarAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBounceAnimationUpdate(struct FFortBounceData& Data); // Function Car_DEFAULT.Car_DEFAULT_C.OnBounceAnimationUpdate // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Hit Bounce Finished(); // Function Car_DEFAULT.Car_DEFAULT_C.Hit Bounce Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Player jump based bounce (); // Function Car_DEFAULT.Car_DEFAULT_C.Player jump based bounce  // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function Car_DEFAULT.Car_DEFAULT_C.OnDayPhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Car_DEFAULT(int32_t EntryPoint); // Function Car_DEFAULT.Car_DEFAULT_C.ExecuteUbergraph_Car_DEFAULT // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnPlayDeathEffects__DelegateSignature(); // Function Car_DEFAULT.Car_DEFAULT_C.OnPlayDeathEffects__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

