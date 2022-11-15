// BlueprintGeneratedClass BGA_HeldObject_Parent.BGA_HeldObject_Parent_C
// Size: 0xc10 (Inherited: 0x9d8)
struct ABGA_HeldObject_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9d8(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0x9e0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x9e8(0x08)
	struct UFortHeldObjectComponent* FortHeldObject; // 0x9f0(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x9f8(0x08)
	struct UCapsuleComponent* Capsule; // 0xa00(0x08)
	int32_t RepStartMoving; // 0xa08(0x04)
	struct FGameplayTag GC_HitPlayer; // 0xa0c(0x04)
	struct FGameplayTag GC_HitWorld; // 0xa10(0x04)
	struct FGameplayTag GC_Throw; // 0xa14(0x04)
	struct FGameplayTag GC_EnterWater; // 0xa18(0x04)
	struct FGameplayTag GC_Pickup; // 0xa1c(0x04)
	struct FGameplayTag GC_Death; // 0xa20(0x04)
	bool PlayDeathGC; // 0xa24(0x01)
	bool RepHideActor; // 0xa25(0x01)
	bool SetHideActorOnDeath; // 0xa26(0x01)
	bool IsDestructable; // 0xa27(0x01)
	struct FGameplayTag GC_GenericDeath; // 0xa28(0x04)
	char pad_A2C[0x4]; // 0xa2c(0x04)
	double WorldStopSlop; // 0xa30(0x08)
	bool AttachToWallsAndCeilings; // 0xa38(0x01)
	char pad_A39[0x7]; // 0xa39(0x07)
	struct TMap<enum class ELinkToDirection, struct FVector> Map_DirectionToRelativeVector; // 0xa40(0x50)
	enum class ELinkToDirection DirectionToAttach; // 0xa90(0x01)
	char pad_A91[0x7]; // 0xa91(0x07)
	struct AActor* EmptyAttachLinkActor; // 0xa98(0x08)
	struct FTransform AttachRelativeTrans; // 0xaa0(0x60)
	struct FTransform AttachTransform; // 0xb00(0x60)
	struct FText FirstInteractString; // 0xb60(0x18)
	struct FText SecondInteractString; // 0xb78(0x18)
	double SecondInteractTime; // 0xb90(0x08)
	double FirstInteractTime; // 0xb98(0x08)
	bool EverBeenThrownPlaced; // 0xba0(0x01)
	bool AutoEnableInteractionsOnStop; // 0xba1(0x01)
	bool AlreadySavedDefaultTransform; // 0xba2(0x01)
	enum class Enum_HeldObject_GenericWeights ObjectWeights; // 0xba3(0x01)
	bool StopOnFlatSurface; // 0xba4(0x01)
	char pad_BA5[0x3]; // 0xba5(0x03)
	struct FGameplayTagContainer ThrownQuestCreditTargetTag; // 0xba8(0x20)
	struct FGameplayTagContainer TC_BlockPickup; // 0xbc8(0x20)
	double Hit Velocity Threshold; // 0xbe8(0x08)
	bool ShouldKillWhenSpawningUnderwater; // 0xbf0(0x01)
	char pad_BF1[0x7]; // 0xbf1(0x07)
	struct UPrimitiveComponent* HitComponentToAttachTo; // 0xbf8(0x08)
	enum class ECollisionResponse CapsuleDefaultCollisionResponseToPawn; // 0xc00(0x01)
	bool RestoreDefaultPawnCollisionOnInteract; // 0xc01(0x01)
	bool IsAttachedToVehicle; // 0xc02(0x01)
	char pad_C03[0x5]; // 0xc03(0x05)
	struct AActor* VehicleAttached; // 0xc08(0x08)

	void UbindPlayerControllerOnUnPosses(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.UbindPlayerControllerOnUnPosses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BindPlayerControllerOnUnPosses(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BindPlayerControllerOnUnPosses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Server Only Handle Player Controller OnUnPossess(struct APawn* PlayerPawn); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.Server Only Handle Player Controller OnUnPossess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Server Only Handle Attach To Vehicle(struct FVector HitLoc, struct UPrimitiveComponent* HitComponentToAttachTo); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.Server Only Handle Attach To Vehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDetachFromVehicle(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnDetachFromVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnAttachedToVehicle(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnAttachedToVehicle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_IsAttachedToVehicle(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_IsAttachedToVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetBeenThrownPlaced(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.SetBeenThrownPlaced // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetCanFirstInteract(struct AFortPawn* InteractingPawn, bool& Return); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.GetCanFirstInteract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnRep_AttachTransform(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_AttachTransform // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetAttachDefaultTransform(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.SetAttachDefaultTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetAttachComponent(struct USceneComponent*& Component); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.GetAttachComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void FindAttachAngle(struct FVector HitLoc); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.FindAttachAngle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float& OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_RepHideActor(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_RepHideActor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_RepStartMoving(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_RepStartMoving // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnReady_BC2B03BE47B5044C184341970EAD7AAB(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnReady_BC2B03BE47B5044C184341970EAD7AAB // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HideActor(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.HideActor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void PlayGenericDeath(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.PlayGenericDeath // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void AttachSetup(struct FVector& Location, struct FVector& HitNormal, bool NewParam); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.AttachSetup // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ResetRelativeTransformOnAttach(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ResetRelativeTransformOnAttach // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnFirstInteract(struct AFortPawn* Interacting Pawn); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnFirstInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OnSecondInteract(struct AFortPawn* InteractingPawn); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnSecondInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnVehicleDestroyed(struct AActor* DestroyedActor); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnVehicleDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BGA_HeldObject_Parent(int32_t EntryPoint); // Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ExecuteUbergraph_BGA_HeldObject_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

