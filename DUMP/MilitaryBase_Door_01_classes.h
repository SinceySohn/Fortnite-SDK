// BlueprintGeneratedClass MilitaryBase_Door_01.MilitaryBase_Door_01_C
// Size: 0x10c0 (Inherited: 0x1030)
struct AMilitaryBase_Door_01_C : AParent_BuildingWall_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct UBoxComponent* DoorSlideOverlapVolume; // 0x1038(0x08)
	struct UStaticMeshComponent* DoorStaticMesh1; // 0x1040(0x08)
	float Timeline_0_EmissiveColorLerp_75727DFA4F9CA24A009D23ADC967876F; // 0x1048(0x04)
	float Timeline_0_SlideAnimation_75727DFA4F9CA24A009D23ADC967876F; // 0x104c(0x04)
	enum class ETimelineDirection Timeline_0__Direction_75727DFA4F9CA24A009D23ADC967876F; // 0x1050(0x01)
	char pad_1051[0x7]; // 0x1051(0x07)
	struct UTimelineComponent* ; // 0x1058(0x08)
	int32_t NumberOfPawnsWithinVolume; // 0x1060(0x04)
	bool DoorOpen; // 0x1064(0x01)
	char pad_1065[0x3]; // 0x1065(0x03)
	struct UMaterialInstanceDynamic* DoorMID; // 0x1068(0x08)
	struct FLinearColor DefaultDoorEmissiveValue; // 0x1070(0x10)
	struct FLinearColor ActiveDoorEmissiveValue; // 0x1080(0x10)
	struct UMaterialInterface* DoorBaseMaterial; // 0x1090(0x08)
	struct UMaterialInterface* Door_Source_Materials; // 0x1098(0x08)
	struct USoundBase* SlidingDoorClose_Sound; // 0x10a0(0x08)
	struct USoundBase* SlidingDoorOpen_Sound; // 0x10a8(0x08)
	struct FMulticastInlineDelegate OnDoorOpened; // 0x10b0(0x10)

	bool IsOpen(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.IsOpen // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct TArray<struct UPrimitiveComponent*> GetComponentToLock(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetComponentToLock // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_DoorOpen(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnRep_DoorOpen // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetDoorMID(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.GetDoorMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__FinishedFunc(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Timeline_0__UpdateFunc(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.BndEvt__DoorSlideOverlapVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void OpenDoor(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OpenDoor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CloseDoor(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.CloseDoor // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Open(struct AController* ControllerInstigator, bool bRequestFastOpen); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Open // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Close(struct AController* ControllerInstigator); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.Close // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUnLocked(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnUnLocked // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnLocked(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnLocked // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MilitaryBase_Door_01(int32_t EntryPoint); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.ExecuteUbergraph_MilitaryBase_Door_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnDoorOpened__DelegateSignature(); // Function MilitaryBase_Door_01.MilitaryBase_Door_01_C.OnDoorOpened__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

