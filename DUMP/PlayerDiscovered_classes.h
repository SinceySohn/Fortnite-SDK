// WidgetBlueprintGeneratedClass PlayerDiscovered.PlayerDiscovered_C
// Size: 0x3c8 (Inherited: 0x328)
struct UPlayerDiscovered_C : UAthenaDiscoveredAreaOverlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* BriefShow; // 0x330(0x08)
	struct UCommonTextBlock* CommonTextBlock_LandmarkName; // 0x338(0x08)
	struct UImage* Image_BulletLeft; // 0x340(0x08)
	struct UImage* Image_BulletRight; // 0x348(0x08)
	struct UVerticalBox* MainBox; // 0x350(0x08)
	struct UVerticalBox* MainBox_Landmark; // 0x358(0x08)
	struct UCommonTextBlock* MainLocationText; // 0x360(0x08)
	struct UCommonTextBlock* ; // 0x368(0x08)
	struct UOverlay* Overlay_Container; // 0x370(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_LandmarkOrPOI; // 0x378(0x08)
	struct FGameplayTagContainer RelevantPlaylistTags; // 0x380(0x20)
	struct TSoftObjectPtr<USoundCue> SoundCue; // 0x3a0(0x28)

	void EndOfShow(); // Function PlayerDiscovered.PlayerDiscovered_C.EndOfShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E(struct UObject* Loaded); // Function PlayerDiscovered.PlayerDiscovered_C.OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Play Brief Show Sound(); // Function PlayerDiscovered.PlayerDiscovered_C.Play Brief Show Sound // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnNewDiscovery(struct FText& LocalizedLocationName, struct TSoftObjectPtr<USoundCue>& DiscoveredSoundCue, bool bIsNamedLocation); // Function PlayerDiscovered.PlayerDiscovered_C.OnNewDiscovery // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void OnStompedByOtherWidget(); // Function PlayerDiscovered.PlayerDiscovered_C.OnStompedByOtherWidget // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function PlayerDiscovered.PlayerDiscovered_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnStompFailed(); // Function PlayerDiscovered.PlayerDiscovered_C.OnStompFailed // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Brief Show Finished(); // Function PlayerDiscovered.PlayerDiscovered_C.Brief Show Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void K2_OnBecomeActive(); // Function PlayerDiscovered.PlayerDiscovered_C.K2_OnBecomeActive // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PlayerDiscovered(int32_t EntryPoint); // Function PlayerDiscovered.PlayerDiscovered_C.ExecuteUbergraph_PlayerDiscovered // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

