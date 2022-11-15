// WidgetBlueprintGeneratedClass LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C
// Size: 0x1468 (Inherited: 0x1440)
struct ULockerBuiltInEmoteWidget_C : UFortLockerBuiltInEmoteWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x1448(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x1450(0x08)
	struct UImage* LockedFill; // 0x1458(0x08)
	struct UOverlay* LockedOvr; // 0x1460(0x08)

	void OnUpdateAccessRestrictionWarning(bool bShouldShow, enum class EAthenaLockerInfoRestrictionWarning WarningType); // Function LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C.OnUpdateAccessRestrictionWarning // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LockerBuiltInEmoteWidget(int32_t EntryPoint); // Function LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C.ExecuteUbergraph_LockerBuiltInEmoteWidget // (Final|UbergraphFunction) // @ game+0xdef49c
};

