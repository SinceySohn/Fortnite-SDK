// BlueprintGeneratedClass RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct URealitySeedFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetPlayableBounds(struct UObject* __WorldContext, struct FVector& PlayableBoundsOrigin, struct FVector& PlayableBoundsExtent); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.GetPlayableBounds // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Is Point in Playable Bounds(struct FVector Point, struct FVector CachedPlayable BoundsOrigin, struct FVector CachedPlayable BoundsExtent, struct UObject* __WorldContext, bool& RetVal, struct FVector& PlayableBoundsOrigin, struct FVector& PlayableBoundsExtent); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.Is Point in Playable Bounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void GetNearbySaplings(struct FVector Location, struct UObject* __WorldContext, bool& SaplingsNearby?); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.GetNearbySaplings // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void IsValidSurface(struct AActor* HitActor, struct UObject* __WorldContext, bool& validSurface); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.IsValidSurface // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void GetRealitySaplingControllerComponent(struct AActor* PlayerTarget, struct UObject* __WorldContext, struct UFortControllerComponent_RealitySapling*& RealitySaplingController); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.GetRealitySaplingControllerComponent // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void DoesPlayerHaveSapling(struct AActor* TargetActor, struct UObject* __WorldContext, bool& HasSapling); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.DoesPlayerHaveSapling // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void SaplingBouncePlayerOnHit(struct AFortPlayerPawn* HitPlayerPawn, struct AActor* Tent, struct FGameplayTag Bounce GC, struct FVector Hit Location, struct FVector Hit Normal, struct TArray<struct AFortPlayerPawn*>& Recently Launched, struct UObject* __WorldContext, struct AFortPlayerPawn*& Launched Pawn); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.SaplingBouncePlayerOnHit // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	struct FRotator RotatorFacingTargetAlongNormal(struct FVector& Start, struct FVector& Target, struct FVector RotationAxis, double Xdirection, struct UObject* __WorldContext); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.RotatorFacingTargetAlongNormal // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void Surface Supports Sapling Deployment?(struct FHitResult& Hit, double MinDistanceFromObstacles, struct FRotator ProjRotation, bool CheckSpecificSurfaces, struct UObject* __WorldContext, int32_t& ValidLocationOutcome); // Function RealitySeedFunctionLibrary.RealitySeedFunctionLibrary_C.Surface Supports Sapling Deployment? // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};
