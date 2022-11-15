// WidgetBlueprintGeneratedClass AthenaGlobalCash.AthenaGlobalCash_C
// Size: 0x300 (Inherited: 0x2f0)
struct UAthenaGlobalCash_C : UFortGlobalCashWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UVerticalBox* VBox_Content; // 0x2f8(0x08)

	void OnQueryStarted(); // Function AthenaGlobalCash.AthenaGlobalCash_C.OnQueryStarted // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnQueryCompletedSuccessfully(int32_t GlobalCashBalance); // Function AthenaGlobalCash.AthenaGlobalCash_C.OnQueryCompletedSuccessfully // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaGlobalCash(int32_t EntryPoint); // Function AthenaGlobalCash.AthenaGlobalCash_C.ExecuteUbergraph_AthenaGlobalCash // (Final|UbergraphFunction) // @ game+0xdef49c
};

