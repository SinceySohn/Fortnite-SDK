// BlueprintGeneratedClass Campsite_Improvement_Component.Campsite_Improvement_Component_C
// Size: 0x188 (Inherited: 0x170)
struct UCampsite_Improvement_Component_C : UCampsiteImprovementComponent {
	enum class Enum_Campsite_Improvements ImprovementType; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct ABGA_Campsite_C* OwningCampsite; // 0x178(0x08)
	struct APlayerState* ImprovementOwner; // 0x180(0x08)

	void SetImprovementOwner(struct APlayerState* InOwnerState); // Function Campsite_Improvement_Component.Campsite_Improvement_Component_C.SetImprovementOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

