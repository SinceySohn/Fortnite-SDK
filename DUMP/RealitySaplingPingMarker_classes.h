// WidgetBlueprintGeneratedClass RealitySaplingPingMarker.RealitySaplingPingMarker_C
// Size: 0x781 (Inherited: 0x748)
struct URealitySaplingPingMarker_C : UAthenaSquadIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x748(0x08)
	struct UWidgetSwitcher* Switcher_IndicatorIcon; // 0x750(0x08)
	struct FLinearColor DefaultColor; // 0x758(0x10)
	struct AB_SMA_Athena_RealitySapling_Parent_C* CachedRealitySapling; // 0x768(0x08)
	struct TArray<char> FruitStates; // 0x770(0x10)
	enum class E_SaplingEnemyEventState EnemyEventState; // 0x780(0x01)

	void GetEnemyEventState(enum class E_SaplingEnemyEventState& EnemyEventState); // Function RealitySaplingPingMarker.RealitySaplingPingMarker_C.GetEnemyEventState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SetAndBindCachedSapling(struct AB_SMA_Athena_RealitySapling_Parent_C* NewSapling); // Function RealitySaplingPingMarker.RealitySaplingPingMarker_C.SetAndBindCachedSapling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateColor(); // Function RealitySaplingPingMarker.RealitySaplingPingMarker_C.UpdateColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSetMarkerData(struct FFortWorldMarkerData& FortWorldMarkerData); // Function RealitySaplingPingMarker.RealitySaplingPingMarker_C.OnSetMarkerData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void SaplingUpdateEvent(struct AB_SMA_Athena_RealitySapling_Parent_C* Sapling); // Function RealitySaplingPingMarker.RealitySaplingPingMarker_C.SaplingUpdateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnemyAttacking(); // Function RealitySaplingPingMarker.RealitySaplingPingMarker_C.OnEnemyAttacking // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnEnemyHarvesting(); // Function RealitySaplingPingMarker.RealitySaplingPingMarker_C.OnEnemyHarvesting // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RealitySaplingPingMarker(int32_t EntryPoint); // Function RealitySaplingPingMarker.RealitySaplingPingMarker_C.ExecuteUbergraph_RealitySaplingPingMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

