// BlueprintGeneratedClass B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C
// Size: 0x1820 (Inherited: 0x1818)
struct AB_Rifle_Sniper_Heavy_Athena_C : AB_Rifle_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1818(0x08)

	void Muzzle Flash FX(bool Persistent Fire); // Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.Muzzle Flash FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculateTraceDistance(struct FVector& StartPoint, struct FVector& EndPoint); // Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.CalculateTraceDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveTick(float DeltaSeconds); // Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena(int32_t EntryPoint); // Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena // (Final|UbergraphFunction) // @ game+0xdef49c
};

