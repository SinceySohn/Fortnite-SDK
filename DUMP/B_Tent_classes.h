// BlueprintGeneratedClass B_Tent.B_Tent_C
// Size: 0x15c8 (Inherited: 0x1370)
struct AB_Tent_C : AB_HidingProp_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1370(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0x1378(0x08)
	struct UNonPlayerConversationComponent_C* NonPlayerConversationComponent; // 0x1380(0x08)
	struct UCampsiteConversationComponent* CampsiteConversation; // 0x1388(0x08)
	bool finishedSpawn; // 0x1390(0x01)
	char pad_1391[0x7]; // 0x1391(0x07)
	struct APlayerState* TentOwner; // 0x1398(0x08)
	bool Debug; // 0x13a0(0x01)
	char pad_13A1[0x7]; // 0x13a1(0x07)
	struct UFortWorldItemDefinition* PickupWID; // 0x13a8(0x08)
	struct FLinearColor Enemy Tent Color; // 0x13b0(0x10)
	struct UGameplayEffect* GE to apply to Tent in Storm; // 0x13c0(0x08)
	struct FGameplayTagQuery Can Interact Tag Query; // 0x13c8(0x48)
	struct FGameplayTag TentDeployedTutorialEventTag; // 0x1410(0x04)
	struct FGameplayTag NPCConversationMenuTutorialEventTag; // 0x1414(0x04)
	struct FScalableFloat Can Use NPCConversation from Back Of Tent?; // 0x1418(0x28)
	struct FScalableFloat CanUseNPCConversationWhileInsideTent?; // 0x1440(0x28)
	struct FScalableFloat CanBuyTentFromSquadmateTent?; // 0x1468(0x28)
	struct FScalableFloat Hide in Tent Enabled; // 0x1490(0x28)
	struct FScalableFloat CanHideInSquadmateTent?; // 0x14b8(0x28)
	struct FScalableFloat Can Hide from Any Side Of Tent?; // 0x14e0(0x28)
	struct FScalableFloat RevertToPickupOnFoundationDestroyed; // 0x1508(0x28)
	struct FScalableFloat TentDamagedByStorm?; // 0x1530(0x28)
	bool isDying; // 0x1558(0x01)
	char pad_1559[0x3]; // 0x1559(0x03)
	struct FGameplayTag GC Packup; // 0x155c(0x04)
	struct FGameplayTag GC Destroy; // 0x1560(0x04)
	char pad_1564[0x4]; // 0x1564(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> MIDs; // 0x1568(0x10)
	struct TArray<struct FName> AnimSequenceName; // 0x1578(0x10)
	struct FGameplayTag GC Player Bounce; // 0x1588(0x04)
	char pad_158C[0x4]; // 0x158c(0x04)
	struct TArray<struct AFortPlayerPawn*> RecentlyLaunchedPawns; // 0x1590(0x10)
	struct FScalableFloat BouncePlayersOnHit; // 0x15a0(0x28)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function B_Tent.B_Tent_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function B_Tent.B_Tent_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool ShouldDisplayFirstInteractPrompt(struct AFortPawn* InteractingPawn, enum class TInteractionType InteractionType); // Function B_Tent.B_Tent_C.ShouldDisplayFirstInteractPrompt // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool ShouldDisplaySecondInteractPrompt(struct AFortPawn* InteractingPawn, enum class TInteractionType InteractionType); // Function B_Tent.B_Tent_C.ShouldDisplaySecondInteractPrompt // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float& OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_Tent.B_Tent_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_Tent.B_Tent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function B_Tent.B_Tent_C.BlueprintCanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	struct FName GetMarkerDetailsId(); // Function B_Tent.B_Tent_C.GetMarkerDetailsId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void Squad Colors(struct APlayerState* PlayerState, char& SquadId, struct FLinearColor& SquadmateColor, int32_t& SemiPersistentRandoValue); // Function B_Tent.B_Tent_C.Squad Colors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Tent.B_Tent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function B_Tent.B_Tent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetupTentColors(struct APlayerState* PlayerState); // Function B_Tent.B_Tent_C.SetupTentColors // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_Tent.B_Tent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PackupTent(struct AFortPawn* PickupTarget, bool DestroyTent); // Function B_Tent.B_Tent_C.PackupTent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FireTentTutorial(struct FGameplayTag Event Tag); // Function B_Tent.B_Tent_C.FireTentTutorial // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Vertex Animation(int32_t DataIndex); // Function B_Tent.B_Tent_C.Play Vertex Animation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void FoundationDestroyed(); // Function B_Tent.B_Tent_C.FoundationDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Check if in storm(); // Function B_Tent.B_Tent_C.Check if in storm // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Tent.B_Tent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void clear player(); // Function B_Tent.B_Tent_C.clear player // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDetachFromBuilding(struct ABuildingActor* AttachedToBuilding, bool bBeingDestroyed); // Function B_Tent.B_Tent_C.OnDetachFromBuilding // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void EntranceBlockedByUndamageable(struct AFortPlayerPawn* PlayerPawn); // Function B_Tent.B_Tent_C.EntranceBlockedByUndamageable // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Try Start Conversation(struct AFortPlayerController* Player); // Function B_Tent.B_Tent_C.Try Start Conversation // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Tent(int32_t EntryPoint); // Function B_Tent.B_Tent_C.ExecuteUbergraph_B_Tent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

