// BlueprintGeneratedClass Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C
// Size: 0xf31 (Inherited: 0xe82)
struct APrj_Athena_GliderGrappler_Parent_C : AB_Prj_Hook_Athena_C {
	char pad_E82[0x6]; // 0xe82(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe88(0x08)
	struct UAthenaGliderItemDefinition* Glider Cosmetic Override; // 0xe90(0x08)
	bool Has Deployed; // 0xe98(0x01)
	char pad_E99[0x7]; // 0xe99(0x07)
	double BadgerGrapeDelayFailsafe; // 0xea0(0x08)
	struct FGameplayTagContainer BlockedAbilitiesWhileLaunching; // 0xea8(0x20)
	struct FGameplayTag BlockBuildingTag; // 0xec8(0x04)
	char pad_ECC[0x4]; // 0xecc(0x04)
	struct UGameplayEffect* GE_GlideBlockActions; // 0xed0(0x08)
	struct USoundBase* Sound_GliderOpen; // 0xed8(0x08)
	struct FGameplayTag Event_DestroyGrappler; // 0xee0(0x04)
	char pad_EE4[0x4]; // 0xee4(0x04)
	struct FGameplayTagContainer T_BlockingGE; // 0xee8(0x20)
	struct FScalableFloat DisableGliderDeploy; // 0xf08(0x28)
	bool bBlockingLaunchAbilities; // 0xf30(0x01)

	void Add Remove Block Ability Tags(bool Add Block); // Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.Add Remove Block Ability Tags // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Grapple(); // Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.Grapple // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Jump Apex Reached(); // Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.Jump Apex Reached // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Teleported - Return abilities and stop(struct AFortPawn* FortPawn); // Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.Teleported - Return abilities and stop // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prj_Athena_GliderGrappler_Parent(int32_t EntryPoint); // Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.ExecuteUbergraph_Prj_Athena_GliderGrappler_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

