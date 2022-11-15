// BlueprintGeneratedClass B_HidingProp_Portapotty.B_HidingProp_Portapotty_C
// Size: 0x13d0 (Inherited: 0x1370)
struct AB_HidingProp_Portapotty_C : AB_HidingProp_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1370(0x08)
	struct UParticleSystemComponent* P_HidingProp_Portapotty; // 0x1378(0x08)
	struct UStaticMeshComponent* Constr_Portapotty_Searched_Door; // 0x1380(0x08)
	float DoorSwing_Float_8AE2ADB5454E824078EA239E1191664B; // 0x1388(0x04)
	enum class ETimelineDirection DoorSwing__Direction_8AE2ADB5454E824078EA239E1191664B; // 0x138c(0x01)
	char pad_138D[0x3]; // 0x138d(0x03)
	struct UTimelineComponent* DoorSwing; // 0x1390(0x08)
	struct FGameplayTag TeleportingTag; // 0x1398(0x04)
	char pad_139C[0x4]; // 0x139c(0x04)
	struct TArray<struct UCustomCharacterPart*> DonutCharacterPartsToApply; // 0x13a0(0x10)
	struct UFortQuestItemDefinition* DonutQuest; // 0x13b0(0x08)
	struct UFortWorldItemDefinition* DonutGadget; // 0x13b8(0x08)
	bool PlayDonutSound; // 0x13c0(0x01)
	char pad_13C1[0x7]; // 0x13c1(0x07)
	struct USoundBase* DonutChangeCompleteSound; // 0x13c8(0x08)

	void DoorSwing__FinishedFunc(); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.DoorSwing__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void DoorSwing__UpdateFunc(); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.DoorSwing__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_3A158F7946A9198D94E107B013508851(struct UObject* Loaded); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.OnLoaded_3A158F7946A9198D94E107B013508851 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCurrentQuestsReady_1000E6E648CCAD899938C18A7CE97267(struct UFortQuestManager* OwningQuestManager, bool bFoundAllQuestsOnProfile); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.OnCurrentQuestsReady_1000E6E648CCAD899938C18A7CE97267 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DoorSwingAnim(); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.DoorSwingAnim // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HidingPlayerCountChanged(); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.HidingPlayerCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void InteractEnter(); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.InteractEnter // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetPlayDonutSoundBool(struct AFortPlayerController* PlayerController); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.SetPlayDonutSoundBool // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayDonutSoundForPlayer(); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.PlayDonutSoundForPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void StopHiding(struct AFortPawn* Pawn); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.StopHiding // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayDonutSoundMulticast(); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.PlayDonutSoundMulticast // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_HidingProp_Portapotty(int32_t EntryPoint); // Function B_HidingProp_Portapotty.B_HidingProp_Portapotty_C.ExecuteUbergraph_B_HidingProp_Portapotty // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

