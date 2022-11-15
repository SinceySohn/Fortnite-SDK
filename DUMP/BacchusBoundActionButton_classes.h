// WidgetBlueprintGeneratedClass BacchusBoundActionButton.BacchusBoundActionButton_C
// Size: 0x1460 (Inherited: 0x1440)
struct UBacchusBoundActionButton_C : UBacchusBoundActionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UBorder* ContentBorder; // 0x1448(0x08)
	struct UFortMobileImage* FortMobileImageInputAction; // 0x1450(0x08)
	struct UScaleBox* InputActionIconScale; // 0x1458(0x08)

	void UpdateInputActionIconSize(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.UpdateInputActionIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateInputAction(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BacchusBoundActionButton(int32_t EntryPoint); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.ExecuteUbergraph_BacchusBoundActionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

