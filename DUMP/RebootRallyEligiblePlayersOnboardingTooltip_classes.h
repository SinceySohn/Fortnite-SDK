// WidgetBlueprintGeneratedClass RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C
// Size: 0x448 (Inherited: 0x408)
struct URebootRallyEligiblePlayersOnboardingTooltip_C : UFortSidebarOnboardTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* Reset; // 0x410(0x08)
	struct UWidgetAnimation* Outro; // 0x418(0x08)
	struct UWidgetAnimation* Pulse; // 0x420(0x08)
	struct UCommonRichTextBlock* ; // 0x428(0x08)
	struct UCommonRichTextBlock* ; // 0x430(0x08)
	struct UImage* Image_Arrow; // 0x438(0x08)
	struct UImage* ImageBurst; // 0x440(0x08)

	void Finished_8745633545D14FC376C81C8A09011F8C(); // Function RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C.Finished_8745633545D14FC376C81C8A09011F8C // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnShowTooltip(); // Function RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C.OnShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnEndTooltip(); // Function RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C.OnEndTooltip // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip(int32_t EntryPoint); // Function RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C.ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip // (Final|UbergraphFunction) // @ game+0xdef49c
};

