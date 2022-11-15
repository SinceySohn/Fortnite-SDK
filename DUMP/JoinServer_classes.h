// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// Size: 0x580 (Inherited: 0x570)
struct UJoinServer_C : UFortUIStateWidget_JoinServer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UBuildWatermark_C* BuildWatermark; // 0x578(0x08)

	void OnEnterState(enum class EFortUIState PreviousUIState); // Function JoinServer.JoinServer_C.OnEnterState // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnShowTutorialDialog(); // Function JoinServer.JoinServer_C.OnShowTutorialDialog // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_JoinServer(int32_t EntryPoint); // Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer // (Final|UbergraphFunction) // @ game+0xdef49c
};

