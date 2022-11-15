// WidgetBlueprintGeneratedClass SidebarProfileLoading.SidebarProfileLoading_C
// Size: 0x2a0 (Inherited: 0x290)
struct USidebarProfileLoading_C : UFortSocialProfileSubPanel_Loading {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UImage* ProgressSpinner; // 0x298(0x08)

	void OnLoadingStarted(); // Function SidebarProfileLoading.SidebarProfileLoading_C.OnLoadingStarted // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnLoadingFinished(); // Function SidebarProfileLoading.SidebarProfileLoading_C.OnLoadingFinished // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_SidebarProfileLoading(int32_t EntryPoint); // Function SidebarProfileLoading.SidebarProfileLoading_C.ExecuteUbergraph_SidebarProfileLoading // (Final|UbergraphFunction) // @ game+0xdef49c
};

