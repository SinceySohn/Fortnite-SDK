// Class FieldSystemEngine.FieldSystemActor
// Size: 0x290 (Inherited: 0x288)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x288(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x600 (Inherited: 0x530)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x530(0x08)
	bool bIsWorldField; // 0x538(0x01)
	bool bIsChaosField; // 0x539(0x01)
	char pad_53A[0x6]; // 0x53a(0x06)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x540(0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x550(0x30)
	struct FFieldObjectCommands BufferCommands; // 0x580(0x30)
	char pad_5B0[0x50]; // 0x5b0(0x50)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x90afc24
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields // (Final|Native|Public|BlueprintCallable) // @ game+0x90afc10
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x90afa54
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x90af8b8
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x90af798
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x90af638
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x90af518
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x90af3c8
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x90af2a8
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField // (Final|Native|Public|BlueprintCallable) // @ game+0x90af158
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x90af008
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xa0 (Inherited: 0xa0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xa8 (Inherited: 0xa0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b00fc
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xa8 (Inherited: 0xa0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b0188
};

// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xa8 (Inherited: 0xa0)
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	enum class EFieldFilterType FilterType; // 0xa0(0x01)
	enum class EFieldObjectType ObjectType; // 0xa1(0x01)
	enum class EFieldPositionType PositionType; // 0xa2(0x01)
	char pad_A3[0x5]; // 0xa3(0x05)

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90afff8
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xa0 (Inherited: 0xa0)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xa0 (Inherited: 0xa0)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xa0 (Inherited: 0xa0)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xa0 (Inherited: 0xa0)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xa8 (Inherited: 0xa0)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b00fc
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xd0 (Inherited: 0xa0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FVector Position; // 0xa8(0x18)
	int32_t InteriorValue; // 0xc0(0x04)
	int32_t ExteriorValue; // 0xc4(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90b09cc
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xa8 (Inherited: 0xa0)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b0c58
};

// Class FieldSystemEngine.WaveScalar
// Size: 0xd0 (Inherited: 0xa0)
struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FVector Position; // 0xa8(0x18)
	float WaveLength; // 0xc0(0x04)
	float Period; // 0xc4(0x04)
	enum class EWaveFunctionType Function; // 0xc8(0x01)
	enum class EFieldFalloffType Falloff; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector Position, float WaveLength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90b0d94
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xd8 (Inherited: 0xa0)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xa0(0x04)
	float MinRange; // 0xa4(0x04)
	float MaxRange; // 0xa8(0x04)
	float Default; // 0xac(0x04)
	float Radius; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FVector Position; // 0xb8(0x18)
	enum class EFieldFalloffType Falloff; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90b0798
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xf0 (Inherited: 0xa0)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xa0(0x04)
	float MinRange; // 0xa4(0x04)
	float MaxRange; // 0xa8(0x04)
	float Default; // 0xac(0x04)
	float Distance; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FVector Position; // 0xb8(0x18)
	struct FVector Normal; // 0xd0(0x18)
	enum class EFieldFalloffType Falloff; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90b0514
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x120 (Inherited: 0xa0)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xa0(0x04)
	float MinRange; // 0xa4(0x04)
	float MaxRange; // 0xa8(0x04)
	float Default; // 0xac(0x04)
	struct FTransform Transform; // 0xb0(0x60)
	enum class EFieldFalloffType Falloff; // 0x110(0x01)
	char pad_111[0xf]; // 0x111(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90afc70
};

// Class FieldSystemEngine.NoiseField
// Size: 0x110 (Inherited: 0xa0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xa0(0x04)
	float MaxRange; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FTransform Transform; // 0xb0(0x60)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90b0218
};

// Class FieldSystemEngine.UniformVector
// Size: 0xc0 (Inherited: 0xa0)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FVector Direction; // 0xa8(0x18)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90b0b6c
};

// Class FieldSystemEngine.RadialVector
// Size: 0xc0 (Inherited: 0xa0)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FVector Position; // 0xa8(0x18)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90b0b6c
};

// Class FieldSystemEngine.RandomVector
// Size: 0xa8 (Inherited: 0xa0)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b0c58
};

// Class FieldSystemEngine.OperatorField
// Size: 0xc0 (Inherited: 0xa0)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UFieldNodeBase* RightField; // 0xa8(0x08)
	struct UFieldNodeBase* LeftField; // 0xb0(0x08)
	enum class EFieldOperationType Operation; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b03c0
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xa8 (Inherited: 0xa0)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xa0(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b0d04
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xa8 (Inherited: 0xa0)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xa0(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b0d04
};

// Class FieldSystemEngine.CullingField
// Size: 0xb8 (Inherited: 0xa0)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xa0(0x08)
	struct UFieldNodeBase* Field; // 0xa8(0x08)
	enum class EFieldCullingOperationType Operation; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90afef0
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xa0 (Inherited: 0xa0)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x90b0cf0
};

