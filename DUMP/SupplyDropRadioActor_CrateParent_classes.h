// BlueprintGeneratedClass SupplyDropRadioActor_CrateParent.SupplyDropRadioActor_CrateParent_C
// Size: 0xec8 (Inherited: 0xe98)
struct ASupplyDropRadioActor_CrateParent_C : ASupplyDropRadioActorParent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe98(0x08)
	struct UAthenaBuildingActorChildComponent* CrateActorChild; // 0xea0(0x08)
	struct USoundBase* LandingSoundCue; // 0xea8(0x08)
	struct UFXSystemAsset* LandingFXSystem_Land; // 0xeb0(0x08)
	struct UFXSystemAsset* LandingFXSystem_Water; // 0xeb8(0x08)
	struct UGameplayEffect* QuestSearchSupplyDropGE; // 0xec0(0x08)

	void GetAttachedActorToMark(struct AActor*& Actor); // Function SupplyDropRadioActor_CrateParent.SupplyDropRadioActor_CrateParent_C.GetAttachedActorToMark // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandleLandEvent(); // Function SupplyDropRadioActor_CrateParent.SupplyDropRadioActor_CrateParent_C.HandleLandEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OpenSupplyDrop(); // Function SupplyDropRadioActor_CrateParent.SupplyDropRadioActor_CrateParent_C.OpenSupplyDrop // (BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function SupplyDropRadioActor_CrateParent.SupplyDropRadioActor_CrateParent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SupplyDropRadioActor_CrateParent(int32_t EntryPoint); // Function SupplyDropRadioActor_CrateParent.SupplyDropRadioActor_CrateParent_C.ExecuteUbergraph_SupplyDropRadioActor_CrateParent // (Final|UbergraphFunction) // @ game+0xdef49c
};

