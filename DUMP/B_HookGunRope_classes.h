// BlueprintGeneratedClass B_HookGunRope.B_HookGunRope_C
// Size: 0x374 (Inherited: 0x310)
struct AB_HookGunRope_C : AFortHookGunRope {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	float Tight_NewTrack_0_FFAA67BE44D4D10C00414E828FA9423F; // 0x318(0x04)
	enum class ETimelineDirection Tight__Direction_FFAA67BE44D4D10C00414E828FA9423F; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	struct UTimelineComponent* Tight; // 0x320(0x08)
	float Reel_In_Tighten_22145CB34BE582F3E6C3B88B44E066FE; // 0x328(0x04)
	float Reel_In_Reel_Lerp_Controller_22145CB34BE582F3E6C3B88B44E066FE; // 0x32c(0x04)
	enum class ETimelineDirection Reel_In__Direction_22145CB34BE582F3E6C3B88B44E066FE; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct UTimelineComponent* Reel In; // 0x338(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x340(0x08)
	struct USoundBase* ReelSound; // 0x348(0x08)
	struct USoundBase* ReattachSound; // 0x350(0x08)
	struct FActiveGameplayEffectHandle RopeGE; // 0x358(0x08)
	struct FGameplayTag RopeActiveTag; // 0x360(0x04)
	struct FGameplayTag BlockIncomingPickups; // 0x364(0x04)
	double MaxWiggleAmount; // 0x368(0x08)
	struct FGameplayTag Event_Reattach; // 0x370(0x04)

	void Reel In__FinishedFunc(); // Function B_HookGunRope.B_HookGunRope_C.Reel In__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Reel In__UpdateFunc(); // Function B_HookGunRope.B_HookGunRope_C.Reel In__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void Tight__FinishedFunc(); // Function B_HookGunRope.B_HookGunRope_C.Tight__FinishedFunc // (BlueprintEvent) // @ game+0xdef49c
	void Tight__UpdateFunc(); // Function B_HookGunRope.B_HookGunRope_C.Tight__UpdateFunc // (BlueprintEvent) // @ game+0xdef49c
	void End Reel(); // Function B_HookGunRope.B_HookGunRope_C.End Reel // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void TightenRope(); // Function B_HookGunRope.B_HookGunRope_C.TightenRope // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function B_HookGunRope.B_HookGunRope_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void ReceiveDestroyed(); // Function B_HookGunRope.B_HookGunRope_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void PlayReattachAudio(); // Function B_HookGunRope.B_HookGunRope_C.PlayReattachAudio // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnPlayerPawnPreInvalidateAbilitySystemComponent(); // Function B_HookGunRope.B_HookGunRope_C.OnPlayerPawnPreInvalidateAbilitySystemComponent // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_B_HookGunRope(int32_t EntryPoint); // Function B_HookGunRope.B_HookGunRope_C.ExecuteUbergraph_B_HookGunRope // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

