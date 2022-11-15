// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C
// Size: 0xd98 (Inherited: 0xc70)
struct ABP_Athena_Environmental_ZipLine_Spline_C : AFortAthenaSplineZipline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct USphereComponent* EndPointInteractSphere; // 0xc78(0x08)
	struct USphereComponent* StartPointInteractSphere; // 0xc80(0x08)
	struct UStaticMesh* SplineStaticMesh; // 0xc88(0x08)
	double TangentSmoothStrength; // 0xc90(0x08)
	bool AutoSmoothTangents; // 0xc98(0x01)
	enum class ESplineMeshAxis ForwardMeshAxis; // 0xc99(0x01)
	char pad_C9A[0x6]; // 0xc9a(0x06)
	struct FVector MotorOffset; // 0xca0(0x18)
	struct ABuildingActor* PoleA; // 0xcb8(0x08)
	struct ABuildingActor* PoleB; // 0xcc0(0x08)
	struct FVector PoleASocketLocation; // 0xcc8(0x18)
	struct FVector PoleBSocketLocation; // 0xce0(0x18)
	int32_t LowerPointID; // 0xcf8(0x04)
	int32_t HigherPointID; // 0xcfc(0x04)
	struct FVector HigherEndLocation; // 0xd00(0x18)
	struct FVector LowerEndLocation; // 0xd18(0x18)
	double AutoLinearFactorLow; // 0xd30(0x08)
	double AutoLinearFactorHigh; // 0xd38(0x08)
	double AutoSplineTangentLengthCoef; // 0xd40(0x08)
	double AutoSplineTangentHorizCoef; // 0xd48(0x08)
	double AutoSplineTangentVertCoef; // 0xd50(0x08)
	bool Auto Set Spline Ends; // 0xd58(0x01)
	bool Auto Set Spline Mids; // 0xd59(0x01)
	char pad_D5A[0x6]; // 0xd5a(0x06)
	struct TArray<struct UMaterialInstanceDynamic*> SplineMaterials; // 0xd60(0x10)
	struct FGameplayTagContainer BlockInteractTags; // 0xd70(0x20)
	double TilingDivisor; // 0xd90(0x08)

	void SetInteractionCollision(); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetInteractionCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetCableTilingBySplineLength(struct UMeshComponent* Target); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetCableTilingBySplineLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	void GetAutoHorizAndVertVectors(struct FVector highVector, struct FVector LowVector, struct FVector& VertVec, struct FVector& HorizVec); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.GetAutoHorizAndVertVectors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void Calc Auto Location At Alpha(double InAlpha, bool DrawDebug, struct FVector& PointLocation); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.Calc Auto Location At Alpha // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetSplinePositionAndTangent(bool SetPosition, bool SetTangent, int32_t ID); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetSplinePositionAndTangent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void CalculatePositionOfPoles(); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.CalculatePositionOfPoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void AutoSmoothTanget(struct FVector Tangent, struct FVector PointA, struct FVector PointB, struct FVector& SmoothedTangent); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.AutoSmoothTanget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xdef49c
	void AddSplineMeshSegment(struct USplineMeshComponent*& SplineMeshSegment); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.AddSplineMeshSegment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void UserConstructionScript(); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void PlayerAttachedToZipline(struct AFortPlayerPawn* PlayerPawn); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.PlayerAttachedToZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void PlayerDetachedFromZipline(struct AFortPlayerPawn* PlayerPawn); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.PlayerDetachedFromZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void HandlePoleDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.HandlePoleDied // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline(int32_t EntryPoint); // Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline // (Final|UbergraphFunction) // @ game+0xdef49c
};

