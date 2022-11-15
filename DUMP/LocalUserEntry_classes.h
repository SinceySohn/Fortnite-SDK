// WidgetBlueprintGeneratedClass LocalUserEntry.LocalUserEntry_C
// Size: 0x14f8 (Inherited: 0x1490)
struct ULocalUserEntry_C : UFortSocialEventRSVPLocalUserEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Hovered; // 0x1498(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x14a0(0x08)
	struct UFortMobileImage* FortMobileImage_enforzer; // 0x14a8(0x08)
	struct UImage* Image_MicIcon; // 0x14b0(0x08)
	struct UBorder* LocalUserEntryBorder; // 0x14b8(0x08)
	struct UFortMobileImage* SettingsIcon; // 0x14c0(0x08)
	struct FLinearColor Online; // 0x14c8(0x10)
	struct FLinearColor Offline; // 0x14d8(0x10)
	struct FLinearColor Away; // 0x14e8(0x10)

	void HandleOnlineIndicatorView(enum class ELocalUserOnlineStatus InLocalUserOnlineStatus); // Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void BP_OnHovered(); // Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void BP_OnUnhovered(); // Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus); // Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_LocalUserEntry(int32_t EntryPoint); // Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry // (Final|UbergraphFunction) // @ game+0xdef49c
};

