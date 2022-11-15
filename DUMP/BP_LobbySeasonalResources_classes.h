// WidgetBlueprintGeneratedClass BP_LobbySeasonalResources.BP_LobbySeasonalResources_C
// Size: 0x2d8 (Inherited: 0x2a0)
struct UBP_LobbySeasonalResources_C : UFortBattlePassResourcesWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UAthenaGlobalCashHorizontal_C* AthenaGlobalCashHorizontal; // 0x2a8(0x08)
	struct UMoreInfo_Ressources_Button_C* ; // 0x2b0(0x08)
	struct UMoreInfo_Ressources_MobileButton_C* ; // 0x2b8(0x08)
	struct UOverlay* MoreInfoOverlay; // 0x2c0(0x08)
	struct UOverlay* MoreInfoOverlayMobile; // 0x2c8(0x08)
	struct UCommonTextBlock* Text_SeasonName; // 0x2d0(0x08)

	void BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.BndEvt__MoreInfo_Ressources_Button_67_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.BndEvt__MoreInfo_Ressources_MobileButton_19_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnShowMoreInfo(bool bShouldShowMoreInfo); // Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.OnShowMoreInfo // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_LobbySeasonalResources(int32_t EntryPoint); // Function BP_LobbySeasonalResources.BP_LobbySeasonalResources_C.ExecuteUbergraph_BP_LobbySeasonalResources // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

