// BlueprintGeneratedClass B_ResTorchWeapon.B_ResTorchWeapon_C
// Size: 0x1af8 (Inherited: 0x1818)
struct AB_ResTorchWeapon_C : AB_Ranged_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	struct UNiagaraComponent* FXComp_EndFire; // 0x1820(0x08)
	struct UAudioComponent* SFX_Heal_LP; // 0x1828(0x08)
	struct UAudioComponent* SFX_Activated_lp; // 0x1830(0x08)
	struct UAudioComponent* SFX_Idle_lp; // 0x1838(0x08)
	float ScaleUpTimeline_Value_13D2E72944034421BB1F4DBE908335D3; // 0x1840(0x04)
	enum class ETimelineDirection ScaleUpTimeline__Direction_13D2E72944034421BB1F4DBE908335D3; // 0x1844(0x01)
	char pad_1845[0x3]; // 0x1845(0x03)
	struct UTimelineComponent* ScaleUpTimeline; // 0x1848(0x08)
	struct UNiagaraSystem* NS_Idle; // 0x1850(0x08)
	struct UNiagaraSystem* NS_RepairToolCore; // 0x1858(0x08)
	struct UNiagaraSystem* NS_FlameEnd; // 0x1860(0x08)
	struct UAudioComponent* SFX_StopSputter; // 0x1868(0x08)
	struct UNiagaraSystem* NS_ImpactDamage; // 0x1870(0x08)
	struct UNiagaraSystem* NS_ImpactHeals; // 0x1878(0x08)
	struct FVector ImpactFlameScale; // 0x1880(0x18)
	struct UFXSystemComponent* FXComp_IdleFire; // 0x1898(0x08)
	struct UFXSystemComponent* FXComp_FireCore; // 0x18a0(0x08)
	bool Persistent Fire; // 0x18a8(0x01)
	char pad_18A9[0x7]; // 0x18a9(0x07)
	double KnobTurnDelay; // 0x18b0(0x08)
	bool RechargeDisabled?; // 0x18b8(0x01)
	char pad_18B9[0x3]; // 0x18b9(0x03)
	int32_t MinAmmoToRestartFX; // 0x18bc(0x04)
	struct USoundBase* FlameStartSound; // 0x18c0(0x08)
	struct USoundBase* FlameStopSound; // 0x18c8(0x08)
	struct FVector ImpactLocation; // 0x18d0(0x18)
	struct USoundBase* SFX_ImpactHeals; // 0x18e8(0x08)
	struct USoundBase* SFX_ImpactGeneric; // 0x18f0(0x08)
	struct USoundBase* SFX_ImpactWood; // 0x18f8(0x08)
	struct USoundBase* SFX_ImpactMetal; // 0x1900(0x08)
	bool IsSputtering?; // 0x1908(0x01)
	bool TargetHealable?; // 0x1909(0x01)
	char pad_190A[0x6]; // 0x190a(0x06)
	struct USoundBase* SFX_ImpactSparks; // 0x1910(0x08)
	struct USoundConcurrency* HealSoundConcurrency; // 0x1918(0x08)
	struct FTimerHandle HealLoopHandle; // 0x1920(0x08)
	struct FTimerHandle TurnOffHealTimer; // 0x1928(0x08)
	double HealedPercent; // 0x1930(0x08)
	struct USoundBase* SFX_FullyHealedOneShot; // 0x1938(0x08)
	struct FTimerHandle IdleTimer; // 0x1940(0x08)
	struct FGameplayTag Gameplay Cue Tag; // 0x1948(0x04)
	bool OnEffectsActive; // 0x194c(0x01)
	char pad_194D[0x3]; // 0x194d(0x03)
	struct FGameplayCueParameters ImpactParams; // 0x1950(0xd0)
	struct AActor* Hit Actor; // 0x1a20(0x08)
	struct FVector OriginalFireScale; // 0x1a28(0x18)
	bool OnHealLoopFaded; // 0x1a40(0x01)
	char pad_1A41[0x7]; // 0x1a41(0x07)
	struct UMaterialInterface* DecalMasterDamage; // 0x1a48(0x08)
	struct UMaterialInterface* DecalMasterHeals; // 0x1a50(0x08)
	double DecalLifeMin; // 0x1a58(0x08)
	double DecalLifeMax; // 0x1a60(0x08)
	struct UTexture* Decal_Texture; // 0x1a68(0x08)
	struct FLinearColor DecalHealColor; // 0x1a70(0x10)
	struct FLinearColor DecalDamageColor; // 0x1a80(0x10)
	struct FVector Decal Size Min; // 0x1a90(0x18)
	struct FVector Decal Size Max; // 0x1aa8(0x18)
	struct FVector Impact Normal; // 0x1ac0(0x18)
	struct FLinearColor A; // 0x1ad8(0x10)
	bool OnEffectsFadeIn; // 0x1ae8(0x01)
	char pad_1AE9[0x7]; // 0x1ae9(0x07)
	struct UForceFeedbackComponent* ForceFeedbackComp_WeaponFire; // 0x1af0(0x08)

	void OnRep_OnEffectsFadeIn(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.OnRep_OnEffectsFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_OnHealLoopFaded(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.OnRep_OnHealLoopFaded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeactivateAudioComponents(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.DeactivateAudioComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsSMActorHealable?(struct ABuildingActor* Actor, bool& Return Value); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.IsSMActorHealable? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void DrawDecalOnTarget(struct FVector Location, bool Healing?, struct FVector Normal); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.DrawDecalOnTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FRotator Make Normalized Rot(struct FVector Normal); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.Make Normalized Rot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetEndFlameColor(struct UFXSystemComponent* fxComp); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.SetEndFlameColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Is Full Health?(struct AActor* Actor, bool& Full, double& HealthPercent); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.Is Full Health? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetActorAndLocation(struct FGameplayCueParameters& Parameters, struct FVector& Location, struct AActor*& HitActor); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.GetActorAndLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void PlayHealingLoop(struct AActor* Actor); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.PlayHealingLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get SFX By Actor(struct AActor* SurfacedActor, struct USoundBase*& Impact Sound, double& HealthPercent); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.Get SFX By Actor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Get FX By Actor(struct AActor* Actor, struct UNiagaraSystem*& NS); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.Get FX By Actor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ScaleUpTimeline__FinishedFunc(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.ScaleUpTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void ScaleUpTimeline__UpdateFunc(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.ScaleUpTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStopWeaponFireFX(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayImpactFXOnCue(struct FGameplayCueParameters InputParams); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.PlayImpactFXOnCue // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GameplayCue.Impact.Generic(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.GameplayCue.Impact.Generic // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAmmoCountChanged(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.OnAmmoCountChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SetHealingOff(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.SetHealingOff // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ActivateIdleSound(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.ActivateIdleSound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShrinkAndFadeActiveFire(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.ShrinkAndFadeActiveFire // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayFXLatent(struct UNiagaraComponent* NS); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.PlayFXLatent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ResetLatentFX(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.ResetLatentFX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopTimeline(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.StopTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DestroyTimer(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.DestroyTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnHolstered(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.OnHolstered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUnholstered(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.OnUnholstered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RepUnequipFX(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.RepUnequipFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EnableAmmoEvents(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.EnableAmmoEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayWeaponFireFX_ForceFeedback(); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.PlayWeaponFireFX_ForceFeedback // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_ResTorchWeapon(int32_t EntryPoint); // Function B_ResTorchWeapon.B_ResTorchWeapon_C.ExecuteUbergraph_B_ResTorchWeapon // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

