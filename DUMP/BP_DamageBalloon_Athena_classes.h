// BlueprintGeneratedClass BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C
// Size: 0xe08 (Inherited: 0xdd8)
struct ABP_DamageBalloon_Athena_C : ABuildingSMActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xdd8(0x08)
	struct UParticleSystemComponent* ExplosionParticle; // 0xde0(0x08)
	struct UFortHealthBarComponent* FortHealthBar; // 0xde8(0x08)
	bool DestroyBalloon; // 0xdf0(0x01)
	bool DontPlayDestroyAudio; // 0xdf1(0x01)
	char pad_DF2[0x6]; // 0xdf2(0x06)
	struct FMulticastInlineDelegate OnBalloonDestroyed; // 0xdf8(0x10)

	void OnRep_DestroyBalloon(); // Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnRep_DestroyBalloon // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void CrateIsGone(); // Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.CrateIsGone // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_DamageBalloon_Athena(int32_t EntryPoint); // Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ExecuteUbergraph_BP_DamageBalloon_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
	void OnBalloonDestroyed__DelegateSignature(); // Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnBalloonDestroyed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

