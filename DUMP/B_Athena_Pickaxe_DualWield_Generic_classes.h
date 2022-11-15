// BlueprintGeneratedClass B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
// Size: 0x15d9 (Inherited: 0x1538)
struct AB_Athena_Pickaxe_DualWield_Generic_C : AFortWeaponPickaxeDualWieldAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1538(0x08)
	bool Equipped; // 0x1540(0x01)
	enum class EAttachmentRule IdleFX Location Rule; // 0x1541(0x01)
	enum class EAttachmentRule Idle FX Rotation Rule; // 0x1542(0x01)
	enum class EAttachmentRule Idle FX Scale Rule; // 0x1543(0x01)
	enum class EAttachmentRule SwingFX Location Rule; // 0x1544(0x01)
	enum class EAttachmentRule Swing FX Rotation Rule; // 0x1545(0x01)
	enum class EAttachmentRule Swing FX Scale Rule; // 0x1546(0x01)
	char pad_1547[0x1]; // 0x1547(0x01)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1548(0x08)
	struct UParticleSystem* MeleeHeavy_ParticleSystem; // 0x1550(0x08)
	struct UParticleSystemComponent* MeleeHeavy_PSC; // 0x1558(0x08)
	bool UseDestroyEffect; // 0x1560(0x01)
	char pad_1561[0x7]; // 0x1561(0x07)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1568(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1570(0x08)
	struct UParticleSystemComponent* Offhand Alteration Ambient PS; // 0x1578(0x08)
	bool bEquipPendingInstigator; // 0x1580(0x01)
	char pad_1581[0x3]; // 0x1581(0x03)
	struct FName Offhand Socket Name; // 0x1584(0x04)
	struct UAnimMontage* MontageReference; // 0x1588(0x08)
	bool UseTimeofDayControl; // 0x1590(0x01)
	char pad_1591[0x7]; // 0x1591(0x07)
	struct UFXSystemComponent* Impact FX; // 0x1598(0x08)
	bool Swing Right?; // 0x15a0(0x01)
	char pad_15A1[0x7]; // 0x15a1(0x07)
	struct FRotator Left Swing Rotation; // 0x15a8(0x18)
	struct FRotator Right Swing Rotation; // 0x15c0(0x18)
	bool Swing_Right?; // 0x15d8(0x01)

	void Binding Time of Day Control(bool F)); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Binding Time of Day Control // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetWpnRarity(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Unbind Dual Melee Swing Events(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Unbind Dual Melee Swing Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Bind Dual Melee Swing Events(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Bind Dual Melee Swing Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Set Active Alteration Idle Particles(bool Active, bool Reset); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Set Active Alteration Idle Particles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(struct FName StatName, int32_t StatValue); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnStatChanged_9F72D14C4573F491E38302B51F08A0B8 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(struct UObject* Loaded); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayRClickImpacts(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.PlayRClickImpacts // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEquippedWeaponDestory(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponAttached(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnWeaponDetached(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInitWeaponCosmetics(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitWeaponCosmetics // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Swing Left End(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left End // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swing Right End(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right End // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInstigatorSet(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInstigatorSet // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void K2_OnUnEquip(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SwingRight_Common(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingRight_Common // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SwingLeft_Common(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingLeft_Common // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swing Left(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swing Right(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swing Left 2(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left 2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Swing Right 2(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right 2 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Anim Trails Notify(bool bActive); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Notify // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Anim Trails Disable(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Disable // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void TODCheck(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.TODCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleKillWatch(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.HandleKillWatch // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateBasedOnKills(int32_t Watched Kills); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UpdateBasedOnKills // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32_t EntryPoint); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

