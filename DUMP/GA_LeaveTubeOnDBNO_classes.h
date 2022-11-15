// BlueprintGeneratedClass GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C
// Size: 0xb30 (Inherited: 0xb20)
struct UGA_LeaveTubeOnDBNO_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)

	void K2_ActivateAbility(); // Function GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void DownButNotOut(struct AFortPawn* FortPawn, bool bInIsDBNO); // Function GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C.DownButNotOut // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GA_LeaveTubeOnDBNO(int32_t EntryPoint); // Function GA_LeaveTubeOnDBNO.GA_LeaveTubeOnDBNO_C.ExecuteUbergraph_GA_LeaveTubeOnDBNO // (Final|UbergraphFunction) // @ game+0xdef49c
};

