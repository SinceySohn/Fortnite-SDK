// BlueprintGeneratedClass BP_SupplyDropRadioAttachActorComponent.BP_SupplyDropRadioAttachActorComponent_C
// Size: 0xb8 (Inherited: 0xa0)
struct UBP_SupplyDropRadioAttachActorComponent_C : UFortSupplyDropRadioAttachActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	double NetCullDistanceSquared; // 0xa8(0x08)
	double OriginalNetCullDistanceSquared; // 0xb0(0x08)

	void ResetNetCullDistanceSquared(); // Function BP_SupplyDropRadioAttachActorComponent.BP_SupplyDropRadioAttachActorComponent_C.ResetNetCullDistanceSquared // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void SetNetCullDistanceSquared(double InNetCullDistanceSquared); // Function BP_SupplyDropRadioAttachActorComponent.BP_SupplyDropRadioAttachActorComponent_C.SetNetCullDistanceSquared // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnRep_NetCullDistanceSquared(); // Function BP_SupplyDropRadioAttachActorComponent.BP_SupplyDropRadioAttachActorComponent_C.OnRep_NetCullDistanceSquared // (BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ReceiveBeginPlay(); // Function BP_SupplyDropRadioAttachActorComponent.BP_SupplyDropRadioAttachActorComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_BP_SupplyDropRadioAttachActorComponent(int32_t EntryPoint); // Function BP_SupplyDropRadioAttachActorComponent.BP_SupplyDropRadioAttachActorComponent_C.ExecuteUbergraph_BP_SupplyDropRadioAttachActorComponent // (Final|UbergraphFunction) // @ game+0xdef49c
};

