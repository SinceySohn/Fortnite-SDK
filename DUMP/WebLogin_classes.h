// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
// Size: 0x500 (Inherited: 0x4e8)
struct UWebLogin_C : UFortWebLoginWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UCircularThrobber* Throbber; // 0x4f0(0x08)
	struct UBorder* WebContent; // 0x4f8(0x08)

	void DisplayWidget(struct UWidget* WebWidget); // Function WebLogin.WebLogin_C.DisplayWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void DismissWidget(); // Function WebLogin.WebLogin_C.DismissWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WebLogin(int32_t EntryPoint); // Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin // (Final|UbergraphFunction) // @ game+0xdef49c
};

