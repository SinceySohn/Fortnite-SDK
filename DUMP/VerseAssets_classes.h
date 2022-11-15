// VerseClass VerseAssets.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseAssets.Asset
// Size: 0xe8 (Inherited: 0x90)
struct UAsset : UVerseAssetPtr {
	char pad_90[0x48]; // 0x90(0x48)
	VerseStringProperty __verse_0xD636D109_AssetPath; // 0xd8(0x10)
	VerseFunctionProperty __verse_0x9702F5DA__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load; // 0xa0(0x10)
	VerseFunctionProperty __verse_0xE0CBA11B__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType; // 0xc0(0x10)
	VerseFunctionProperty __verse_0x78F21562__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent; // 0xb0(0x10)
	VerseFunctionProperty __verse_0xFD8E69AC__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad; // 0x90(0x10)

	char _L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAssets.Asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff71ec
	OptionProperty _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAssets.Asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff71e4
	OptionProperty _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAssets.Asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff71dc
	OptionProperty _L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAssets.Asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff71d4
	void $InitInstance(); // Function VerseAssets.Asset.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.Asset.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.Asset.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.Animation
// Size: 0xe8 (Inherited: 0xe8)
struct UAnimation : UAsset {

	void $InitInstance(); // Function VerseAssets.Animation.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.Animation.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.Animation.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.animation_blueprint
// Size: 0xe8 (Inherited: 0xe8)
struct Uanimation_blueprint : UAsset {

	void $InitInstance(); // Function VerseAssets.animation_blueprint.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.animation_blueprint.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.animation_blueprint.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.animation_instance
// Size: 0xe8 (Inherited: 0xe8)
struct Uanimation_instance : UAsset {

	void $InitInstance(); // Function VerseAssets.animation_instance.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.animation_instance.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.animation_instance.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.client_asset
// Size: 0xe8 (Inherited: 0xe8)
struct Uclient_asset : UAsset {

	void $InitInstance(); // Function VerseAssets.client_asset.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.client_asset.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.client_asset.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.Font
// Size: 0xe8 (Inherited: 0xe8)
struct UFont : Uclient_asset {

	void $InitInstance(); // Function VerseAssets.Font.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.Font.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.Font.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.Level
// Size: 0xe8 (Inherited: 0xe8)
struct ULevel : UAsset {

	void $InitInstance(); // Function VerseAssets.Level.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.Level.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.Level.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.Material
// Size: 0xe8 (Inherited: 0xe8)
struct UMaterial : UAsset {

	void $InitInstance(); // Function VerseAssets.Material.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.Material.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.Material.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.particle_system
// Size: 0xe8 (Inherited: 0xe8)
struct Uparticle_system : Uclient_asset {

	void $InitInstance(); // Function VerseAssets.particle_system.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.particle_system.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.particle_system.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.skeletal_mesh
// Size: 0xe8 (Inherited: 0xe8)
struct Uskeletal_mesh : UAsset {

	void $InitInstance(); // Function VerseAssets.skeletal_mesh.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.skeletal_mesh.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.skeletal_mesh.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.sound
// Size: 0xe8 (Inherited: 0xe8)
struct Usound : Uclient_asset {

	void $InitInstance(); // Function VerseAssets.sound.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.sound.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.sound.$InitCDO // (None) // @ game+0xdef49c
};

// VerseClass VerseAssets.static_mesh
// Size: 0xe8 (Inherited: 0xe8)
struct Ustatic_mesh : UAsset {

	void $InitInstance(); // Function VerseAssets.static_mesh.$InitInstance // (None) // @ game+0xdef49c
	void $Block(); // Function VerseAssets.static_mesh.$Block // (None) // @ game+0xdef49c
	void $InitCDO(); // Function VerseAssets.static_mesh.$InitCDO // (None) // @ game+0xdef49c
};

