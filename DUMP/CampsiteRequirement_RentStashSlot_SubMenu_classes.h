// BlueprintGeneratedClass CampsiteRequirement_RentStashSlot_SubMenu.CampsiteRequirement_RentStashSlot_SubMenu_C
// Size: 0xc8 (Inherited: 0x70)
struct UCampsiteRequirement_RentStashSlot_SubMenu_C : UFortConversationRequirement_ControllerRequirement {
	enum class Enum_Campsite_Improvements Improvement Type; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t StashedItemIndex; // 0x74(0x04)
	struct FScalableFloat SlotMustBeRented?; // 0x78(0x28)
	struct FScalableFloat StashEnabled; // 0xa0(0x28)

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext& Context); // Function CampsiteRequirement_RentStashSlot_SubMenu.CampsiteRequirement_RentStashSlot_SubMenu_C.IsRequirementSatisfied // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
};

