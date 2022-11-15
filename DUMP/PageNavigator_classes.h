// WidgetBlueprintGeneratedClass PageNavigator.PageNavigator_C
// Size: 0x4a8 (Inherited: 0x440)
struct UPageNavigator_C : UFortPageNavigator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* Intro; // 0x448(0x08)
	struct USafeZone* ; // 0x450(0x08)
	struct FLinearColor Color1; // 0x458(0x10)
	struct FLinearColor Color2; // 0x468(0x10)
	struct FLinearColor Color3; // 0x478(0x10)
	struct FLinearColor Color4; // 0x488(0x10)
	struct FLinearColor Color5; // 0x498(0x10)

	void Play intro(); // Function PageNavigator.PageNavigator_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPipButtonCreated(struct UFortTextButton* NewPipButton); // Function PageNavigator.PageNavigator_C.OnPipButtonCreated // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PreConstruct(bool IsDesignTime); // Function PageNavigator.PageNavigator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_PageNavigator(int32_t EntryPoint); // Function PageNavigator.PageNavigator_C.ExecuteUbergraph_PageNavigator // (Final|UbergraphFunction) // @ game+0xdef49c
};

