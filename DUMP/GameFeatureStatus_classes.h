// WidgetBlueprintGeneratedClass GameFeatureStatus.GameFeatureStatus_C
// Size: 0x3b0 (Inherited: 0x350)
struct UGameFeatureStatus_C : UAthenaGameFeatureStatus {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* Downloading_Error; // 0x358(0x08)
	struct UWidgetAnimation* Downloading; // 0x360(0x08)
	struct UImage* Image_ErrorIcon; // 0x368(0x08)
	struct UImage* Image_Pause; // 0x370(0x08)
	struct UWidgetSwitcher* Switcher_ProgressOrError; // 0x378(0x08)
	struct FLinearColor Progress; // 0x380(0x10)
	struct FLinearColor Error; // 0x390(0x10)
	struct FLinearColor Paused; // 0x3a0(0x10)

	void HandleStatusChanged(enum class EAthenaGameFeatureStatus CurrentStatus); // Function GameFeatureStatus.GameFeatureStatus_C.HandleStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnStatusChanged(enum class EAthenaGameFeatureStatus NewStatus); // Function GameFeatureStatus.GameFeatureStatus_C.OnStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_GameFeatureStatus(int32_t EntryPoint); // Function GameFeatureStatus.GameFeatureStatus_C.ExecuteUbergraph_GameFeatureStatus // (Final|UbergraphFunction) // @ game+0xdef49c
};

