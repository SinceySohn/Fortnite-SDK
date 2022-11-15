// BlueprintGeneratedClass SupplyDropRadioIndicator.SupplyDropRadioIndicator_C
// Size: 0x320 (Inherited: 0x288)
struct ASupplyDropRadioIndicator_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0x290(0x08)
	struct UAudioComponent* ReticleAudio; // 0x298(0x08)
	struct UAudioComponent* FlareAudio; // 0x2a0(0x08)
	struct UNiagaraComponent* Flare_Niagara; // 0x2a8(0x08)
	struct UNiagaraComponent* Reticle_Niagara; // 0x2b0(0x08)
	struct FVector GroundLocation; // 0x2b8(0x18)
	double UpgradeGroundLocation; // 0x2d0(0x08)
	struct FTimerHandle UpgradeGroundLocationTimerHandle; // 0x2d8(0x08)
	double FallHeight; // 0x2e0(0x08)
	struct AActor* GroundActor; // 0x2e8(0x08)
	bool bOwnerLanded; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	double FlareDuration; // 0x2f8(0x08)
	bool bDisableFlare; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct TArray<struct AActor*> PersistentTraceIgnoreActors; // 0x308(0x10)
	struct USoundBase* MarkerAudio; // 0x318(0x08)

	void OnRep_bOwnerLanded(); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.OnRep_bOwnerLanded // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UnbindGroundDestroyedDelegates(); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.UnbindGroundDestroyedDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StartUpdateGroundLocationChecks(float InitialStartDelay); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.StartUpdateGroundLocationChecks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGroundBuildingActorDestroyed(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.HandleGroundBuildingActorDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_bDisableFlare(); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.OnRep_bDisableFlare // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetOwnerLanded(); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.SetOwnerLanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleGroundActorDestroyed(struct AActor* DestroyedActor); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.HandleGroundActorDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateGroundLocation(); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.UpdateGroundLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_GroundLocation(); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.OnRep_GroundLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DisableFlare(); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.DisableFlare // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SupplyDropRadioIndicator(int32_t EntryPoint); // Function SupplyDropRadioIndicator.SupplyDropRadioIndicator_C.ExecuteUbergraph_SupplyDropRadioIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

