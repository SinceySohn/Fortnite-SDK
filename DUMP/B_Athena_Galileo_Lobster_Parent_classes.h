// BlueprintGeneratedClass B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C
// Size: 0x1200 (Inherited: 0x1028)
struct AB_Athena_Galileo_Lobster_Parent_C : AFortWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1028(0x08)
	struct UNiagaraComponent* NS_IdleFX; // 0x1030(0x08)
	struct UNiagaraComponent* NS_AnimTrail; // 0x1038(0x08)
	struct UStaticMeshComponent* SM_Galileo_Lobster_Blade_Masked(VisibleUnderwater); // 0x1040(0x08)
	struct UStaticMeshComponent* SM_Galileo_Lobster_Blade; // 0x1048(0x08)
	struct UAudioComponent* IdleAudio; // 0x1050(0x08)
	struct USceneComponent* Scene; // 0x1058(0x08)
	float Timeline_1_Activation_A485AC534A744AA4695BBF8F84A8850F; // 0x1060(0x04)
	enum class ETimelineDirection Timeline_1__Direction_A485AC534A744AA4695BBF8F84A8850F; // 0x1064(0x01)
	char pad_1065[0x3]; // 0x1065(0x03)
	struct UTimelineComponent* ; // 0x1068(0x08)
	struct AFortPlayerPawn* PlayerCharacter; // 0x1070(0x08)
	bool BladeVisibility; // 0x1078(0x01)
	char pad_1079[0x7]; // 0x1079(0x07)
	struct UMaterialInterface* ImpactDecal; // 0x1080(0x08)
	struct FVector ImpactTipLocation; // 0x1088(0x18)
	struct FVector SlashImpactColor; // 0x10a0(0x18)
	struct UParticleSystemComponent* MeleeImpact; // 0x10b8(0x08)
	struct USoundBase* OpenSound; // 0x10c0(0x08)
	struct USoundBase* CloseSound; // 0x10c8(0x08)
	double BladeHueColorShift; // 0x10d0(0x08)
	double BladeRedBlueSwitch; // 0x10d8(0x08)
	double BladeEmissiveIntensity; // 0x10e0(0x08)
	struct FVector BlockingImpactColor; // 0x10e8(0x18)
	struct UFortSkeletalAudioComponent* SkeletalAudioComponent; // 0x1100(0x08)
	struct FGameplayTagContainer T_MeleeAttackAbility; // 0x1108(0x20)
	struct FGameplayTagContainer T_HudElementToHide; // 0x1128(0x20)
	struct FTimerHandle Timer_ShowReticleStatus; // 0x1148(0x08)
	double CurrentPoise; // 0x1150(0x08)
	struct FTimerHandle Timer_BlockBreakWarning; // 0x1158(0x08)
	struct FGameplayTagContainer TC_ActionsThatHideBlade; // 0x1160(0x20)
	struct AEmitterCameraLensEffectBase* LensEffectInterface_BlockBreakWarning; // 0x1180(0x08)
	bool InstantOn; // 0x1188(0x01)
	char pad_1189[0x7]; // 0x1189(0x07)
	struct USoundBase* IdleSound; // 0x1190(0x08)
	struct FName IdleFXAttachSocket; // 0x1198(0x04)
	enum class EAttachmentRule IdleFX Location Rule; // 0x119c(0x01)
	enum class EAttachmentRule Idle FX Rotation Rule; // 0x119d(0x01)
	enum class EAttachmentRule Idle FX Scale Rule; // 0x119e(0x01)
	char pad_119F[0x1]; // 0x119f(0x01)
	struct UParticleSystem* Swing FX Template; // 0x11a0(0x08)
	struct FName SwingFXSocket; // 0x11a8(0x04)
	enum class EAttachmentRule SwingFX Location Rule; // 0x11ac(0x01)
	enum class EAttachmentRule Swing FX Rotation Rule; // 0x11ad(0x01)
	enum class EAttachmentRule Swing FX Scale Rule; // 0x11ae(0x01)
	bool UseAnimTrails; // 0x11af(0x01)
	struct UParticleSystem* Anim Trail Template; // 0x11b0(0x08)
	struct UParticleSystem* AnimTrailsParticles; // 0x11b8(0x08)
	struct FName FirstSocketName; // 0x11c0(0x04)
	struct FName Second Socket Name; // 0x11c4(0x04)
	double Width; // 0x11c8(0x08)
	struct FName OverrideFirstSocketName; // 0x11d0(0x04)
	struct FName OverrideSecond Socket Name; // 0x11d4(0x04)
	struct FLinearColor Blade Color Hot; // 0x11d8(0x10)
	struct FLinearColor Blade Color Cool; // 0x11e8(0x10)
	struct UAudioComponent* CloseAudio; // 0x11f8(0x08)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void UnbindSwingAndAnimTrailEvents(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.UnbindSwingAndAnimTrailEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Bind Swing and Anim Trail Events(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Bind Swing and Anim Trail Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Spawn Impact Particle Effects(struct FRotator Rotation from Tip, struct FVector ImpactPoint, struct AActor* Hit Actor, struct FVector Trace Start, struct FVector Impact Normal, struct FVector Swing Direction); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Spawn Impact Particle Effects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_BladeVisibility(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnRep_BladeVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CreateSkeletalAudioComp(struct UFortSkeletalAudioComponent*& Component); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.CreateSkeletalAudioComp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Unholstered(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Unholstered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Holstered(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Holstered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_1__FinishedFunc(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_1__UpdateFunc(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void ToggleDynamicAudio(bool CanPlayIdleAudio); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ToggleDynamicAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartIdleFX(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.StartIdleFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ToggleDodgePrompt(bool Visible); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ToggleDodgePrompt // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CurrentPoiseChanged(double CurrentPoise); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.CurrentPoiseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlockBreak(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.BlockBreak // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TurnOnLobster(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.TurnOnLobster // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBladeVisibility(bool Visible); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.SetBladeVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReticleStatusDisplay(bool Hide); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ReticleStatusDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShowReticleStatusDisplay(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ShowReticleStatusDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateBlockBreakWarning(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.DeactivateBlockBreakWarning // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RPCUnequip(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.RPCUnequip // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void InstantOnFX(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.InstantOnFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DoBulletBlockEffect(struct FVector ImpactLocation); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.DoBulletBlockEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponDetached(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void AnimTrailNotifyBegin(bool bActive); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.AnimTrailNotifyBegin // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AnimTrailNotifyEnd(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.AnimTrailNotifyEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Event On Block Activate(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Event On Block Activate // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Event On Evade(); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.Event On Evade // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_Galileo_Lobster_Parent(int32_t EntryPoint); // Function B_Athena_Galileo_Lobster_Parent.B_Athena_Galileo_Lobster_Parent_C.ExecuteUbergraph_B_Athena_Galileo_Lobster_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

