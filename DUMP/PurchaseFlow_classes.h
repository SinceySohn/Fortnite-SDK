// Class PurchaseFlow.PurchaseFlowJSBridge
// Size: 0x38 (Inherited: 0x28)
struct UPurchaseFlowJSBridge : UObject {
	char pad_28[0x10]; // 0x28(0x10)

	void RequestClose(struct FString CloseInfo); // Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose // (Final|Native|Public) // @ game+0x7046290
	void Receipt(struct FPurchaseFlowReceiptParam Receipt); // Function PurchaseFlow.PurchaseFlowJSBridge.Receipt // (Final|Native|Public) // @ game+0x7046190
	bool LaunchValidatedExternalBrowserUrl(struct FString AllowedBrowserID, struct FString URL); // Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl // (Final|Native|Public) // @ game+0x7045f0c
	bool LaunchExternalBrowserUrl(struct FString URL); // Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl // (Final|Native|Public) // @ game+0x7045d98
	struct FString GetExternalBrowserPath(struct FString BrowserId); // Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath // (Final|Native|Public) // @ game+0x7045b3c
	struct FString GetExternalBrowserName(struct FString BrowserId); // Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName // (Final|Native|Public) // @ game+0x70459c4
	struct FString GetDefaultExternalBrowserID(struct FString URL); // Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID // (Final|Native|Public) // @ game+0x704584c
};

