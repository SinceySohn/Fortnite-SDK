// BlueprintGeneratedClass BGA_Campsite.BGA_Campsite_C
// Size: 0xb10 (Inherited: 0x9d8)
struct ABGA_Campsite_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct USphereComponent* CollisionSphere; // 0x9e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x9e8(0x08)
	bool Debug; // 0x9f0(0x01)
	bool isDying; // 0x9f1(0x01)
	char owningSquad; // 0x9f2(0x01)
	char pad_9F3[0x5]; // 0x9f3(0x05)
	struct TArray<struct UCampsite_Improvement_Component_C*> BuiltCampsiteImprovements; // 0x9f8(0x10)
	struct FVector SpawnImprovementTransformLocation; // 0xa08(0x18)
	bool CampsiteEstablished; // 0xa20(0x01)
	bool DebugShowExclusionZones; // 0xa21(0x01)
	char pad_A22[0x6]; // 0xa22(0x06)
	double DebugLoopTickRate; // 0xa28(0x08)
	struct UActorComponent* SpecialActorClass; // 0xa30(0x08)
	struct UEnvQuery* CampsiteImprovementEQSTemplate; // 0xa38(0x08)
	struct TArray<struct FStruct_Campsite_Improvement> CampsiteImprovementDefinitions; // 0xa40(0x10)
	struct FScalableFloat EnemyCampsiteExclusionRadius; // 0xa50(0x28)
	struct FScalableFloat FriendlyCampsiteExclusionRadius; // 0xa78(0x28)
	struct FScalableFloat ImprovementDeployAnimTime; // 0xaa0(0x28)
	struct FVector ImprovementMeshScale; // 0xac8(0x18)
	struct FScalableFloat SpawnCampfireWithCampsite?; // 0xae0(0x28)
	struct AActor* SpawendActor; // 0xb08(0x08)

	void RegisterCampsite(); // Function BGA_Campsite.BGA_Campsite_C.RegisterCampsite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetIsDying?(bool& NewParam); // Function BGA_Campsite.BGA_Campsite_C.GetIsDying? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TentColors(struct UObject* Player State, char& squad ID, struct FLinearColor& squad member color, int32_t& random squadmember index); // Function BGA_Campsite.BGA_Campsite_C.TentColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateCampsiteLocation(struct FVector& newCampsiteLoc); // Function BGA_Campsite.BGA_Campsite_C.UpdateCampsiteLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CountImprovementByType(enum class Enum_Campsite_Improvements Improvement Type, int32_t& NumberBuilt); // Function BGA_Campsite.BGA_Campsite_C.CountImprovementByType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Improvement by Type(enum class Enum_Campsite_Improvements ImprovementDef, struct FStruct_Campsite_Improvement& Improvement); // Function BGA_Campsite.BGA_Campsite_C.Get Improvement by Type // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float& OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Campsite.BGA_Campsite_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Campsite.BGA_Campsite_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Campsite.BGA_Campsite_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_isDying(); // Function BGA_Campsite.BGA_Campsite_C.OnRep_isDying // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AttachToBindedActor(struct UPrimitiveComponent* Attach Comp); // Function BGA_Campsite.BGA_Campsite_C.AttachToBindedActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Destroy With Effects(); // Function BGA_Campsite.BGA_Campsite_C.Destroy With Effects // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Immediately Hide & Kill(); // Function BGA_Campsite.BGA_Campsite_C.Immediately Hide & Kill // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Campsite.BGA_Campsite_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void EstablishNewCampsite(struct APlayerState* New Campsite Instigator, struct AActor* SupportingActor, struct FFortItemEntry Instigating Item); // Function BGA_Campsite.BGA_Campsite_C.EstablishNewCampsite // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Build Campsite Improvement(enum class Enum_Campsite_Improvements Improvement Type, struct APlayerState* Improvement Owner, struct FVector Spawn Location, struct FRotator Spawn Transform Rotation, struct AActor* SupportingActor, struct FFortItemEntry InstigatingWeapon); // Function BGA_Campsite.BGA_Campsite_C.Build Campsite Improvement // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CleanupCampsiteImprovement(struct UCampsite_Improvement_Component_C* Improvement); // Function BGA_Campsite.BGA_Campsite_C.CleanupCampsiteImprovement // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EQS Query Finished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BGA_Campsite.BGA_Campsite_C.EQS Query Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Spawn Secondary Blueprint(struct FVector Spawn Transform Location, struct FRotator Spawn Transform Rotation, struct APlayerState* ImprovementOwner, struct FStruct_Campsite_Improvement& Struct_Campsite_Improvement); // Function BGA_Campsite.BGA_Campsite_C.Spawn Secondary Blueprint // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindtoSurfaceOnStart(struct FVector Impact Normal, struct FVector Impact Point, struct AActor* Hit Actor, struct UPrimitiveComponent* Hit Component, bool Hit Water?); // Function BGA_Campsite.BGA_Campsite_C.BindtoSurfaceOnStart // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_Campsite.BGA_Campsite_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void MoveCampsiteLocation(struct FVector NewLocation); // Function BGA_Campsite.BGA_Campsite_C.MoveCampsiteLocation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DebugShapeDrawingLoop(); // Function BGA_Campsite.BGA_Campsite_C.DebugShapeDrawingLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ImprovementDestroyed(struct AActor* DestroyedActor); // Function BGA_Campsite.BGA_Campsite_C.ImprovementDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Campsite  Improvement Spawn Feedback(enum class Enum_Campsite_Improvements Improvement Type, struct AActor* Target, struct FGameplayTag DeplayGameplayCueTag); // Function BGA_Campsite.BGA_Campsite_C.Campsite  Improvement Spawn Feedback // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Post Tent Campsite Setup(); // Function BGA_Campsite.BGA_Campsite_C.Post Tent Campsite Setup // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BuildEQSPositionedCampsiteImprovement(enum class Enum_Campsite_Improvements Improvement Type, struct APlayerState* Improvement Owner); // Function BGA_Campsite.BGA_Campsite_C.BuildEQSPositionedCampsiteImprovement // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BaseDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Campsite.BGA_Campsite_C.BaseDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BaseDestroyed(struct AActor* DestroyedActor); // Function BGA_Campsite.BGA_Campsite_C.BaseDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_Campsite(int32_t EntryPoint); // Function BGA_Campsite.BGA_Campsite_C.ExecuteUbergraph_BGA_Campsite // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

