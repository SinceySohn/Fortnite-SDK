// Class Solaris.SolarisArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisArrayLibrary : UObject {

	void UnsafeCall(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.UnsafeCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cdecbc
	void RefCall(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cdeb58
	void Move(struct TArray<struct FGenericElementType>& Target, struct TArray<struct FGenericElementType>& Source); // Function Solaris.SolarisArrayLibrary.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cde9dc
	int64_t Length(struct TArray<struct FGenericElementType>& Array); // Function Solaris.SolarisArrayLibrary.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cde91c
	void Empty(struct TArray<struct FGenericElementType>& Array); // Function Solaris.SolarisArrayLibrary.Empty // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cde7d8
	struct TArray<struct FGenericElementType> ConcatEquals(struct TArray<struct FGenericElementType>& Lhs, struct TArray<struct FGenericElementType>& Rhs); // Function Solaris.SolarisArrayLibrary.ConcatEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cde68c
	struct TArray<struct FGenericElementType> Concat(struct TArray<struct FGenericElementType>& Lhs, struct TArray<struct FGenericElementType>& Rhs); // Function Solaris.SolarisArrayLibrary.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cde57c
	void Call(struct TArray<struct FGenericElementType>& Array, int64_t Index); // Function Solaris.SolarisArrayLibrary.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cde27c
	int64_t Add(struct TArray<struct FGenericElementType>& Array, struct FGenericElementType& new_item); // Function Solaris.SolarisArrayLibrary.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cde0d0
};

// Class Solaris.SolarisCoroutineLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisCoroutineLibrary : UObject {

	struct UObject* TaskMake(struct UObject* Type, struct UObject* Caller, int64_t CallerResumeState, int64_t CallerCancelState, struct UObject* OwnerInstance); // Function Solaris.SolarisCoroutineLibrary.TaskMake // (Final|Native|Static|Public) // @ game+0x5cdcd98
	int64_t TaskGetState(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskGetState // (Final|Native|Static|Public) // @ game+0x5cdcd14
	void TaskGetReturnProperty(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty // (Final|Native|Static|Public) // @ game+0x5cf6e64
	void TaskFree(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskFree // (Final|Native|Static|Public) // @ game+0x5cdcc9c
	void TaskCancel(struct UObject* Task); // Function Solaris.SolarisCoroutineLibrary.TaskCancel // (Final|Native|Static|Public) // @ game+0x5cdcc2c
};

// Class Solaris.SolarisDebugData
// Size: 0x38 (Inherited: 0x28)
struct USolarisDebugData : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Solaris.SolarisDigest
// Size: 0x50 (Inherited: 0x28)
struct USolarisDigest : UObject {
	struct TArray<char> DigestCode; // 0x28(0x10)
	struct FString ProjectName; // 0x38(0x10)
	enum class EVerseDigestVariant Variant; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Solaris.GameFeature_SolarisObserver
// Size: 0x40 (Inherited: 0x28)
struct UGameFeature_SolarisObserver : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Solaris.VerseStruct
// Size: 0xd0 (Inherited: 0xc0)
struct UVerseStruct : UScriptStruct {
	struct UFunction* InitFunction; // 0xc0(0x08)
	struct UObject* ModuleClass; // 0xc8(0x08)
};

// Class Solaris.SolarisMapLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisMapLibrary : UObject {

	void RefCall(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType Key); // Function Solaris.SolarisMapLibrary.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf63c8
	void Move(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Dest, struct TMap<struct FGenericKeyType, struct FGenericValueType>& Src); // Function Solaris.SolarisMapLibrary.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf586c
	int64_t Length(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map); // Function Solaris.SolarisMapLibrary.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf496c
	void InitMap(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map); // Function Solaris.SolarisMapLibrary.InitMap // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf4248
	struct FGenericValueType GetValueByIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t Index); // Function Solaris.SolarisMapLibrary.GetValueByIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf3b24
	int64_t GetNextValidIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t InitialIndex); // Function Solaris.SolarisMapLibrary.GetNextValidIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf3940
	struct FGenericKeyType GetKeyByIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t Index); // Function Solaris.SolarisMapLibrary.GetKeyByIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf37a0
	struct TMap<struct FGenericKeyType, struct FGenericValueType> Concat(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Lhs, struct TMap<struct FGenericKeyType, struct FGenericValueType>& Rhs); // Function Solaris.SolarisMapLibrary.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf248c
	void Call(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType Key); // Function Solaris.SolarisMapLibrary.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf1a5c
	void Add(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType& Key, struct FGenericValueType& Value); // Function Solaris.SolarisMapLibrary.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf11ec
};

// Class Solaris.SolarisMathLibrary_Bool
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Bool : UObject {

	void Query(); // Function Solaris.SolarisMathLibrary_Bool.Query // (Final|Native|Static|Public) // @ game+0x5cf62a8
};

// Class Solaris.SolarisMathLibrary_Int
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Int : UObject {

	int32_t UncheckedConvertI32I64(int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64 // (Final|Native|Static|Public) // @ game+0x5cdcf24
	void SubtractEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.SubtractEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf6c90
	void Subtract(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Subtract // (Final|Native|Static|Public) // @ game+0x5cf6ad0
	bool PredicateNotEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateNotEqual // (Final|Native|Static|Public) // @ game+0x5cdc9b8
	bool PredicateLessEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateLessEqual // (Final|Native|Static|Public) // @ game+0x5cdc8f8
	bool PredicateLess(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateLess // (Final|Native|Static|Public) // @ game+0x5cdc838
	bool PredicateGreaterEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual // (Final|Native|Static|Public) // @ game+0x5cdc778
	bool PredicateGreater(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateGreater // (Final|Native|Static|Public) // @ game+0x5cdc6b8
	bool PredicateEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.PredicateEqual // (Final|Native|Static|Public) // @ game+0x5cdc5f8
	void Negate(int64_t Value); // Function Solaris.SolarisMathLibrary_Int.Negate // (Final|Native|Static|Public) // @ game+0x5cf5dc8
	void MultiplyEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.MultiplyEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf5bf4
	void Multiply(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Multiply // (Final|Native|Static|Public) // @ game+0x5cf5a40
	void LessEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.LessEqual // (Final|Native|Static|Public) // @ game+0x5cf4dc0
	void Less(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Less // (Final|Native|Static|Public) // @ game+0x5cf4bb8
	void GreaterEqual(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.GreaterEqual // (Final|Native|Static|Public) // @ game+0x5cf3ff0
	void Greater(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Greater // (Final|Native|Static|Public) // @ game+0x5cf3dec
	void Divide(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Divide // (Final|Native|Static|Public) // @ game+0x5cf2f60
	void CheckConstrainedInt(int64_t min, int64_t max, int64_t Value); // Function Solaris.SolarisMathLibrary_Int.CheckConstrainedInt // (Final|Native|Static|Public) // @ game+0x5cf2354
	void AddEquals(int64_t& Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.AddEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf17b4
	void Add(int64_t Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Add // (Final|Native|Static|Public) // @ game+0x5cf1524
	void abs(int64_t Value); // Function Solaris.SolarisMathLibrary_Int.abs // (Final|Native|Static|Public) // @ game+0x5cf1074
};

// Class Solaris.SolarisMathLibrary_Rational
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Rational : UObject {

	void floor(struct FVerseRational Val); // Function Solaris.SolarisMathLibrary_Rational.floor // (Final|Native|Static|Public) // @ game+0x5cf3320
	void ceil(struct FVerseRational Val); // Function Solaris.SolarisMathLibrary_Rational.ceil // (Final|Native|Static|Public) // @ game+0x5cf2064
};

// Class Solaris.SolarisMathLibrary_Float
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Float : UObject {

	double SubtractEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.SubtractEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cdcb4c
	double Subtract(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Subtract // (Final|Native|Static|Public) // @ game+0x5cdca78
	double Negate(double Value); // Function Solaris.SolarisMathLibrary_Float.Negate // (Final|Native|Static|Public) // @ game+0x5cdc570
	double MultiplyIntFloat(int64_t Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyIntFloat // (Final|Native|Static|Public) // @ game+0x5cdc4a4
	double MultiplyFloatInt(double Lhs, int64_t Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyFloatInt // (Final|Native|Static|Public) // @ game+0x5cdc3d8
	double MultiplyEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.MultiplyEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cdc2f8
	double Multiply(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Multiply // (Final|Native|Static|Public) // @ game+0x5cdc224
	void LessEqual(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.LessEqual // (Final|Native|Static|Public) // @ game+0x5cf4ca8
	void Less(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Less // (Final|Native|Static|Public) // @ game+0x5cf4aa4
	void GreaterEqual(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.GreaterEqual // (Final|Native|Static|Public) // @ game+0x5cf3edc
	void Greater(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Greater // (Final|Native|Static|Public) // @ game+0x5cf3cd8
	double DivideEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.DivideEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cdc140
	double Divide(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Divide // (Final|Native|Static|Public) // @ game+0x5cdc06c
	void CheckConstrainedFloat(double min, double max, double Value); // Function Solaris.SolarisMathLibrary_Float.CheckConstrainedFloat // (Final|Native|Static|Public) // @ game+0x5cf2210
	double AddEquals(double& Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.AddEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cdbf8c
	double Add(double Lhs, double Rhs); // Function Solaris.SolarisMathLibrary_Float.Add // (Final|Native|Static|Public) // @ game+0x5cdbeb8
	double abs(double Value); // Function Solaris.SolarisMathLibrary_Float.abs // (Final|Native|Static|Public) // @ game+0x5cdbe30
};

// Class Solaris.SolarisMathLibrary_String
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_String : UObject {

	void UncheckedCall(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.UncheckedCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf70f0
	void RefCall(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.RefCall // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf651c
	void Move(int32_t& Destination, int32_t& Source); // Function Solaris.SolarisMathLibrary_String.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf598c
	int32_t MakeLiteral(); // Function Solaris.SolarisMathLibrary_String.MakeLiteral // (Final|Native|Static|Public) // @ game+0x5cf50f8
	void Make(); // Function Solaris.SolarisMathLibrary_String.Make // (Final|Native|Static|Public) // @ game+0x5cf4f74
	int64_t Length(int32_t& Array); // Function Solaris.SolarisMathLibrary_String.Length // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf4a28
	int32_t ConcatEquals(int32_t& Lhs, int32_t& Rhs); // Function Solaris.SolarisMathLibrary_String.ConcatEquals // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf2bd4
	int32_t Concat(int32_t& Lhs, int32_t& Rhs); // Function Solaris.SolarisMathLibrary_String.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf2ac4
	void Call(int32_t& String, int64_t Index); // Function Solaris.SolarisMathLibrary_String.Call // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf1d54
	void Add(int32_t& String, int8_t Character); // Function Solaris.SolarisMathLibrary_String.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf16e4
};

// Class Solaris.SolarisMathLibrary_Option
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Option : UObject {

	void Query(); // Function Solaris.SolarisMathLibrary_Option.Query // (Final|Native|Static|Public) // @ game+0x5cf635c
	void Make(); // Function Solaris.SolarisMathLibrary_Option.Make // (Final|Native|Static|Public) // @ game+0x5cf4eb0
};

// Class Solaris.SolarisGameSettings
// Size: 0x40 (Inherited: 0x28)
struct USolarisGameSettings : UObject {
	struct TArray<struct FString> Blacklist; // 0x28(0x10)
	int32_t MaxAllowedSize; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Solaris.SolarisUtilLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisUtilLibrary : UObject {

	int64_t ReplaceOptionValue(int64_t ResultProperty, int64_t Option, int64_t Value); // Function Solaris.SolarisUtilLibrary.ReplaceOptionValue // (Final|Native|Static|Public) // @ game+0x5cf66a4
	bool ReferenceIsValid(int64_t reference); // Function Solaris.SolarisUtilLibrary.ReferenceIsValid // (Final|Native|Static|Public) // @ game+0x5cf663c
	bool ObjectHasNoFlags(struct UObject* Object, int32_t Flags); // Function Solaris.SolarisUtilLibrary.ObjectHasNoFlags // (Final|Native|Static|Public) // @ game+0x5cf61e4
	int64_t MakeUnsetOption(); // Function Solaris.SolarisUtilLibrary.MakeUnsetOption // (Final|Native|Static|Public) // @ game+0x5cf57c0
	bool MakeOptionFromValue(struct UObject* Property, int64_t Value); // Function Solaris.SolarisUtilLibrary.MakeOptionFromValue // (Final|Native|Static|Public) // @ game+0x5cf51d0
	bool IsOptionSet(int64_t Option); // Function Solaris.SolarisUtilLibrary.IsOptionSet // (Final|Native|Static|Public) // @ game+0x5cf489c
	bool IsNonNullObject(struct UObject* Object); // Function Solaris.SolarisUtilLibrary.IsNonNullObject // (Final|Native|Static|Public) // @ game+0x5cf4828
	void InstantiateObject(struct UObject* Class, int64_t InstancingGraph); // Function Solaris.SolarisUtilLibrary.InstantiateObject // (Final|Native|Static|Public) // @ game+0x5cf464c
	void InstanceFunction(struct UObject* Object, struct FName MethodName); // Function Solaris.SolarisUtilLibrary.InstanceFunction // (Final|Native|Static|Public) // @ game+0x5cf4570
	bool HasInterface(struct UObject* Object, struct UObject* InterfaceClass); // Function Solaris.SolarisUtilLibrary.HasInterface // (Final|Native|Static|Public) // @ game+0x5cf40e0
	int64_t GetOptionValue(int64_t Option); // Function Solaris.SolarisUtilLibrary.GetOptionValue // (Final|Native|Static|Public) // @ game+0x5cf3a68
	void GetFunctionForInterfaceMethod(struct UObject* Object, struct FName MethodName); // Function Solaris.SolarisUtilLibrary.GetFunctionForInterfaceMethod // (Final|Native|Static|Public) // @ game+0x5cf34c4
	struct UObject* GetCurrentlyInstantiatedObject(); // Function Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject // (Final|Native|Static|Public) // @ game+0x5cde864
	int64_t Dereference(int64_t reference); // Function Solaris.SolarisUtilLibrary.Dereference // (Final|Native|Static|Public) // @ game+0x5cf2eb8
	void CallFunction(); // Function Solaris.SolarisUtilLibrary.CallFunction // (Final|Native|Static|Public) // @ game+0x5cf200c
	void AddPropertyToSubobjectExclusionList(int64_t InstancingGraph, int64_t Property); // Function Solaris.SolarisUtilLibrary.AddPropertyToSubobjectExclusionList // (Final|Native|Static|Public) // @ game+0x5cf1994
};

// Class Solaris.VerseClass
// Size: 0x2f0 (Inherited: 0x230)
struct UVerseClass : UVerseClassBase {
	uint32_t SolClassFlags; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct TArray<struct UObject*> TaskClasses; // 0x238(0x10)
	struct TSet<struct UObject*> InterfaceClasses; // 0x248(0x50)
	struct TMap<struct FName, struct TFieldPath<FProperty>> InterfaceMethodFunctionProperties; // 0x298(0x50)
	struct UFunction* InitInstanceFunction; // 0x2e8(0x08)
};

// Class Solaris.VerseDynamicallyTypedValueLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVerseDynamicallyTypedValueLibrary : UObject {

	void NotEqual(int32_t Left, int32_t Right); // Function Solaris.VerseDynamicallyTypedValueLibrary.NotEqual // (Final|Native|Static|Public) // @ game+0x5cf5f3c
	void MakeRuntimeTypeTuple(struct TArray<int32_t> ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple // (Final|Native|Static|Public) // @ game+0x5cf56e4
	void MakeRuntimeTypeString(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString // (Final|Native|Static|Public) // @ game+0x5cf56c0
	void MakeRuntimeTypeOption(int32_t ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption // (Final|Native|Static|Public) // @ game+0x5cf5640
	void MakeRuntimeTypeObject(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject // (Final|Native|Static|Public) // @ game+0x5cf561c
	void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap // (Final|Native|Static|Public) // @ game+0x5cf5558
	void MakeRuntimeTypeLogic(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic // (Final|Native|Static|Public) // @ game+0x5cf5534
	void MakeRuntimeTypeInt64(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64 // (Final|Native|Static|Public) // @ game+0x5cf5510
	void MakeRuntimeTypeFunction(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction // (Final|Native|Static|Public) // @ game+0x5cf54ec
	void MakeRuntimeTypeFloat(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat // (Final|Native|Static|Public) // @ game+0x5cf54c8
	void MakeRuntimeTypeEnum(struct FName Name); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum // (Final|Native|Static|Public) // @ game+0x5cf5448
	void MakeRuntimeTypeDynamic(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic // (Final|Native|Static|Public) // @ game+0x5cf5424
	void MakeRuntimeTypeClass(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass // (Final|Native|Static|Public) // @ game+0x5cf5400
	void MakeRuntimeTypeChar8(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8 // (Final|Native|Static|Public) // @ game+0x5cf53dc
	void MakeRuntimeTypeChar32(); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32 // (Final|Native|Static|Public) // @ game+0x5cf53b8
	void MakeRuntimeTypeArray(int32_t ElementType); // Function Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray // (Final|Native|Static|Public) // @ game+0x5cf5338
	void Equal(int32_t Left, int32_t Right); // Function Solaris.VerseDynamicallyTypedValueLibrary.Equal // (Final|Native|Static|Public) // @ game+0x5cf3078
	void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue // (Final|Native|Static|Public) // @ game+0x5cf2df8
	void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value); // Function Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue // (Final|Native|Static|Public) // @ game+0x5cf2cf0
};

// Class Solaris.VerseStmLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVerseStmLibrary : UObject {

	void StmSave(struct FakeType& Property); // Function Solaris.VerseStmLibrary.StmSave // (Final|Native|Static|Public|HasOutParms) // @ game+0x5cf6a5c
	void StmRollback(); // Function Solaris.VerseStmLibrary.StmRollback // (Final|Native|Static|Public) // @ game+0x5cf69f8
	void StmCommit(); // Function Solaris.VerseStmLibrary.StmCommit // (Final|Native|Static|Public) // @ game+0x5cf6930
	void StmBegin(); // Function Solaris.VerseStmLibrary.StmBegin // (Final|Native|Static|Public) // @ game+0x5cf691c
};

