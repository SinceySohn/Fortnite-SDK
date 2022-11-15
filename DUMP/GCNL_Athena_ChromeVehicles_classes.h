// BlueprintGeneratedClass GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C
// Size: 0x9c0 (Inherited: 0x960)
struct AGCNL_Athena_ChromeVehicles_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x968(0x08)
	struct AFortAthenaVehicle* Fort Athena Vehicle; // 0x970(0x08)
	struct UB_Lackluster_ApplyChrome_C* ChromeComponent; // 0x978(0x08)
	struct FGameplayTag Valet Vehicle ModTag; // 0x980(0x04)
	struct FGameplayTag CowCatcherMod Tag; // 0x984(0x04)
	struct FGameplayTag Chonkers Tire Mod Tag; // 0x988(0x04)
	char pad_98C[0x4]; // 0x98c(0x04)
	struct TScriptInterface<IFortVehicleInterface> As Fort Vehicle Interface; // 0x990(0x10)
	struct TArray<struct FB_Lackluster_ChromeMaterialStruct> Chrome Material Struct; // 0x9a0(0x10)
	struct UB_Lackluster_ApplyChrome_C* Result; // 0x9b0(0x08)
	struct FGameplayTag VehicleModsTag; // 0x9b8(0x04)
	struct FGameplayTag Gameplay Cue Tag; // 0x9bc(0x04)

	void Added_9A23B8F34315AF7942ACF5B542440264(); // Function GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C.Added_9A23B8F34315AF7942ACF5B542440264 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_DE7EA2EE4558EAC66F95F497FFBB9C95(); // Function GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C.Added_DE7EA2EE4558EAC66F95F497FFBB9C95 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Added_C29BAE224B63ECFD4F5BC8A421EE346F(); // Function GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C.Added_C29BAE224B63ECFD4F5BC8A421EE346F // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void Apply CowCatcher Visual(); // Function GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C.Apply CowCatcher Visual // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Apply OffRoad Chrome Visuals(); // Function GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C.Apply OffRoad Chrome Visuals // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GCNL_Athena_ChromeVehicles(int32_t EntryPoint); // Function GCNL_Athena_ChromeVehicles.GCNL_Athena_ChromeVehicles_C.ExecuteUbergraph_GCNL_Athena_ChromeVehicles // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

