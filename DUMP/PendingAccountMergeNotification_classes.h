// WidgetBlueprintGeneratedClass PendingAccountMergeNotification.PendingAccountMergeNotification_C
// Size: 0x1460 (Inherited: 0x1430)
struct UPendingAccountMergeNotification_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Hover; // 0x1438(0x08)
	struct UBorder* ; // 0x1440(0x08)
	struct UCommonActionWidget* ; // 0x1448(0x08)
	struct UTextBlock* ; // 0x1450(0x08)
	struct UTextBlock* ; // 0x1458(0x08)

	void Construct(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Hovered(bool IsHovered); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnInputChanged(enum class ECommonInputType bNewInputType); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.OnInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PendingAccountMergeNotification(int32_t EntryPoint); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.ExecuteUbergraph_PendingAccountMergeNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

