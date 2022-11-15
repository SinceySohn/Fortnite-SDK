// WidgetBlueprintGeneratedClass AthenaBoundActionButton.AthenaBoundActionButton_C
// Size: 0x1438 (Inherited: 0x1420)
struct UAthenaBoundActionButton_C : UFortBoundActionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1420(0x08)
	struct UBorder* ContentBorder; // 0x1428(0x08)
	struct UScaleBox* InputActionIconScale; // 0x1430(0x08)

	void UpdateInputActionIconSize(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.UpdateInputActionIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnUpdateInputAction(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_AthenaBoundActionButton(int32_t EntryPoint); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.ExecuteUbergraph_AthenaBoundActionButton // (Final|UbergraphFunction) // @ game+0xdef49c
};

