// BlueprintGeneratedClass ShadowProxyMeshComponent.ShadowProxyMeshComponent_C
// Size: 0x620 (Inherited: 0x5f0)
struct UShadowProxyMeshComponent_C : UStaticMeshComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f0(0x08)
	bool parentDefault_CastShadow; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct FString cvarString; // 0x600(0x10)
	bool isProxyActive; // 0x610(0x01)
	bool forceShadowDisabled; // 0x611(0x01)
	char pad_612[0x6]; // 0x612(0x06)
	struct UMeshComponent* ParentComponent; // 0x618(0x08)

	bool getProxyVisibility(); // Function ShadowProxyMeshComponent.ShadowProxyMeshComponent_C.getProxyVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void handleOwnerDamaged(); // Function ShadowProxyMeshComponent.ShadowProxyMeshComponent_C.handleOwnerDamaged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void validateShadowSettings(); // Function ShadowProxyMeshComponent.ShadowProxyMeshComponent_C.validateShadowSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetParentComponent(struct UMeshComponent*& AsMesh Component); // Function ShadowProxyMeshComponent.ShadowProxyMeshComponent_C.GetParentComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void handleCvarChanged(struct FString CVarName); // Function ShadowProxyMeshComponent.ShadowProxyMeshComponent_C.handleCvarChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function ShadowProxyMeshComponent.ShadowProxyMeshComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void setProxyShadowForceDisabled(bool forceShadowDisabled); // Function ShadowProxyMeshComponent.ShadowProxyMeshComponent_C.setProxyShadowForceDisabled // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShadowProxyMeshComponent(int32_t EntryPoint); // Function ShadowProxyMeshComponent.ShadowProxyMeshComponent_C.ExecuteUbergraph_ShadowProxyMeshComponent // (Final|UbergraphFunction) // @ game+0xdef49c
};

