// WidgetBlueprintGeneratedClass WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C
// Size: 0x420 (Inherited: 0x3c8)
struct UWBP_RebootRallyPopupModal_C : URebootRallyQRModalWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWBP_RebootRallyPopupModal_Background_C* WBP_RebootRallyPopupModal_Background; // 0x3d0(0x08)
	struct UWBP_RebootRallyPopupModal_DetailsText_C* WBP_RebootRallyPopupModal_DetailsText; // 0x3d8(0x08)
	struct UWBP_RebootRallyPopupModal_HeaderText_C* WBP_RebootRallyPopupModal_HeaderText; // 0x3e0(0x08)
	struct UWBP_RebootRallyPopupModal_Image_C* WBP_RebootRallyPopupModal_Image; // 0x3e8(0x08)
	struct FText DetailsTextNewPlayer; // 0x3f0(0x18)
	struct FText DetailsTextOldPlayer; // 0x408(0x18)

	void OnFailure_2294CC75494E892C35E2E99DCC0B7385(); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.OnFailure_2294CC75494E892C35E2E99DCC0B7385 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnIgnored_2294CC75494E892C35E2E99DCC0B7385(); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.OnIgnored_2294CC75494E892C35E2E99DCC0B7385 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSuccess_2294CC75494E892C35E2E99DCC0B7385(); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.OnSuccess_2294CC75494E892C35E2E99DCC0B7385 // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Construct(); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnSetIsInvite(bool bIsInvited); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.OnSetIsInvite // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_WBP_RebootRallyPopupModal(int32_t EntryPoint); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.ExecuteUbergraph_WBP_RebootRallyPopupModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

