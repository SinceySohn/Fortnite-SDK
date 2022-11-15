// WidgetBlueprintGeneratedClass FNEventsMetadataOverlay.FNEventsMetadataOverlay_C
// Size: 0x3f8 (Inherited: 0x3a8)
struct UFNEventsMetadataOverlay_C : UPictureInPictureMetadataOverlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* Liked_Ani_1to1; // 0x3b0(0x08)
	struct UWidgetAnimation* FadeInfo_Ani; // 0x3b8(0x08)
	struct UWidgetAnimation* Liked_Ani; // 0x3c0(0x08)
	struct UPictureInPictureClient* PictureInPictureClient; // 0x3c8(0x08)
	struct UPictureInPictureFNEventsController* FNEventsController; // 0x3d0(0x08)
	struct FMulticastInlineDelegate EventDispatcher_Skip; // 0x3d8(0x10)
	struct FMulticastInlineDelegate EventDispatcher_Prev; // 0x3e8(0x10)

	void Construct(); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xdef49c
	void OnPartnerUpdateComplete(); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.OnPartnerUpdateComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_FNEventsMetadataOverlay(int32_t EntryPoint); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.ExecuteUbergraph_FNEventsMetadataOverlay // (Final|UbergraphFunction) // @ game+0xdef49c
	void EventDispatcher_Prev__DelegateSignature(); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.EventDispatcher_Prev__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void EventDispatcher_Skip__DelegateSignature(); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.EventDispatcher_Skip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

