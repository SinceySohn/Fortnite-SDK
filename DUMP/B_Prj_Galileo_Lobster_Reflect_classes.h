// BlueprintGeneratedClass B_Prj_Galileo_Lobster_Reflect.B_Prj_Galileo_Lobster_Reflect_C
// Size: 0xc20 (Inherited: 0xba0)
struct AB_Prj_Galileo_Lobster_Reflect_C : AFortProjectileAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xba0(0x08)
	struct UParticleSystemComponent* P_Galileo_Bun_Projectile_Glow; // 0xba8(0x08)
	struct UStaticMeshComponent* TracerMesh; // 0xbb0(0x08)
	struct USoundBase* Sniper_Rifle_SurfaceImpactSound; // 0xbb8(0x08)
	struct USoundBase* Sniper_Rifle_PlayerImpactSound; // 0xbc0(0x08)
	struct FVector DecalSize; // 0xbc8(0x18)
	struct FScalableFloat ProjectileGravityScale; // 0xbe0(0x28)
	bool UseGalileoBunTracer; // 0xc08(0x01)
	char pad_C09[0x7]; // 0xc09(0x07)
	struct UParticleSystem* GenericTracer; // 0xc10(0x08)
	struct UStaticMesh* GenericMesh; // 0xc18(0x08)

	void UserConstructionScript(); // Function B_Prj_Galileo_Lobster_Reflect.B_Prj_Galileo_Lobster_Reflect_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Galileo_Lobster_Reflect.B_Prj_Galileo_Lobster_Reflect_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Prj_Galileo_Lobster_Reflect.B_Prj_Galileo_Lobster_Reflect_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Prj_Galileo_Lobster_Reflect(int32_t EntryPoint); // Function B_Prj_Galileo_Lobster_Reflect.B_Prj_Galileo_Lobster_Reflect_C.ExecuteUbergraph_B_Prj_Galileo_Lobster_Reflect // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

