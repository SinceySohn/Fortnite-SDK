// WidgetBlueprintGeneratedClass BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C
// Size: 0x1418 (Inherited: 0x13e0)
struct UBPS22_AboutModal_Pip_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13e0(0x08)
	struct UWidgetAnimation* Hover; // 0x13e8(0x08)
	struct UWidgetAnimation* Select; // 0x13f0(0x08)
	struct UImage* PIP; // 0x13f8(0x08)
	bool IsFocused; // 0x1400(0x01)
	char pad_1401[0x7]; // 0x1401(0x07)
	struct FMulticastInlineDelegate ClickedOnPip; // 0x1408(0x10)

	void Is Focused(bool Is Focused); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.Is Focused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnClicked(); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BPS22_AboutModal_Pip(int32_t EntryPoint); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.ExecuteUbergraph_BPS22_AboutModal_Pip // (Final|UbergraphFunction) // @ game+0xdef49c
	void ClickedOnPip__DelegateSignature(); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.ClickedOnPip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

