// WidgetBlueprintGeneratedClass TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C
// Size: 0x1480 (Inherited: 0x1470)
struct UTeamMemberPedestal_FeatInfo_C : UFortTeamMemberPedestalFeatInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1470(0x08)
	struct UWidgetAnimation* FeatInfoSet; // 0x1478(0x08)

	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnFeatDefinitionSet(); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnFeatDefinitionSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_TeamMemberPedestal_FeatInfo(int32_t EntryPoint); // Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.ExecuteUbergraph_TeamMemberPedestal_FeatInfo // (Final|UbergraphFunction) // @ game+0xdef49c
};

