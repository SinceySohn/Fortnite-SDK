// BlueprintGeneratedClass BP_Athena_SkyTube_HollowBaseParty.BP_Athena_SkyTube_HollowBaseParty_C
// Size: 0xa80 (Inherited: 0x9fc)
struct ABP_Athena_SkyTube_HollowBaseParty_C : ABP_Athena_SkyTube_C {
	char pad_9FC[0x4]; // 0x9fc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa00(0x08)
	struct FTimerHandle Boost Update Timer; // 0xa08(0x08)
	bool Vehicle Arrays; // 0xa10(0x01)
	char pad_A11[0x7]; // 0xa11(0x07)
	struct TArray<struct AActor*> Vehicles in Skytube; // 0xa18(0x10)
	struct AActor* Exiting Actor; // 0xa28(0x08)
	struct AActor* Incoming Actor; // 0xa30(0x08)
	struct FGameplayTag Gameplay Cue Tag; // 0xa38(0x04)
	bool Coaster Circuit; // 0xa3c(0x01)
	char pad_A3D[0x3]; // 0xa3d(0x03)
	struct FGameplayTagContainer Loose Gameplay Tags For Animal; // 0xa40(0x20)
	struct FGameplayTagContainer Animal Tags; // 0xa60(0x20)

	void Is Still Riding Coaster(struct AActor* Actor, bool& StillRiding); // Function BP_Athena_SkyTube_HollowBaseParty.BP_Athena_SkyTube_HollowBaseParty_C.Is Still Riding Coaster // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_Athena_SkyTube_HollowBaseParty.BP_Athena_SkyTube_HollowBaseParty_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function BP_Athena_SkyTube_HollowBaseParty.BP_Athena_SkyTube_HollowBaseParty_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Watch for Boosting(); // Function BP_Athena_SkyTube_HollowBaseParty.BP_Athena_SkyTube_HollowBaseParty_C.Watch for Boosting // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Exit via Boost(struct AActor* Exiting Actor); // Function BP_Athena_SkyTube_HollowBaseParty.BP_Athena_SkyTube_HollowBaseParty_C.Exit via Boost // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleForcedExit(struct AActor* ExitingPawn); // Function BP_Athena_SkyTube_HollowBaseParty.BP_Athena_SkyTube_HollowBaseParty_C.HandleForcedExit // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Athena_SkyTube_HollowBaseParty(int32_t EntryPoint); // Function BP_Athena_SkyTube_HollowBaseParty.BP_Athena_SkyTube_HollowBaseParty_C.ExecuteUbergraph_BP_Athena_SkyTube_HollowBaseParty // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

