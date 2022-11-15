// BlueprintGeneratedClass Prj_Athena_Consumable_Thrown_Cabbage.Prj_Athena_Consumable_Thrown_Cabbage_C
// Size: 0xb20 (Inherited: 0xae1)
struct APrj_Athena_Consumable_Thrown_Cabbage_C : AB_Prj_Athena_Consumable_Thrown_C {
	char pad_AE1[0x7]; // 0xae1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae8(0x08)
	struct FVector Initial Loc; // 0xaf0(0x18)
	struct FVector Landed Loc; // 0xb08(0x18)

	void ReceiveBeginPlay(); // Function Prj_Athena_Consumable_Thrown_Cabbage.Prj_Athena_Consumable_Thrown_Cabbage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void On Pickup Spawned(struct AFortPickup* Spawned Pickup); // Function Prj_Athena_Consumable_Thrown_Cabbage.Prj_Athena_Consumable_Thrown_Cabbage_C.On Pickup Spawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Prj_Athena_Consumable_Thrown_Cabbage(int32_t EntryPoint); // Function Prj_Athena_Consumable_Thrown_Cabbage.Prj_Athena_Consumable_Thrown_Cabbage_C.ExecuteUbergraph_Prj_Athena_Consumable_Thrown_Cabbage // (Final|UbergraphFunction) // @ game+0xdef49c
};

