// BlueprintGeneratedClass BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C
// Size: 0xd88 (Inherited: 0xd58)
struct ABP_DeimosRift_Dynamic_C : ABP_DeimosRift_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd58(0x08)
	double LifeTime; // 0xd60(0x08)
	struct FTimerHandle LifeTimeTimerHandle; // 0xd68(0x08)
	double TimeLastSetLifeTimeTimer; // 0xd70(0x08)
	double ThrottleTime; // 0xd78(0x08)
	struct UGameplayEffect* GE_LifeTimeLapsed; // 0xd80(0x08)

	void OnRep_ServerSpawnTime(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnRep_ServerSpawnTime // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SetLifeTimeTimer(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.SetLifeTimeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void LifetimeExpired(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.LifetimeExpired // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_Cosmetic_Intro(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Intro // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_Cosmetic_Idle(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Idle // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_Cosmetic_RampUp(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_RampUp // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_Cosmetic_ShouldDie(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_ShouldDie // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_DeimosRift_Dynamic(int32_t EntryPoint); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ExecuteUbergraph_BP_DeimosRift_Dynamic // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

