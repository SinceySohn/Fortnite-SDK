// WidgetBlueprintGeneratedClass ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C
// Size: 0x806 (Inherited: 0x718)
struct UShowdownTournamentPosterFront_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x718(0x08)
	struct UBorder* Border_Alert; // 0x720(0x08)
	struct UImage* Image_LockIcon; // 0x728(0x08)
	struct UImage* Image_LockIconWorldCup; // 0x730(0x08)
	struct UImage* Image_PosterShadow; // 0x738(0x08)
	struct UInvalidationBox* ; // 0x740(0x08)
	struct UInvalidationBox* ; // 0x748(0x08)
	struct UInvalidationBox* ; // 0x750(0x08)
	struct UInvalidationBox* ; // 0x758(0x08)
	struct UOverlay* OverlayEventLocked; // 0x760(0x08)
	struct UOverlay* OverlayEventLockedWorldCup; // 0x768(0x08)
	struct UScaleBox* ; // 0x770(0x08)
	struct UScaleBox* ; // 0x778(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x780(0x08)
	struct UVerticalBox* StandardLayout; // 0x788(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_PosterTextLayout; // 0x790(0x08)
	struct UCommonTextBlock* Text_EventAlert; // 0x798(0x08)
	struct UCommonTextBlock* TournamentDateText; // 0x7a0(0x08)
	struct UCommonTextBlock* TournamentDateTextWorldCup; // 0x7a8(0x08)
	struct UCommonTextBlock* TournamentTitle1; // 0x7b0(0x08)
	struct UCommonTextBlock* TournamentTitle1WorldCup; // 0x7b8(0x08)
	struct UCommonTextBlock* TournamentTitle2; // 0x7c0(0x08)
	struct UCommonTextBlock* TournamentTitle2WorldCup; // 0x7c8(0x08)
	struct UVerticalBox* WorldCupLayout; // 0x7d0(0x08)
	struct FSlateColor TitleColor; // 0x7d8(0x14)
	bool HiddenWhileLoading; // 0x7ec(0x01)
	char pad_7ED[0x3]; // 0x7ed(0x03)
	struct FSlateColor SubColor; // 0x7f0(0x14)
	bool HidePin; // 0x804(0x01)
	enum class EStretch TournamentScaleboxStretch; // 0x805(0x01)

	void GetTournamentDateText(struct FText& TournamentDate); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.GetTournamentDateText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RefreshDataBP(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xdef49c
	void BP_ResetDetailView(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BP_ResetDetailView // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ShowdownTournamentPosterFront(int32_t EntryPoint); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.ExecuteUbergraph_ShowdownTournamentPosterFront // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

