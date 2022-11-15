// BlueprintGeneratedClass Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C
// Size: 0x1350 (Inherited: 0xef0)
struct AProp_PhysicsFellable_Parent_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)
	struct USceneComponent* PhysicsObjectSpawnLocation; // 0xef8(0x08)
	struct USceneComponent* BreakLocation; // 0xf00(0x08)
	struct UStaticMeshComponent* SpawnPreviewMesh; // 0xf08(0x08)
	struct FGameplayTagContainer FallAwayDamageTagList; // 0xf10(0x20)
	double FallingImpulseForce; // 0xf30(0x08)
	double SlopeBlend; // 0xf38(0x08)
	double ReplacementDelay; // 0xf40(0x08)
	struct FVector2D ReplacementScaleRangeMap; // 0xf48(0x10)
	double FallTargetingDistance; // 0xf58(0x08)
	struct FVector2D RandomFallDirection; // 0xf60(0x10)
	struct AActor* Tree Feller; // 0xf70(0x08)
	struct FVector2D FallVector; // 0xf78(0x10)
	bool DrawFellingDebug; // 0xf88(0x01)
	char pad_F89[0x7]; // 0xf89(0x07)
	struct ABuildingActor* SpawnedPhysicsObject; // 0xf90(0x08)
	struct FScalableFloat FellingAutoTargetChance; // 0xf98(0x28)
	struct FScalableFloat FellingImpulseMagnitude; // 0xfc0(0x28)
	struct FScalableFloat FellingImpulseDisableTime; // 0xfe8(0x28)
	struct FScalableFloat FellableEnabled; // 0x1010(0x28)
	struct FScalableFloat PhysicsSpawnEnabled; // 0x1038(0x28)
	struct ABuildingActor* SpawnedStumpObject; // 0x1060(0x08)
	char pad_1068[0x8]; // 0x1068(0x08)
	struct FTransform StartingWorldTransform; // 0x1070(0x60)
	struct ABuildingActor* DisabledActorReplacementClass; // 0x10d0(0x08)
	struct FVector2D ReplacementDelayRange; // 0x10d8(0x10)
	struct FVector FallVector_FX; // 0x10e8(0x18)
	struct ABuildingActor* SpawnedStumpActorClass; // 0x1100(0x08)
	struct ABuildingActor* SpawnedPhysicsObjectClass; // 0x1108(0x08)
	struct FVector SpawnPhysicsObjectOffsetLocation; // 0x1110(0x18)
	struct FVector SpawnedObjectMatchScaleAxes; // 0x1128(0x18)
	struct FVector StumpTraceStartOffset; // 0x1140(0x18)
	struct FVector StumpTraceEndOffset; // 0x1158(0x18)
	struct FHitResult FellableHitInfo; // 0x1170(0xe0)
	struct FGameplayTagContainer FelledDamageTags; // 0x1250(0x20)
	struct AActor* FelledDamageCauser; // 0x1270(0x08)
	struct UFXSystemAsset* FellingVFXAsset; // 0x1278(0x08)
	struct FTransform PhysicsObjectSpawnTransform; // 0x1280(0x60)
	bool bDoesSpawnStump; // 0x12e0(0x01)
	char pad_12E1[0x7]; // 0x12e1(0x07)
	struct FMulticastInlineDelegate OnSpawnedStumpObject; // 0x12e8(0x10)
	struct FMulticastInlineDelegate OnSpawnedPhysicsObject; // 0x12f8(0x10)
	struct FGameplayTagContainer PawnDamageCauserTagList; // 0x1308(0x20)
	struct FGameplayTagContainer DamageTagsToPreventAutoTarget; // 0x1328(0x20)
	struct UGameplayEffect* ChromeGE; // 0x1348(0x08)

	bool BuildDataRegistryResolverScope(struct TArray<struct FName>& InOutResolverScopes, int32_t& InOutPriority); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.BuildDataRegistryResolverScope // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void ApplyChrome(struct AActor* Target); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.ApplyChrome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CheckForChrome(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.CheckForChrome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TrySpawnStump(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.TrySpawnStump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ShouldDrawDebugFellingArrow(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.ShouldDrawDebugFellingArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_FallVector_FX(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.OnRep_FallVector_FX // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Get Fellable Enabled(bool& Enabled); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.Get Fellable Enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SendFallenTreeStatEvent(struct AActor* DamageCauser, bool& bWasEventSent); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.SendFallenTreeStatEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Reenable Impulse via damage(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.Reenable Impulse via damage // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Object Felled on Server(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.Object Felled on Server // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FellingVectorReplicated(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.FellingVectorReplicated // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Reset Starting World Transform(); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.Reset Starting World Transform // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prop_PhysicsFellable_Parent(int32_t EntryPoint); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.ExecuteUbergraph_Prop_PhysicsFellable_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnSpawnedPhysicsObject__DelegateSignature(struct ABuildingActor* PhysicsObject); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.OnSpawnedPhysicsObject__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSpawnedStumpObject__DelegateSignature(struct ABuildingActor* StumpObject); // Function Prop_PhysicsFellable_Parent.Prop_PhysicsFellable_Parent_C.OnSpawnedStumpObject__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

