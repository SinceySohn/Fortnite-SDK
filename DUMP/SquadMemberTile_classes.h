// WidgetBlueprintGeneratedClass SquadMemberTile.SquadMemberTile_C
// Size: 0x1518 (Inherited: 0x14a0)
struct USquadMemberTile_C : UAthenaSquadMemberDetailedEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UWidgetAnimation* OnIntro; // 0x14a8(0x08)
	struct UWidgetAnimation* OnLocalUserDefined; // 0x14b0(0x08)
	struct UWidgetAnimation* OnSelected; // 0x14b8(0x08)
	struct UWidgetAnimation* SetRibbonRotation; // 0x14c0(0x08)
	struct UWidgetAnimation* StyleEmpty; // 0x14c8(0x08)
	struct UWidgetAnimation* StyleNotReady; // 0x14d0(0x08)
	struct UWidgetAnimation* StyleReady; // 0x14d8(0x08)
	struct UWidgetAnimation* StyleSitOut; // 0x14e0(0x08)
	struct UWidgetAnimation* OnHovered; // 0x14e8(0x08)
	struct UBorder* EntryBorder; // 0x14f0(0x08)
	struct UImage* LoadingThrobberBacking; // 0x14f8(0x08)
	struct UImage* LocalUserIcon; // 0x1500(0x08)
	struct UImage* SquadOverlay; // 0x1508(0x08)
	struct UImage* SquadRibbon; // 0x1510(0x08)

	void SetVisuals(enum class EGameReadiness Member Readiness, bool Is In Frontend); // Function SquadMemberTile.SquadMemberTile_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetEmptyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetEmptyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSitOutVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetSitOutVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetReadyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetReadyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetNotReadyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetNotReadyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(struct UObject* Loaded); // Function SquadMemberTile.SquadMemberTile_C.OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnSquadAssigned(); // Function SquadMemberTile.SquadMemberTile_C.OnSquadAssigned // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SquadMemberTile.SquadMemberTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SquadMemberTile.SquadMemberTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus); // Function SquadMemberTile.SquadMemberTile_C.OnMemberGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnSelected(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnDeselected(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function SquadMemberTile.SquadMemberTile_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnMemberIsInFrontendChanged(bool bIsInFrontEnd); // Function SquadMemberTile.SquadMemberTile_C.OnMemberIsInFrontendChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SquadMemberTile(int32_t EntryPoint); // Function SquadMemberTile.SquadMemberTile_C.ExecuteUbergraph_SquadMemberTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

