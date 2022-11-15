// BlueprintGeneratedClass Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C
// Size: 0x11c0 (Inherited: 0x11b8)
struct ATrap_Floor_Player_Launch_Pad_C : AFloor_Player_Launch_Pad_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11b8(0x08)

	bool ShouldInvisiblePropsBeAllowed(); // Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.ShouldInvisiblePropsBeAllowed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	bool IsTargetableByLinearMover(); // Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.IsTargetableByLinearMover // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xdef49c
	struct FName GetMarkerDetailsId(); // Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.GetMarkerDetailsId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void OnFinishedBuilding(); // Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.OnFinishedBuilding // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Trap_Floor_Player_Launch_Pad(int32_t EntryPoint); // Function Trap_Floor_Player_Launch_Pad.Trap_Floor_Player_Launch_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Launch_Pad // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

