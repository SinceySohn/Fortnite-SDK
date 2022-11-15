// BlueprintGeneratedClass B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C
// Size: 0x1872 (Inherited: 0x1818)
struct AB_Shotgun_OverLoad_Athena_C : AB_Shotgun_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	struct UWeaponCameraAnimationComponent_C* WeaponCameraAnimationComponent; // 0x1820(0x08)
	struct UNiagaraComponent* DefaultMuzzle; // 0x1828(0x08)
	struct UNiagaraComponent* MaxMuzzle; // 0x1830(0x08)
	struct UParticleSystemComponent* protoparticle2; // 0x1838(0x08)
	struct UParticleSystemComponent* protoparticle1; // 0x1840(0x08)
	struct UAudioComponent* chargeaudio1; // 0x1848(0x08)
	struct UAudioComponent* chargeaudio; // 0x1850(0x08)
	struct UParticleSystemComponent* protoparticle; // 0x1858(0x08)
	int32_t MaxAmmo; // 0x1860(0x04)
	int32_t CurrentAmmo; // 0x1864(0x04)
	struct UAudioComponent* CurrentChargeSound; // 0x1868(0x08)
	bool Reloading; // 0x1870(0x01)
	bool Equip; // 0x1871(0x01)

	void GetActorSoundParams(struct TArray<struct FAudioParameter>& Params); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.GetActorSoundParams // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Max Ammo(int32_t& MaxAmmo); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.Max Ammo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Current Ammo(int32_t& Ammo); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.Current Ammo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Charge State Check(); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.Charge State Check // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Muzzle Play Reload FX(enum class EFortReloadFXState Selection); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.Muzzle Play Reload FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayWeaponFireCustomAudio(bool bPersistentFire, bool bSecondaryFire); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.PlayWeaponFireCustomAudio // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventFiringSounds(); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.EventFiringSounds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventChargeSounds(bool FullClip); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.EventChargeSounds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Reload Triggered Event(); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.Reload Triggered Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAmmoCountChanged(); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.OnAmmoCountChanged // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void EventResetChargeSounds(); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.EventResetChargeSounds // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Shotgun_OverLoad_Athena(int32_t EntryPoint); // Function B_Shotgun_OverLoad_Athena.B_Shotgun_OverLoad_Athena_C.ExecuteUbergraph_B_Shotgun_OverLoad_Athena // (Final|UbergraphFunction) // @ game+0xdef49c
};

