// BlueprintGeneratedClass B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C
// Size: 0xd88 (Inherited: 0xaf1)
struct AB_Prj_Athena_CampsiteImprovement_Parent_C : AB_Prj_Athena_BGASpawner_C {
	char pad_AF1[0x7]; // 0xaf1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaf8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0xb00(0x08)
	bool TeamHasBeenSet; // 0xb08(0x01)
	bool Debug; // 0xb09(0x01)
	bool bindToSurfaceOnStart?; // 0xb0a(0x01)
	char pad_B0B[0x1]; // 0xb0b(0x01)
	int32_t Max#Bounces; // 0xb0c(0x04)
	struct UFortWorldItemDefinition* PickupWID; // 0xb10(0x08)
	enum class Enum_Campsite_Improvements Improvement Type To Build; // 0xb18(0x01)
	char pad_B19[0x7]; // 0xb19(0x07)
	struct FScalableFloat MaxFriendlyCampsiteExclusionRange; // 0xb20(0x28)
	struct FScalableFloat MaxEnemyCampsiteExclusionRange; // 0xb48(0x28)
	bool Hit; // 0xb70(0x01)
	bool SpawnDoOnce; // 0xb71(0x01)
	bool EnteredWater; // 0xb72(0x01)
	char pad_B73[0x1]; // 0xb73(0x01)
	int32_t BounceCount; // 0xb74(0x04)
	struct FScalableFloat MinDeploymentDistanceFromObstacles; // 0xb78(0x28)
	struct FGameplayTagContainer Too Many Tents Failed Reason; // 0xba0(0x20)
	struct FGameplayTag GC Revert To Pickup; // 0xbc0(0x04)
	struct FGameplayTag GC Water Splash; // 0xbc4(0x04)
	struct FGameplayTagContainer Invalid Surface Failed Reason; // 0xbc8(0x20)
	struct FFortItemEntry ItemEntry; // 0xbe8(0x1a0)

	struct AActor* SpawnBGA_(struct FVector Normal, struct AActor* HitActor, struct UPrimitiveComponent* HitComp, struct FVector Pos, bool FromWater, struct FHitResult Hit); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.SpawnBGA_ // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void HasEnteredWater(); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.HasEnteredWater // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ParentHit(); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.ParentHit // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RevertToPickupAndDestroyProj(); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.RevertToPickupAndDestroyProj // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DeployFailedFeedback(int32_t FailReason); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.DeployFailedFeedback // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateQuests(); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.UpdateQuests // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Athena_CampsiteImprovement_Parent(int32_t EntryPoint); // Function B_Prj_Athena_CampsiteImprovement_Parent.B_Prj_Athena_CampsiteImprovement_Parent_C.ExecuteUbergraph_B_Prj_Athena_CampsiteImprovement_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

