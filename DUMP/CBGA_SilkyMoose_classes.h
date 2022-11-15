// BlueprintGeneratedClass CBGA_SilkyMoose.CBGA_SilkyMoose_C
// Size: 0xd28 (Inherited: 0xbc8)
struct ACBGA_SilkyMoose_C : ACBGA_Parent_C {
	struct UStaticMeshComponent* Fireflies; // 0xbc8(0x08)
	struct UStaticMeshComponent* SM_Motes; // 0xbd0(0x08)
	struct UStaticMeshComponent* SM_NoTickHaze; // 0xbd8(0x08)
	struct FFortBurstEffectData burst; // 0xbe0(0x140)
	struct USoundBase* GatherSound; // 0xd20(0x08)

	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function CBGA_SilkyMoose.CBGA_SilkyMoose_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xdef49c
	bool OnInteractAllowedToConsume(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function CBGA_SilkyMoose.CBGA_SilkyMoose_C.OnInteractAllowedToConsume // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
};

