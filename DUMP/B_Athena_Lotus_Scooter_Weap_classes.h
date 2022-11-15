// BlueprintGeneratedClass B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C
// Size: 0x1850 (Inherited: 0x1818)
struct AB_Athena_Lotus_Scooter_Weap_C : AB_Ranged_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)
	int32_t CurrentAmmo; // 0x1820(0x04)
	int32_t MarkedPlayerCount; // 0x1824(0x04)
	struct TArray<struct AActor*> MarkedActors; // 0x1828(0x10)
	struct UMaterialInstanceDynamic* ScreenMaterial; // 0x1838(0x08)
	int32_t ScreenCounterIndex; // 0x1840(0x04)
	bool bPlayerAlreadyMarked; // 0x1844(0x01)
	char pad_1845[0x3]; // 0x1845(0x03)
	struct UGameplayEffect* MarkedGE; // 0x1848(0x08)

	void OnRep_MarkedActors(); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.OnRep_MarkedActors // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnIndicatedActorRemoved(struct AActor* IndicatedActor); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.OnIndicatedActorRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnIndicatedActorAdded(struct AActor* IndicatedActor); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.OnIndicatedActorAdded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_MarkedPlayerCount(); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.OnRep_MarkedPlayerCount // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Ammo Changed(int32_t LocalCount, int32_t LocalRemaining); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.Ammo Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Athena_Lotus_Scooter_Weap(int32_t EntryPoint); // Function B_Athena_Lotus_Scooter_Weap.B_Athena_Lotus_Scooter_Weap_C.ExecuteUbergraph_B_Athena_Lotus_Scooter_Weap // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

