// WidgetBlueprintGeneratedClass ItemReceivedAccountWidget.ItemReceivedAccountWidget_C
// Size: 0x2d8 (Inherited: 0x2c8)
struct UItemReceivedAccountWidget_C : UFortAccountWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UCommonTextBlock* CommonTextBlock_UserMessage; // 0x2d0(0x08)

	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result); // Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.OnAccountInfoChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_ItemReceivedAccountWidget(int32_t EntryPoint); // Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.ExecuteUbergraph_ItemReceivedAccountWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

