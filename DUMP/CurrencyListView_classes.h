// WidgetBlueprintGeneratedClass CurrencyListView.CurrencyListView_C
// Size: 0x278 (Inherited: 0x268)
struct UCurrencyListView_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCommonListView* DataListView; // 0x270(0x08)

	void AddDataToList(struct FCurrencyData CurrencyData); // Function CurrencyListView.CurrencyListView_C.AddDataToList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void RunClearListView(); // Function CurrencyListView.CurrencyListView_C.RunClearListView // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_CurrencyListView(int32_t EntryPoint); // Function CurrencyListView.CurrencyListView_C.ExecuteUbergraph_CurrencyListView // (Final|UbergraphFunction) // @ game+0xdef49c
};

