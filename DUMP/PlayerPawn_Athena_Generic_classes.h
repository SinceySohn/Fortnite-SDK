// BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
// Size: 0x5450 (Inherited: 0x5160)
struct APlayerPawn_Athena_Generic_C : APlayerPawn_Athena_Generic_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5160(0x08)
	struct UAudioParameterComponent_C* AudioParameterComponent; // 0x5168(0x08)
	struct UParticleSystemComponent* Effect_WaterInteraction_FX; // 0x5170(0x08)
	struct UParticleSystemComponent* AnimTrailPS; // 0x5178(0x08)
	bool IsInWater; // 0x5180(0x01)
	char pad_5181[0x7]; // 0x5181(0x07)
	struct FRotator RunWalkParticleRotation; // 0x5188(0x18)
	int32_t WaterCounter; // 0x51a0(0x04)
	char pad_51A4[0x4]; // 0x51a4(0x04)
	double Tick Delta Seconds; // 0x51a8(0x08)
	struct USoundBase* Sound_Shield_Impact; // 0x51b0(0x08)
	struct USoundBase* Sound_Shield_Destroyed; // 0x51b8(0x08)
	struct USoundBase* Sound_Shield_Destroyed_1P; // 0x51c0(0x08)
	struct USoundBase* Sound_Shield_FullyCharged; // 0x51c8(0x08)
	struct USoundBase* Sound_Shield_StartRecharge; // 0x51d0(0x08)
	bool BodyValid; // 0x51d8(0x01)
	bool BackpackValid; // 0x51d9(0x01)
	bool HatValid; // 0x51da(0x01)
	bool FaceValid; // 0x51db(0x01)
	bool CharmValid; // 0x51dc(0x01)
	bool HeadValid; // 0x51dd(0x01)
	char pad_51DE[0x2]; // 0x51de(0x02)
	struct TArray<struct UMaterialInstanceDynamic*> TempArray; // 0x51e0(0x10)
	struct USceneComponent* Sound Player Hit; // 0x51f0(0x08)
	struct UUserWidget* SpeechBubbleWidgetClass; // 0x51f8(0x08)
	struct FText LastSpeechText; // 0x5200(0x18)
	bool UseAnimTrailsNotifies; // 0x5218(0x01)
	char pad_5219[0x7]; // 0x5219(0x07)
	double Time when you'll be able to splash again; // 0x5220(0x08)
	struct AActor* CurrentWaterMeshActor; // 0x5228(0x08)
	struct FHitResult WaterTraceHitLocation; // 0x5230(0xe0)
	struct FVector StableVelocityVector; // 0x5310(0x18)
	struct UParticleSystem* PlayerRunTemplate_Ground; // 0x5328(0x08)
	struct UParticleSystem* PlayerWalkTemplate_Ground; // 0x5330(0x08)
	struct UParticleSystem* PlayerRunTemplate_Water; // 0x5338(0x08)
	struct UParticleSystem* PlayerWalkTemplate_Water; // 0x5340(0x08)
	struct USkeletalMesh* Pawn Charm Skeletal Mesh; // 0x5348(0x08)
	struct UParticleSystemComponent* AnimTrailsPS_Ref; // 0x5350(0x08)
	struct UMaterialInterface* WeaponMaterialOverride; // 0x5358(0x08)
	bool TickWaterLevel; // 0x5360(0x01)
	char pad_5361[0x7]; // 0x5361(0x07)
	struct UTextureRenderTarget2D* WetnessDepthTexture; // 0x5368(0x08)
	struct UMaterialInstanceDynamic* WaterLevelMID; // 0x5370(0x08)
	struct UMaterialInstanceDynamic* WaterDecayMID; // 0x5378(0x08)
	bool Was RTT Enabled Var Set; // 0x5380(0x01)
	bool Is RTT Enabled; // 0x5381(0x01)
	char pad_5382[0x6]; // 0x5382(0x06)
	double StartingMinCapsuleShadowVis; // 0x5388(0x08)
	bool IsShielded; // 0x5390(0x01)
	char pad_5391[0x7]; // 0x5391(0x07)
	double InstigatorCheckDistanceSqrd; // 0x5398(0x08)
	double SlideDustActivateSpeed; // 0x53a0(0x08)
	bool CanSpawnSlideKickupFX?; // 0x53a8(0x01)
	char pad_53A9[0x7]; // 0x53a9(0x07)
	struct UParticleSystem* Effect_Player_ShieldActivate; // 0x53b0(0x08)
	struct UParticleSystem* Effect_PLayer_ShieldBreak; // 0x53b8(0x08)
	bool GhostMode; // 0x53c0(0x01)
	char pad_53C1[0x7]; // 0x53c1(0x07)
	struct UFXSystemComponent* OverrideAnimTrail; // 0x53c8(0x08)
	struct FMulticastInlineDelegate AnimNotify_Begin; // 0x53d0(0x10)
	struct FMulticastInlineDelegate AnimNotify_End; // 0x53e0(0x10)
	struct USoundBase* Sound_Shield_Destroyed_2D; // 0x53f0(0x08)
	struct USoundBase* Sound_Shield_Destroyed_Crit_2D; // 0x53f8(0x08)
	struct UFXSystemComponent* AnimTrailFX; // 0x5400(0x08)
	struct FMulticastInlineDelegate PlayDamageEffect; // 0x5408(0x10)
	struct FName Component Tag AnimTrailFX Const; // 0x5418(0x04)
	char pad_541C[0x4]; // 0x541c(0x04)
	double ReppedCapsuleExtraHalfHeight; // 0x5420(0x08)
	double CachedCapsuleHalfHeight; // 0x5428(0x08)
	struct FMulticastInlineDelegate OnCharacterPartsMIDInitialized; // 0x5430(0x10)
	struct FMulticastInlineDelegate OnShieldBreak; // 0x5440(0x10)

	void GetActorSoundParams(struct TArray<struct FAudioParameter>& Params); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GetActorSoundParams // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void Melee_Effect_Color(struct FVector& Melee_Color_Set); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateViewTargetAudioParameters(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UpdateViewTargetAudioParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Hide VFX in Frontend Hologram(bool isFrontEndHologram); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Hide VFX in Frontend Hologram // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_CapsuleEnlarged(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnRep_CapsuleEnlarged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayShieldDestroyedSound(struct FGameplayCueParameters& GameplayCueParameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayShieldDestroyedSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReInitFrontendPetDisplay(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReInitFrontendPetDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Are the wind and water RTT passes enabled(bool& NewParam); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DisableWaterLevelTick(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Create and Duplicate Effect Poseable Skeletal Mesh(enum class EFortCustomPartType BodyType, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority, struct UPoseableMeshComponent*& PoseableMesh); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SlaveAMeshToTheBody(struct USkeletalMeshComponent* Mesh, struct USkeletalMeshComponent* Master); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Create and Duplicate Effect Skeletal Meshes Parent(enum class EFortCustomPartType BodyType, struct USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MeleeSwingRight(bool First Right); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MeleeSwingLeft(bool First Left); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MeleeSwingRight_End(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void MeleeSwingLeft_End(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnLanded(struct FHitResult& Hit); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void FootStepLeft(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FootStepRight(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCharacterPartsReinitialized(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Entered WaterVolume(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CharacterDestroyed(struct AActor* DestroyedActor); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindOnDestroyed(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimTrailsNotify(bool bActive); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimTrailsSetup(struct UParticleSystem* ParticleSystemReference, struct UNiagaraSystem* NiagaraSystemReference, struct FName FirstSocketName, struct FName SecondSocketName, float Width, struct UFXSystemComponent* OverrideParticleComp, struct FName OverideFirstSocketName, struct FName OverideSecondSocketName); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimTrailsDisable(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Abilities.SpookyMist.Loop(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.SpookyMist.Loop // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Shield.PotionConsumed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.PotionConsumed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Damage.Shielded(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Shield.Destroyed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Shield.Reapplied(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Loop.Shadow.Bomb(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Loop.Shadow.Bomb // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleLandFX(bool NewHidden); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ToggleLandFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMovementStyleChanged(enum class EFortMovementStyle PreviousMovementStyle, enum class EFortMovementStyle NewMovementStyle); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnMovementStyleChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnBecomeViewTarget(struct APlayerController* PC); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.K2_OnBecomeViewTarget // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.K2_OnEndViewTarget // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PawnUniqueIDSet(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PawnUniqueIDSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerPawn_Athena_Generic(int32_t EntryPoint); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnShieldBreak__DelegateSignature(bool IsOverShield); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnShieldBreak__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCharacterPartsMIDInitialized__DelegateSignature(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsMIDInitialized__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayDamageEffect__DelegateSignature(struct FGameplayTagContainer Damage Tags, struct FHitResult Hit Info, struct AFortPawn* Instigated By, struct AActor* Damage Causer); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayDamageEffect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimNotify_End__DelegateSignature(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_End__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimNotify_Begin__DelegateSignature(bool bActive); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_Begin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

