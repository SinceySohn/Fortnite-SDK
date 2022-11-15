// BlueprintGeneratedClass FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C
// Size: 0xa08 (Inherited: 0x9f0)
struct AFrontendCamera_VaultRotator_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f0(0x08)
	struct UCameraComponent* ; // 0x9f8(0x08)
	struct AVaultRotator_C* ActiveVaultRotator; // 0xa00(0x08)

	void SetVaultRotatorLighting(struct FName ItemRotatorTag); // Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.SetVaultRotatorLighting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FrontendCamera_VaultRotator(int32_t EntryPoint); // Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.ExecuteUbergraph_FrontendCamera_VaultRotator // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

