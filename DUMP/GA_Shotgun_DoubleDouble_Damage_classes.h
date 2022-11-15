// BlueprintGeneratedClass GA_Shotgun_DoubleDouble_Damage.GA_Shotgun_DoubleDouble_Damage_C
// Size: 0xb70 (Inherited: 0xb5d)
struct UGA_Shotgun_DoubleDouble_Damage_C : UGA_Ranged_GenericDamage_C {
	char pad_B5D[0x3]; // 0xb5d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb60(0x08)
	struct UGameplayEffect* GE_SelfKnock; // 0xb68(0x08)

	void K2_CommitExecute(); // Function GA_Shotgun_DoubleDouble_Damage.GA_Shotgun_DoubleDouble_Damage_C.K2_CommitExecute // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Shotgun_DoubleDouble_Damage(int32_t EntryPoint); // Function GA_Shotgun_DoubleDouble_Damage.GA_Shotgun_DoubleDouble_Damage_C.ExecuteUbergraph_GA_Shotgun_DoubleDouble_Damage // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

