// Class SidewaysCodeUI.SidewaysWidgetBase
// Size: 0x2e0 (Inherited: 0x2d0)
struct USidewaysWidgetBase : UFortHUDElementWidget {
	struct AFortPlayspaceReplicatedState* ReplicatedState; // 0x2d0(0x08)
	enum class ESidewaysState CurrentSidewaysState; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)

	void OnSidewaysStateChanged(struct USidewaysStateComponent* SidewaysStateComponent, struct ASidewaysPlayspace* NewPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState); // Function SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged // (Final|Native|Protected) // @ game+0x6763428
	void OnParamUpdated(struct FGameplayTag& UpdatedParam); // Function SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnExitSideways(); // Function SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEnterSideways(struct ASidewaysPlayspace* Playspace); // Function SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	bool IsValidPlayspace(struct ASidewaysPlayspace* Playspace); // Function SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace // (Event|Protected|BlueprintEvent|Const) // @ game+0xdef49c
	void InitializeVariables(); // Function SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void HandleFortPawnChanged(struct AFortPawn* PossessedPawn); // Function SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged // (Final|Native|Protected) // @ game+0x67633a8
	void ConfigureUIFromPlayspace(struct ASidewaysPlayspace* Playspace); // Function SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
};

