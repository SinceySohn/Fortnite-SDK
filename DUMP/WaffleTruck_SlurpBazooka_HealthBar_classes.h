// WidgetBlueprintGeneratedClass WaffleTruck_SlurpBazooka_HealthBar.WaffleTruck_SlurpBazooka_HealthBar_C
// Size: 0x288 (Inherited: 0x268)
struct UWaffleTruck_SlurpBazooka_HealthBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UProgressBar* Health; // 0x270(0x08)
	struct UProgressBar* Shield; // 0x278(0x08)
	struct AActor* Target; // 0x280(0x08)

	void Construct(); // Function WaffleTruck_SlurpBazooka_HealthBar.WaffleTruck_SlurpBazooka_HealthBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void Destruct(); // Function WaffleTruck_SlurpBazooka_HealthBar.WaffleTruck_SlurpBazooka_HealthBar_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void SetHealth(double HealthPercent); // Function WaffleTruck_SlurpBazooka_HealthBar.WaffleTruck_SlurpBazooka_HealthBar_C.SetHealth // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WaffleTruck_SlurpBazooka_HealthBar(int32_t EntryPoint); // Function WaffleTruck_SlurpBazooka_HealthBar.WaffleTruck_SlurpBazooka_HealthBar_C.ExecuteUbergraph_WaffleTruck_SlurpBazooka_HealthBar // (Final|UbergraphFunction) // @ game+0xdef49c
};

