// BlueprintGeneratedClass Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C
// Size: 0x1109 (Inherited: 0x1091)
struct AAthena_Prop_SilkyBingo_C : AAthena_Prop_BurstReaction_Exploding_C {
	char pad_1091[0x7]; // 0x1091(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1098(0x08)
	double Explosion Radius; // 0x10a0(0x08)
	double Delay before applying effect; // 0x10a8(0x08)
	struct FVector Death Decal Size; // 0x10b0(0x18)
	struct FRandomStream Random Stream; // 0x10c8(0x08)
	double Distance for Camera Lens; // 0x10d0(0x08)
	struct TArray<enum class EObjectTypeQuery> Object Types; // 0x10d8(0x10)
	struct AActor* HitActor; // 0x10e8(0x08)
	double LandscapeExtinguishRadius; // 0x10f0(0x08)
	struct AController* WaterInstigator; // 0x10f8(0x08)
	bool Debug; // 0x1100(0x01)
	char pad_1101[0x3]; // 0x1101(0x03)
	int32_t Count; // 0x1104(0x04)
	bool SomethingWasPutOut; // 0x1108(0x01)

	void QuestHandling(); // Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.QuestHandling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Apply Water if Curie Enabled(struct AActor* Instigator, struct AActor* Target); // Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.Apply Water if Curie Enabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool Distance Check for Camera Lens Effect(struct AActor* Instigator); // Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.Distance Check for Camera Lens Effect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Athena_Prop_SilkyBingo(int32_t EntryPoint); // Function Athena_Prop_SilkyBingo.Athena_Prop_SilkyBingo_C.ExecuteUbergraph_Athena_Prop_SilkyBingo // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

