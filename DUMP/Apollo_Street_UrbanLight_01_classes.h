// BlueprintGeneratedClass Apollo_Street_UrbanLight_01.Apollo_Street_UrbanLight_01_C
// Size: 0x1040 (Inherited: 0x1021)
struct AApollo_Street_UrbanLight_01_C : AParent_BuildingPropActor_C {
	char pad_1021[0x7]; // 0x1021(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1028(0x08)
	struct UStaticMeshComponent* SM_Street_UrbanLightCone_01_A; // 0x1030(0x08)
	struct USpotLightComponent* SpotLight; // 0x1038(0x08)

	void UserConstructionScript(); // Function Apollo_Street_UrbanLight_01.Apollo_Street_UrbanLight_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function Apollo_Street_UrbanLight_01.Apollo_Street_UrbanLight_01_C.OnDayPhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Apollo_Street_UrbanLight_01(int32_t EntryPoint); // Function Apollo_Street_UrbanLight_01.Apollo_Street_UrbanLight_01_C.ExecuteUbergraph_Apollo_Street_UrbanLight_01 // (Final|UbergraphFunction) // @ game+0xdef49c
};

