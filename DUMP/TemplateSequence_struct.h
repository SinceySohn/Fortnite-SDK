// Enum TemplateSequence.ETemplateSectionPropertyScaleType
enum class ETemplateSectionPropertyScaleType : uint8 {
	FloatProperty = 0,
	TransformPropertyLocationOnly = 1,
	TransformPropertyRotationOnly = 2,
	ETemplateSectionPropertyScaleType_MAX = 3
};

// ScriptStruct TemplateSequence.TemplateSectionPropertyScale
// Size: 0x108 (Inherited: 0x00)
struct FTemplateSectionPropertyScale {
	struct FGuid ObjectBinding; // 0x00(0x10)
	struct FMovieScenePropertyBinding PropertyBinding; // 0x10(0x0c)
	enum class ETemplateSectionPropertyScaleType PropertyScaleType; // 0x1c(0x04)
	struct FMovieSceneFloatChannel FloatChannel; // 0x20(0xe8)
};

// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
// Size: 0x0c (Inherited: 0x00)
struct FTemplateSequenceBindingOverrideData {
	struct TWeakObjectPtr<struct UObject> Object; // 0x00(0x08)
	bool bOverridesDefault; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

