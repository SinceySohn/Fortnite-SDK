// BlueprintGeneratedClass BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C
// Size: 0xa18 (Inherited: 0x9fa)
struct ABGA_Athena_SilverBlazerCore_C : ABGA_LinkedActorWithGravity_C {
	char pad_9FA[0x6]; // 0x9fa(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa00(0x08)
	struct AB_BGA_Athena_SilverBlazer_V2_C* SpawnedBGA; // 0xa08(0x08)
	double VehicleCheckDistance; // 0xa10(0x08)

	void TryAttachToVehicle(bool& DidAttach, struct AActor*& AttachedVehicle); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.TryAttachToVehicle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FindAttachableVehicle(bool& CanAttach, struct AActor*& HitActor); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.FindAttachableVehicle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_SpawnedBGA(); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.OnRep_SpawnedBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Destroyed(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.Destroyed // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Die(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.Die // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForVehicleAttach(); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.CheckForVehicleAttach // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAttachedVehicleDestroyed(struct AActor* DestroyedActor); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.OnAttachedVehicleDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Athena_SilverBlazerCore(int32_t EntryPoint); // Function BGA_Athena_SilverBlazerCore.BGA_Athena_SilverBlazerCore_C.ExecuteUbergraph_BGA_Athena_SilverBlazerCore // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

