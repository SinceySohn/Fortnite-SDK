// BlueprintGeneratedClass C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C
// Size: 0x348 (Inherited: 0xa0)
struct UC_VehicleRegen_Chrome_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct AFortAthenaVehicle* VehicleRef; // 0xa8(0x08)
	struct UDamageType* Damage Type; // 0xb0(0x08)
	struct UGameplayEffect* GE Repair Heal; // 0xb8(0x08)
	double Current Vehicle Health; // 0xc0(0x08)
	bool DamageTaken; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct FVehicleDamageablePartConfig> Damageable Parts; // 0xd0(0x10)
	struct ABGA_ValetMod_CowCatcher_C* CowCatcher BGA Ref; // 0xe0(0x08)
	double Current CowCatcher Health; // 0xe8(0x08)
	struct FScalableFloat CowCatcherHealing; // 0xf0(0x28)
	struct ABuildingActor* As Building Actor; // 0x118(0x08)
	struct FScalableFloat OnDamageRepairTimer; // 0x120(0x28)
	struct FScalableFloat HealInterval; // 0x148(0x28)
	struct FGameplayTag ChromeVehicleHealingCueTag; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct FGameplayCueParameters Healing CueParameters; // 0x178(0xd0)
	struct FGameplayTag Gameplay Cue Tag; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct FGameplayCueParameters Parameters; // 0x250(0xd0)
	struct FScalableFloat ChromeVehiclesEnabled; // 0x320(0x28)

	void Repair Vehicle Parts(struct AFortAthenaVehicle* Target Vehicle); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.Repair Vehicle Parts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void C_Athena_VehicleRegen_AutoGenFunc1(struct AActor* DamagedActor, double Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.C_Athena_VehicleRegen_AutoGenFunc1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void C_Athena_VehicleRegen_AutoGenFunc(struct AActor* DamagedActor, double Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.C_Athena_VehicleRegen_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_5A89411048AB344C0EA13A843C71B3A4(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.Added_5A89411048AB344C0EA13A843C71B3A4 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void HealVehicle(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.HealVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetRepairTimer(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.SetRepairTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void On Health Change(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.On Health Change // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamagablePartHealthChange(struct FVehicleDamageablePartConfig& PartConfig, struct FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.OnDamagablePartHealthChange // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CowCatcherHealthChanged(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.CowCatcherHealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Repair Parts(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.Repair Parts // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Setup CowCatcher Mod(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.Setup CowCatcher Mod // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnTireModHealthChange(struct FAttachedWheel& WheelData); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.OnTireModHealthChange // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Reset Tire Repair(); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.Reset Tire Repair // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_C_VehicleRegen_Chrome(int32_t EntryPoint); // Function C_VehicleRegen_Chrome.C_VehicleRegen_Chrome_C.ExecuteUbergraph_C_VehicleRegen_Chrome // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

