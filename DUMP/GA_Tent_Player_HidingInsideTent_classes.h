// BlueprintGeneratedClass GA_Tent_Player_HidingInsideTent.GA_Tent_Player_HidingInsideTent_C
// Size: 0xcb0 (Inherited: 0xca0)
struct UGA_Tent_Player_HidingInsideTent_C : UGA_Generic_EffectiveHealingShielding_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xca0(0x08)
	struct AActor* HidingProp; // 0xca8(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Tent_Player_HidingInsideTent.GA_Tent_Player_HidingInsideTent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Play VA(struct AActor* Target Tent, int32_t DataIndex); // Function GA_Tent_Player_HidingInsideTent.GA_Tent_Player_HidingInsideTent_C.Play VA // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Tent_Player_HidingInsideTent.GA_Tent_Player_HidingInsideTent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Tent_Player_HidingInsideTent.GA_Tent_Player_HidingInsideTent_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Tent_Player_HidingInsideTent(int32_t EntryPoint); // Function GA_Tent_Player_HidingInsideTent.GA_Tent_Player_HidingInsideTent_C.ExecuteUbergraph_GA_Tent_Player_HidingInsideTent // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

