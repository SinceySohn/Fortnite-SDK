// WidgetBlueprintGeneratedClass MinimalSquadMember.MinimalSquadMember_C
// Size: 0x14a8 (Inherited: 0x1460)
struct UMinimalSquadMember_C : UAthenaMinimalSquadMemberEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1460(0x08)
	struct UWidgetAnimation* StyleNotReady; // 0x1468(0x08)
	struct UWidgetAnimation* StyleSitOut; // 0x1470(0x08)
	struct UWidgetAnimation* StyleEmpty; // 0x1478(0x08)
	struct UWidgetAnimation* OnReady; // 0x1480(0x08)
	struct UImage* Image_Meeple; // 0x1488(0x08)
	struct UImage* LocalUserIndicator; // 0x1490(0x08)
	struct UOverlay* MeepleContainer; // 0x1498(0x08)
	struct UImage* ReadyFlash; // 0x14a0(0x08)

	void SetEmptyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSitOutVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetNotReadyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetReadyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetReadyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus); // Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function MinimalSquadMember.MinimalSquadMember_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MinimalSquadMember(int32_t EntryPoint); // Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember // (Final|UbergraphFunction) // @ game+0xdef49c
};

