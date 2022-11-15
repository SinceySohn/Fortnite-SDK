// WidgetBlueprintGeneratedClass MiniPartyBar.MiniPartyBar_C
// Size: 0x2d0 (Inherited: 0x290)
struct UMiniPartyBar_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UIconTextButton_C* ButtonLocalPlayer; // 0x298(0x08)
	struct UImage* LineSeparator; // 0x2a0(0x08)
	struct UTeamMemberBanner_C* LocalPlayer; // 0x2a8(0x08)
	struct UTeamMemberBanner_C* RemotePlayer1; // 0x2b0(0x08)
	struct UTeamMemberBanner_C* RemotePlayer2; // 0x2b8(0x08)
	struct UTeamMemberBanner_C* RemotePlayer3; // 0x2c0(0x08)
	struct UTeamMemberManage_C* NewLocalPlayerWidget; // 0x2c8(0x08)

	struct UWidget* Get Banners Tooltip Widget(); // Function MiniPartyBar.MiniPartyBar_C.Get Banners Tooltip Widget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void HandlePartybarUIFeatureChanged(enum class EFortUIFeature Feature, enum class EFortUIFeatureState FeatureState); // Function MiniPartyBar.MiniPartyBar_C.HandlePartybarUIFeatureChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function MiniPartyBar.MiniPartyBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function MiniPartyBar.MiniPartyBar_C.BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_MiniPartyBar(int32_t EntryPoint); // Function MiniPartyBar.MiniPartyBar_C.ExecuteUbergraph_MiniPartyBar // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

