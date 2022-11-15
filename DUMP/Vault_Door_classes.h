// BlueprintGeneratedClass Vault_Door.Vault_Door_C
// Size: 0xaf0 (Inherited: 0x9d8)
struct AVault_Door_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0x9e0(0x08)
	struct UStaticMeshComponent* S_Prim_Prism; // 0x9e8(0x08)
	struct UNiagaraComponent* UpperBolt; // 0x9f0(0x08)
	struct UNiagaraComponent* LowerBolt; // 0x9f8(0x08)
	struct UNiagaraComponent* UpperBolt2_Door; // 0xa00(0x08)
	struct UNiagaraComponent* UpperBolt1_Door; // 0xa08(0x08)
	struct UNiagaraComponent* VaultDoorFX; // 0xa10(0x08)
	struct USpotLightComponent* VaultLightInside; // 0xa18(0x08)
	struct USpotLightComponent* VaultLightOutside; // 0xa20(0x08)
	struct UStaticMeshComponent* VaultDoor; // 0xa28(0x08)
	struct UStaticMeshComponent* Frame; // 0xa30(0x08)
	float Open_ShaderAnim_Normalized_B888903B464902A65CC3929C6A64E5F6; // 0xa38(0x04)
	float Open_Lerp_B888903B464902A65CC3929C6A64E5F6; // 0xa3c(0x04)
	enum class ETimelineDirection Open__Direction_B888903B464902A65CC3929C6A64E5F6; // 0xa40(0x01)
	char pad_A41[0x7]; // 0xa41(0x07)
	struct UTimelineComponent* Open; // 0xa48(0x08)
	struct FRotator DoorSpawnRotation; // 0xa50(0x18)
	double DoorRotationAmount; // 0xa68(0x08)
	struct UMaterialInstanceDynamic* MID_VaultDoor; // 0xa70(0x08)
	struct FGameplayTag GC_OpenDoor; // 0xa78(0x04)
	bool GreenLight; // 0xa7c(0x01)
	char pad_A7D[0x3]; // 0xa7d(0x03)
	double WaitLockTime; // 0xa80(0x08)
	double BigCShapeLockTime; // 0xa88(0x08)
	struct FVector StartLocation; // 0xa90(0x18)
	struct FVector EndLocation; // 0xaa8(0x18)
	struct FRotator StartRotation; // 0xac0(0x18)
	struct FRotator EndRotation; // 0xad8(0x18)

	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Vault_Door.Vault_Door_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_HasBeenOpening(); // Function Vault_Door.Vault_Door_C.OnRep_HasBeenOpening // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function Vault_Door.Vault_Door_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Open__FinishedFunc(); // Function Vault_Door.Vault_Door_C.Open__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Open__UpdateFunc(); // Function Vault_Door.Vault_Door_C.Open__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Open__Trigger Light__EventFunc(); // Function Vault_Door.Vault_Door_C.Open__Trigger Light__EventFunc // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Vault_Door.Vault_Door_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void VaultOpen(); // Function Vault_Door.Vault_Door_C.VaultOpen // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OpeningTimeline(); // Function Vault_Door.Vault_Door_C.OpeningTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Vault_Door(int32_t EntryPoint); // Function Vault_Door.Vault_Door_C.ExecuteUbergraph_Vault_Door // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

