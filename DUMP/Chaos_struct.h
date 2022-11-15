// Enum Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8 {
	Field_Set_Always = 0,
	Field_Set_IFF_NOT_Interior = 1,
	Field_Set_IFF_NOT_Exterior = 2,
	Field_MaskCondition_Max = 3,
	Field_MAX = 4
};

// Enum Chaos.EWaveFunctionType
enum class EWaveFunctionType : uint8 {
	Field_Wave_Cosine = 0,
	Field_Wave_Gaussian = 1,
	Field_Wave_Falloff = 2,
	Field_Wave_Decay = 3,
	Field_Wave_Max = 4
};

// Enum Chaos.EFieldOperationType
enum class EFieldOperationType : uint8 {
	Field_Multiply = 0,
	Field_Divide = 1,
	Field_Add = 2,
	Field_Substract = 3,
	Field_Operation_Max = 4
};

// Enum Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8 {
	Field_Culling_Inside = 0,
	Field_Culling_Outside = 1,
	Field_Culling_Operation_Max = 2,
	Field_Culling_MAX = 3
};

// Enum Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8 {
	Field_Resolution_Minimal = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum = 2,
	Field_Resolution_Max = 3
};

// Enum Chaos.EFieldFilterType
enum class EFieldFilterType : uint8 {
	Field_Filter_Dynamic = 0,
	Field_Filter_Kinematic = 1,
	Field_Filter_Static = 2,
	Field_Filter_All = 3,
	Field_Filter_Sleeping = 4,
	Field_Filter_Disabled = 5,
	Field_Filter_Max = 6
};

// Enum Chaos.EFieldObjectType
enum class EFieldObjectType : uint8 {
	Field_Object_Rigid = 0,
	Field_Object_Cloth = 1,
	Field_Object_Destruction = 2,
	Field_Object_Character = 3,
	Field_Object_All = 4,
	Field_Object_Max = 5
};

// Enum Chaos.EFieldPositionType
enum class EFieldPositionType : uint8 {
	Field_Position_CenterOfMass = 0,
	Field_Position_PivotPoint = 1,
	Field_Position_Max = 2
};

// Enum Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8 {
	Field_FallOff_None = 0,
	Field_Falloff_Linear = 1,
	Field_Falloff_Inverse = 2,
	Field_Falloff_Squared = 3,
	Field_Falloff_Logarithmic = 4,
	Field_Falloff_Max = 5
};

// Enum Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8 {
	Field_None = 0,
	Field_DynamicState = 1,
	Field_LinearForce = 2,
	Field_ExternalClusterStrain = 3,
	Field_Kill = 4,
	Field_LinearVelocity = 5,
	Field_AngularVelociy = 6,
	Field_AngularTorque = 7,
	Field_InternalClusterStrain = 8,
	Field_DisableThreshold = 9,
	Field_SleepingThreshold = 10,
	Field_PositionStatic = 11,
	Field_PositionAnimated = 12,
	Field_PositionTarget = 13,
	Field_DynamicConstraint = 14,
	Field_CollisionGroup = 15,
	Field_ActivateDisabled = 16,
	Field_InitialLinearVelocity = 17,
	Field_InitialAngularVelocity = 18,
	Field_LinearImpulse = 19,
	Field_PhysicsType_Max = 20
};

// Enum Chaos.EFieldVectorType
enum class EFieldVectorType : uint8 {
	Vector_LinearForce = 0,
	Vector_LinearVelocity = 1,
	Vector_AngularVelocity = 2,
	Vector_AngularTorque = 3,
	Vector_PositionTarget = 4,
	Vector_InitialLinearVelocity = 5,
	Vector_InitialAngularVelocity = 6,
	Vector_LinearImpulse = 7,
	Vector_TargetMax = 8,
	Vector_MAX = 9
};

// Enum Chaos.EFieldScalarType
enum class EFieldScalarType : uint8 {
	Scalar_ExternalClusterStrain = 0,
	Scalar_Kill = 1,
	Scalar_DisableThreshold = 2,
	Scalar_SleepingThreshold = 3,
	Scalar_InternalClusterStrain = 4,
	Scalar_DynamicConstraint = 5,
	Scalar_TargetMax = 6,
	Scalar_MAX = 7
};

// Enum Chaos.EFieldIntegerType
enum class EFieldIntegerType : uint8 {
	Integer_DynamicState = 0,
	Integer_ActivateDisabled = 1,
	Integer_CollisionGroup = 2,
	Integer_PositionAnimated = 3,
	Integer_PositionStatic = 4,
	Integer_TargetMax = 5,
	Integer_MAX = 6
};

// Enum Chaos.EFieldOutputType
enum class EFieldOutputType : uint8 {
	Field_Output_Vector = 0,
	Field_Output_Scalar = 1,
	Field_Output_Integer = 2,
	Field_Output_Max = 3
};

// Enum Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8 {
	Field_RadialIntMask = 0,
	Field_RadialFalloff = 1,
	Field_UniformVector = 2,
	Field_RadialVector = 3,
	Field_RadialVectorFalloff = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5
};

// Enum Chaos.EConvexOverlapRemoval
enum class EConvexOverlapRemoval : uint8 {
	None = 0,
	All = 1,
	OnlyClusters = 2,
	OnlyClustersVsClusters = 3,
	EConvexOverlapRemoval_MAX = 4
};

// Enum Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8 {
	Chaos_Volumetric = 0,
	Chaos_Surface_Volumetric = 1,
	Chaos_Max = 2
};

// Enum Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8 {
	Chaos_Implicit_Box = 0,
	Chaos_Implicit_Sphere = 1,
	Chaos_Implicit_Capsule = 2,
	Chaos_Implicit_LevelSet = 3,
	Chaos_Implicit_None = 4,
	Chaos_Implicit_Convex = 5,
	Chaos_Max = 6
};

// Enum Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8 {
	Chaos_NONE = 0,
	Chaos_Object_Sleeping = 1,
	Chaos_Object_Kinematic = 2,
	Chaos_Object_Static = 3,
	Chaos_Object_Dynamic = 4,
	Chaos_Object_UserDefined = 100,
	Chaos_Max = 101
};

// Enum Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8 {
	Chaos_AngularVelocity = 0,
	Chaos_DynamicState = 1,
	Chaos_LinearVelocity = 2,
	Chaos_InitialAngularVelocity = 3,
	Chaos_InitialLinearVelocity = 4,
	Chaos_CollisionGroup = 5,
	Chaos_LinearForce = 6,
	Chaos_AngularTorque = 7,
	Chaos_DisableThreshold = 8,
	Chaos_SleepingThreshold = 9,
	Chaos_ExternalClusterStrain = 10,
	Chaos_InternalClusterStrain = 11,
	Chaos_LinearImpulse = 12,
	Chaos_Max = 13
};

// Enum Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8 {
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None = 1,
	Chaos_Max = 2
};

// Enum Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8 {
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max = 2
};

// Enum Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8 {
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4
};

// Enum Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8 {
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5
};

// Enum Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8 {
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4
};

// Enum Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8 {
	PointImplicit = 0,
	DelaunayTriangulation = 1,
	MinimalSpanningSubsetDelaunayTriangulation = 2,
	PointImplicitAugmentedWithMinimalDelaunay = 3,
	BoundsOverlapFilteredDelaunayTriangulation = 4,
	None = 5,
	EClusterUnionMethod_MAX = 6
};

// Enum Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8 {
	None = 0,
	Record = 1,
	Play = 2,
	RecordAndPlay = 3,
	EGeometryCollectionCacheType_MAX = 4
};

// ScriptStruct Chaos.ChaosSolverConfiguration
// Size: 0x68 (Inherited: 0x00)
struct FChaosSolverConfiguration {
	int32_t PositionIterations; // 0x00(0x04)
	int32_t VelocityIterations; // 0x04(0x04)
	int32_t ProjectionIterations; // 0x08(0x04)
	float CollisionMarginFraction; // 0x0c(0x04)
	float CollisionMarginMax; // 0x10(0x04)
	float CollisionCullDistance; // 0x14(0x04)
	float CollisionMaxPushOutVelocity; // 0x18(0x04)
	float ClusterConnectionFactor; // 0x1c(0x04)
	enum class EClusterUnionMethod ClusterUnionConnectionType; // 0x20(0x01)
	bool bGenerateCollisionData; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x24(0x10)
	bool bGenerateBreakData; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x38(0x10)
	bool bGenerateTrailingData; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x4c(0x10)
	bool bGenerateContactGraph; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t Iterations; // 0x60(0x04)
	int32_t PushOutIterations; // 0x64(0x04)
};

// ScriptStruct Chaos.SolverTrailingFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinVolume; // 0x0c(0x04)
};

// ScriptStruct Chaos.SolverBreakingFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinVolume; // 0x0c(0x04)
};

// ScriptStruct Chaos.SolverCollisionFilterSettings
// Size: 0x10 (Inherited: 0x00)
struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinImpulse; // 0x0c(0x04)
};

// ScriptStruct Chaos.SolverCollisionData
// Size: 0xc0 (Inherited: 0x00)
struct FSolverCollisionData {
	struct FVector Location; // 0x00(0x18)
	struct FVector AccumulatedImpulse; // 0x18(0x18)
	struct FVector Normal; // 0x30(0x18)
	struct FVector Velocity1; // 0x48(0x18)
	struct FVector Velocity2; // 0x60(0x18)
	struct FVector AngularVelocity1; // 0x78(0x18)
	struct FVector AngularVelocity2; // 0x90(0x18)
	float Mass1; // 0xa8(0x04)
	float Mass2; // 0xac(0x04)
	int32_t ParticleIndex; // 0xb0(0x04)
	int32_t LevelsetIndex; // 0xb4(0x04)
	int32_t ParticleIndexMesh; // 0xb8(0x04)
	int32_t LevelsetIndexMesh; // 0xbc(0x04)
};

// ScriptStruct Chaos.SolverBreakingData
// Size: 0x58 (Inherited: 0x00)
struct FSolverBreakingData {
	struct FVector Location; // 0x00(0x18)
	struct FVector Velocity; // 0x18(0x18)
	struct FVector AngularVelocity; // 0x30(0x18)
	float Mass; // 0x48(0x04)
	int32_t ParticleIndex; // 0x4c(0x04)
	int32_t ParticleIndexMesh; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Chaos.SolverTrailingData
// Size: 0x58 (Inherited: 0x00)
struct FSolverTrailingData {
	struct FVector Location; // 0x00(0x18)
	struct FVector Velocity; // 0x18(0x18)
	struct FVector AngularVelocity; // 0x30(0x18)
	float Mass; // 0x48(0x04)
	int32_t ParticleIndex; // 0x4c(0x04)
	int32_t ParticleIndexMesh; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Chaos.RecordedFrame
// Size: 0xb8 (Inherited: 0x00)
struct FRecordedFrame {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<int32_t> TransformIndices; // 0x10(0x10)
	struct TArray<int32_t> PreviousTransformIndices; // 0x20(0x10)
	struct TArray<bool> DisabledFlags; // 0x30(0x10)
	struct TArray<struct FSolverCollisionData> CollisionS; // 0x40(0x10)
	struct TArray<struct FSolverBreakingData> Breakings; // 0x50(0x10)
	struct TSet<struct FSolverTrailingData> Trailings; // 0x60(0x50)
	float Timestamp; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Chaos.RecordedTransformTrack
// Size: 0x10 (Inherited: 0x00)
struct FRecordedTransformTrack {
	struct TArray<struct FRecordedFrame> Records; // 0x00(0x10)
};

// ScriptStruct Chaos.SolverRemovalFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FSolverRemovalFilterSettings {
	bool FilterEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinMass; // 0x04(0x04)
	float MinVolume; // 0x08(0x04)
};

