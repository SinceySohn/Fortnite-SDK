// Class NaniteDisplacedMesh.NaniteDisplacedMesh
// Size: 0x130 (Inherited: 0x28)
struct UNaniteDisplacedMesh : UObject {
	char pad_28[0x108]; // 0x28(0x108)
};

// Class NaniteDisplacedMesh.NaniteDisplacedMeshComponent
// Size: 0x5f0 (Inherited: 0x5f0)
struct UNaniteDisplacedMeshComponent : UStaticMeshComponent {
	struct UNaniteDisplacedMesh* DisplacedMesh; // 0x5e8(0x08)
};

