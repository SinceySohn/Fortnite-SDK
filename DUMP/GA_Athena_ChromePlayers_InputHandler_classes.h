// BlueprintGeneratedClass GA_Athena_ChromePlayers_InputHandler.GA_Athena_ChromePlayers_InputHandler_C
// Size: 0xb78 (Inherited: 0xb20)
struct UGA_Athena_ChromePlayers_InputHandler_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct FGameplayTag Tag_InBlobState; // 0xb30(0x04)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct FGameplayTagContainer Tags_InBlobState; // 0xb38(0x20)
	struct FGameplayTag Tag_EnteringBlobState; // 0xb58(0x04)
	struct FGameplayTag Tag_ExitingBlobState; // 0xb5c(0x04)
	struct UGameplayEffect* GE_EnterBlobState; // 0xb60(0x08)
	struct UGameplayEffect* GE_Cooldown_EnterBlob; // 0xb68(0x08)
	struct UGameplayEffect* GE_Cooldown_ExitBlob; // 0xb70(0x08)

	void ToggleBlobState(); // Function GA_Athena_ChromePlayers_InputHandler.GA_Athena_ChromePlayers_InputHandler_C.ToggleBlobState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ApplyBlobState(); // Function GA_Athena_ChromePlayers_InputHandler.GA_Athena_ChromePlayers_InputHandler_C.ApplyBlobState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RemoveBlobState(); // Function GA_Athena_ChromePlayers_InputHandler.GA_Athena_ChromePlayers_InputHandler_C.RemoveBlobState // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_ChromePlayers_InputHandler.GA_Athena_ChromePlayers_InputHandler_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_Athena_ChromePlayers_InputHandler(int32_t EntryPoint); // Function GA_Athena_ChromePlayers_InputHandler.GA_Athena_ChromePlayers_InputHandler_C.ExecuteUbergraph_GA_Athena_ChromePlayers_InputHandler // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

