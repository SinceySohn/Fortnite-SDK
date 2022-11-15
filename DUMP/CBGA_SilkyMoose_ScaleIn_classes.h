// BlueprintGeneratedClass CBGA_SilkyMoose_ScaleIn.CBGA_SilkyMoose_ScaleIn_C
// Size: 0xd79 (Inherited: 0xd28)
struct ACBGA_SilkyMoose_ScaleIn_C : ACBGA_SilkyMoose_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd28(0x08)
	double LerpTimerInterval; // 0xd30(0x08)
	struct FTimerHandle LerpTimerHandle; // 0xd38(0x08)
	double Cur Min World Scale; // 0xd40(0x08)
	double Cur Max World Scale; // 0xd48(0x08)
	double Curr World Scale; // 0xd50(0x08)
	double Scale Interp Speed; // 0xd58(0x08)
	bool HasReachedDestScale; // 0xd60(0x01)
	char pad_D61[0x7]; // 0xd61(0x07)
	double Start World Scale; // 0xd68(0x08)
	double Dest World Scale; // 0xd70(0x08)
	bool ScaleOutAndDie; // 0xd78(0x01)

	void Set Weed Scale(double SizeAlpha); // Function CBGA_SilkyMoose_ScaleIn.CBGA_SilkyMoose_ScaleIn_C.Set Weed Scale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function CBGA_SilkyMoose_ScaleIn.CBGA_SilkyMoose_ScaleIn_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function CBGA_SilkyMoose_ScaleIn.CBGA_SilkyMoose_ScaleIn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Scale Out and Die(); // Function CBGA_SilkyMoose_ScaleIn.CBGA_SilkyMoose_ScaleIn_C.Scale Out and Die // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UpdateLerpToDest(); // Function CBGA_SilkyMoose_ScaleIn.CBGA_SilkyMoose_ScaleIn_C.UpdateLerpToDest // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CBGA_SilkyMoose_ScaleIn(int32_t EntryPoint); // Function CBGA_SilkyMoose_ScaleIn.CBGA_SilkyMoose_ScaleIn_C.ExecuteUbergraph_CBGA_SilkyMoose_ScaleIn // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

