// BlueprintGeneratedClass Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C
// Size: 0xfa1 (Inherited: 0xf80)
struct AApollo_Tree_RedAlder_C : AParent_Tree_Apollo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf80(0x08)
	struct UShadowProxyMeshComponent_C* ShadowProxyMeshComponent; // 0xf88(0x08)
	struct FLinearColor DeathEffect_leafColor; // 0xf90(0x10)
	bool useDeathFXOverride; // 0xfa0(0x01)

	void activateDeathFXOverride(); // Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.activateDeathFXOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void initRandomUndergrowth(); // Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.initRandomUndergrowth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Apollo_Tree_RedAlder(int32_t EntryPoint); // Function Apollo_Tree_RedAlder.Apollo_Tree_RedAlder_C.ExecuteUbergraph_Apollo_Tree_RedAlder // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

