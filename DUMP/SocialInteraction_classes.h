// WidgetBlueprintGeneratedClass SocialInteraction.SocialInteraction_C
// Size: 0x1538 (Inherited: 0x14e0)
struct USocialInteraction_C : USocialInteractionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14e0(0x08)
	struct UWidgetAnimation* OnHover; // 0x14e8(0x08)
	struct UImage* EncourageEpicFriend; // 0x14f0(0x08)
	struct UImage* InteractionIcon; // 0x14f8(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1500(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1508(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1518(0x10)
	struct FLinearColor AddFriendColor; // 0x1528(0x10)

	void BP_OnUnhovered(); // Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnInteractionSet(); // Function SocialInteraction.SocialInteraction_C.OnInteractionSet // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function SocialInteraction.SocialInteraction_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function SocialInteraction.SocialInteraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SocialInteraction(int32_t EntryPoint); // Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction // (Final|UbergraphFunction) // @ game+0xdef49c
};

