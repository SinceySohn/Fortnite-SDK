// BlueprintGeneratedClass GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C
// Size: 0xf50 (Inherited: 0xf30)
struct UGA_Athena_FloppingRabbit_C : UGA_Athena_Consumable_Throw_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf30(0x08)
	struct FGameplayTag T_Active; // 0xf38(0x04)
	struct FGameplayTag T_InWorld; // 0xf3c(0x04)
	struct UAnimMontage* CastMontageWeapon; // 0xf40(0x08)
	struct FGameplayTag OpenSeatTag; // 0xf48(0x04)
	struct FGameplayTag InVehicleTag; // 0xf4c(0x04)

	void CheckAndEndForRoofedSeat(bool& EndedAbility); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.CheckAndEndForRoofedSeat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	void OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(struct FName NotifyName); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Removed_311A4C2149AD8A3A0CC53BBB97F01E65(); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.Removed_311A4C2149AD8A3A0CC53BBB97F01E65 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_BA7C268C4DC490F4C68661A36094112C(); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.Added_BA7C268C4DC490F4C68661A36094112C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbility(); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ThrowMontageStarted(); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.ThrowMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_FloppingRabbit(int32_t EntryPoint); // Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.ExecuteUbergraph_GA_Athena_FloppingRabbit // (Final|UbergraphFunction) // @ game+0xdef49c
};

