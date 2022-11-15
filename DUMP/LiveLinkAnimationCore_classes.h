// Class LiveLinkAnimationCore.LiveLinkRetargetAsset
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkRetargetAsset : UObject {
};

// Class LiveLinkAnimationCore.LiveLinkInstance
// Size: 0x350 (Inherited: 0x350)
struct ULiveLinkInstance : UAnimInstance {
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x348(0x08)

	void SetSubject(struct FLiveLinkSubjectName SubjectName); // Function LiveLinkAnimationCore.LiveLinkInstance.SetSubject // (Final|Native|Public|BlueprintCallable) // @ game+0xa2b3374
	void SetRetargetAsset(struct ULiveLinkRetargetAsset* RetargetAsset); // Function LiveLinkAnimationCore.LiveLinkInstance.SetRetargetAsset // (Final|Native|Public|BlueprintCallable) // @ game+0xa2b32a0
};

// Class LiveLinkAnimationCore.LiveLinkRemapAsset
// Size: 0xc8 (Inherited: 0x28)
struct ULiveLinkRemapAsset : ULiveLinkRetargetAsset {
	char pad_28[0xa0]; // 0x28(0xa0)

	void RemapCurveElements(struct TMap<struct FName, float>& CurveItems); // Function LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xa2b31b8
	struct FName GetRemappedCurveName(struct FName CurveName); // Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName // (Native|Event|Public|BlueprintEvent|Const) // @ game+0xa2b312c
	struct FName GetRemappedBoneName(struct FName BoneName); // Function LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName // (Native|Event|Public|BlueprintEvent|Const) // @ game+0xa2b30a0
};

