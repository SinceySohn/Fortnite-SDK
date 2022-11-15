// WidgetBlueprintGeneratedClass RejoinWindow.RejoinWindow_C
// Size: 0x590 (Inherited: 0x558)
struct URejoinWindow_C : UFortRejoinWindowBase {
	struct UCommonTextBlock* AutorejoinText; // 0x558(0x08)
	struct UHorizontalBox* ButtonBox; // 0x560(0x08)
	struct UCommonTextBlock* Title; // 0x568(0x08)
	struct FMulticastInlineDelegate OnRequestAbandon; // 0x570(0x10)
	struct FMulticastInlineDelegate OnRequestRejoinRetry; // 0x580(0x10)

	void OnRequestRejoinRetry__DelegateSignature(); // Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRequestAbandon__DelegateSignature(); // Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

