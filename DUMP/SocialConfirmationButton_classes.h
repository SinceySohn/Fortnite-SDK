// WidgetBlueprintGeneratedClass SocialConfirmationButton.SocialConfirmationButton_C
// Size: 0x1480 (Inherited: 0x1430)
struct USocialConfirmationButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* OnHover; // 0x1438(0x08)
	struct UBorder* Border_InteractionIndicator; // 0x1440(0x08)
	struct UImage* InteractionIcon; // 0x1448(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1450(0x08)
	struct UCommonTextBlock* Text_InteractionName; // 0x1458(0x08)
	bool bIsAccept; // 0x1460(0x01)
	char pad_1461[0x7]; // 0x1461(0x07)
	struct FText DisplayText; // 0x1468(0x18)

	void BP_OnHovered(); // Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialConfirmationButton(int32_t EntryPoint); // Function SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

