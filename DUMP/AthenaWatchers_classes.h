// WidgetBlueprintGeneratedClass AthenaWatchers.AthenaWatchers_C
// Size: 0x2f8 (Inherited: 0x2e0)
struct UAthenaWatchers_C : UAthenaWatchers {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* OnValueChanged; // 0x2e8(0x08)
	struct UAthenaWatcherEye_C* AthenaWatcherEye; // 0x2f0(0x08)

	void SpectatorsBegan(bool bBigGroup); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsBegan // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpectatorsAdded(bool bBigGroup); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsAdded // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpectatorsEnded(); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsEnded // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpectatorRemoved(); // Function AthenaWatchers.AthenaWatchers_C.SpectatorRemoved // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SpectatorCountChanged_BP(int32_t NewCount); // Function AthenaWatchers.AthenaWatchers_C.SpectatorCountChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaWatchers(int32_t EntryPoint); // Function AthenaWatchers.AthenaWatchers_C.ExecuteUbergraph_AthenaWatchers // (Final|UbergraphFunction) // @ game+0xdef49c
};

