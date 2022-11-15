// WidgetBlueprintGeneratedClass BallerV2Reticle.BallerV2Reticle_C
// Size: 0x3dd (Inherited: 0x268)
struct UBallerV2Reticle_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* SwingingNew_NoLock; // 0x270(0x08)
	struct UWidgetAnimation* Intro; // 0x278(0x08)
	struct UWidgetAnimation* CantUseNew; // 0x280(0x08)
	struct UWidgetAnimation* SwingingNew; // 0x288(0x08)
	struct UWidgetAnimation* LockedOnNew; // 0x290(0x08)
	struct UWidgetAnimation* Cooldown_Intro; // 0x298(0x08)
	struct UWidgetAnimation* LockedOn; // 0x2a0(0x08)
	struct UWidgetAnimation* CantUse; // 0x2a8(0x08)
	struct UWidgetAnimation* Swinging; // 0x2b0(0x08)
	struct UOverlay* Bracket; // 0x2b8(0x08)
	struct UImage* CooldownRing; // 0x2c0(0x08)
	struct UImage* Reticle_Spinners_AttachedFast; // 0x2c8(0x08)
	struct UImage* Reticle_Surrounding; // 0x2d0(0x08)
	struct UImage* Reticle_Surrounding_BaseDarken; // 0x2d8(0x08)
	struct UImage* Reticle_Surrounding_Disabled; // 0x2e0(0x08)
	struct UImage* Reticle_Surrounding_Shadow; // 0x2e8(0x08)
	struct URE_WestSausage_Targeting_C* TargetWidget; // 0x2f0(0x08)
	struct FVector TargetPosition; // 0x2f8(0x18)
	bool Locked On; // 0x310(0x01)
	bool Attached; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct AActor* Player; // 0x318(0x08)
	bool AbleToUse; // 0x320(0x01)
	bool CooldownAnimPlayed; // 0x321(0x01)
	bool HasPlayedCantUseAnim; // 0x322(0x01)
	bool HasPlayedAttachedAnim; // 0x323(0x01)
	bool HasPlayedLockedOnAnim; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	double CoolDownTime; // 0x328(0x08)
	bool OnCooldown; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	struct FActiveGameplayEffectHandle Cooldown_GE; // 0x334(0x08)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct FScalableFloat FullCooldownTime; // 0x340(0x28)
	struct FTimerHandle CooldownTimerHandle; // 0x368(0x08)
	double TotalCooldownDuration; // 0x370(0x08)
	double CurrentCooldownDuration; // 0x378(0x08)
	double CooldownInterval; // 0x380(0x08)
	struct UMaterialInstanceDynamic* CooldownRingDynamicMaterial; // 0x388(0x08)
	bool IsCooldownPlaying; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	double FullCooldown; // 0x398(0x08)
	double CooldownStartTime; // 0x3a0(0x08)
	struct AFortOctopusVehicle* Baller; // 0x3a8(0x08)
	struct AFortWeaponRangedOctopusTowhook* TowhookWeapon; // 0x3b0(0x08)
	struct FName Cooldown Percent Parameter Name; // 0x3b8(0x04)
	struct FLinearColor OutOfFuelReticleColor; // 0x3bc(0x10)
	struct FLinearColor OutOfFuelTargetWidgetColor; // 0x3cc(0x10)
	bool OutOfFuel; // 0x3dc(0x01)

	void WorldToScreen(struct FVector WorldLocation, struct FVector2D& ScreenLocation); // Function BallerV2Reticle.BallerV2Reticle_C.WorldToScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Update Lock-on Visibility(); // Function BallerV2Reticle.BallerV2Reticle_C.Update Lock-on Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CooldownTick(); // Function BallerV2Reticle.BallerV2Reticle_C.CooldownTick // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindToWeapon(struct AFortWeaponRanged* Weapon); // Function BallerV2Reticle.BallerV2Reticle_C.BindToWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnbindFromWeapon(); // Function BallerV2Reticle.BallerV2Reticle_C.UnbindFromWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindTo(struct UObject* AssociatedObject); // Function BallerV2Reticle.BallerV2Reticle_C.BindTo // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void UnbindFrom(struct UObject* AssociatedObject); // Function BallerV2Reticle.BallerV2Reticle_C.UnbindFrom // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void WeaponEquipped(struct AFortWeaponRanged* EquippedMountedWeapon); // Function BallerV2Reticle.BallerV2Reticle_C.WeaponEquipped // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetLockedOnState(bool LockedOn, bool Attached); // Function BallerV2Reticle.BallerV2Reticle_C.SetLockedOnState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookAttached(); // Function BallerV2Reticle.BallerV2Reticle_C.TowhookAttached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TowhookDetached(); // Function BallerV2Reticle.BallerV2Reticle_C.TowhookDetached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Update(struct FVector& Position, bool AbleToUse); // Function BallerV2Reticle.BallerV2Reticle_C.Update // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BallerV2Reticle.BallerV2Reticle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void TargetUpdated(struct FVector& TargetLocation); // Function BallerV2Reticle.BallerV2Reticle_C.TargetUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnOutOfFuelDelegate_Event(); // Function BallerV2Reticle.BallerV2Reticle_C.OnOutOfFuelDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BallerV2Reticle(int32_t EntryPoint); // Function BallerV2Reticle.BallerV2Reticle_C.ExecuteUbergraph_BallerV2Reticle // (Final|UbergraphFunction) // @ game+0xdef49c
};

