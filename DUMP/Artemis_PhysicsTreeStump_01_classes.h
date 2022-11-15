// BlueprintGeneratedClass Artemis_PhysicsTreeStump_01.Artemis_PhysicsTreeStump_01_C
// Size: 0xef8 (Inherited: 0xef0)
struct AArtemis_PhysicsTreeStump_01_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xef0(0x08)

	void SendPlayerKilledStumpStatEvent(struct AFortPlayerPawn* Player, bool& bQuestCompleted); // Function Artemis_PhysicsTreeStump_01.Artemis_PhysicsTreeStump_01_C.SendPlayerKilledStumpStatEvent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Artemis_PhysicsTreeStump_01.Artemis_PhysicsTreeStump_01_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Artemis_PhysicsTreeStump_01(int32_t EntryPoint); // Function Artemis_PhysicsTreeStump_01.Artemis_PhysicsTreeStump_01_C.ExecuteUbergraph_Artemis_PhysicsTreeStump_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

