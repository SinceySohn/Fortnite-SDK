// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
// Size: 0x510 (Inherited: 0x290)
struct UCinematic-TeamMics_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UMicIndicator_C* MicIndicator; // 0x298(0x08)
	struct UCommonWidgetSwitcherLegacy* SwitcherConnectingStranger; // 0x2a0(0x08)
	struct UCommonTextBlock* ; // 0x2a8(0x08)
	struct UCommonTextBlock* TextPlayerName; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct FFortTeamMemberInfo MemberInfo; // 0x2c0(0x250)

	void Update(struct FFortTeamMemberInfo UpdatedMemberInfo); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_Cinematic-TeamMics(int32_t EntryPoint); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics // (Final|UbergraphFunction) // @ game+0xdef49c
};

