// BlueprintGeneratedClass NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C
// Size: 0x3b20 (Inherited: 0x3b10)
struct ANPC_Pawn_Irwin_Simple_Smackie_C : ANPC_Pawn_Wildlife_Simple_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b10(0x08)
	struct USoundBase* SmackieLandSound; // 0x3b18(0x08)

	void ReceiveBeginPlay(); // Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xdef49c
	void SmackieLanded(struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.SmackieLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void OnSmackieLanded(struct FHitResult HitResult); // Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.OnSmackieLanded // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xdef49c
	void ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie(int32_t EntryPoint); // Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie // (Final|UbergraphFunction|HasDefaults) // @ game+0xdef49c
};

