// Class ModelViewViewModel.MVVMSubsystem
// Size: 0x38 (Inherited: 0x30)
struct UMVVMSubsystem : UEngineSubsystem {
	struct UMVVMViewModelCollectionObject* GlobalViewModelCollection; // 0x30(0x08)

	struct UMVVMView* GetViewFromUserWidget(struct UUserWidget* UserWidget); // Function ModelViewViewModel.MVVMSubsystem.GetViewFromUserWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fdf690
	struct UMVVMViewModelCollectionObject* GetGlobalViewModelCollection(); // Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fdf678
	struct TArray<struct FMVVMAvailableBinding> GetAvailableBindings(struct UObject* Class, struct UObject* Accessor); // Function ModelViewViewModel.MVVMSubsystem.GetAvailableBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fdf46c
	struct FMVVMAvailableBinding GetAvailableBinding(struct UObject* Class, struct FMVVMBindingName BindingName, struct UObject* Accessor); // Function ModelViewViewModel.MVVMSubsystem.GetAvailableBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fdf308
	bool DoesWidgetTreeContainedWidget(struct UWidgetTree* WidgetTree, struct UWidget* ViewWidget); // Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fdf158
};

// Class ModelViewViewModel.MVVMViewModelBase
// Size: 0x68 (Inherited: 0x28)
struct UMVVMViewModelBase : UObject {
	char pad_28[0x40]; // 0x28(0x40)

	bool K2_SetPropertyValue(int32_t& OldValue, int32_t& NewValue); // Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6fdf97c
	void K2_RemoveFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x6fdf8a0
	void K2_BroadcastFieldValueChanged(struct FFieldNotificationId FieldId); // Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0x6fdf800
	void K2_AddFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x6fdf724
};

// Class ModelViewViewModel.MVVMViewModelCollectionObject
// Size: 0x50 (Inherited: 0x28)
struct UMVVMViewModelCollectionObject : UObject {
	struct FMVVMViewModelCollection ViewModelCollection; // 0x28(0x28)

	bool RemoveViewModel(struct FMVVMViewModelContext Context); // Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel // (Final|Native|Public|BlueprintCallable) // @ game+0x6fdfc38
	int32_t RemoveAllViewModelInstance(struct UMVVMViewModelBase* ViewModel); // Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x6fdfb98
	struct UMVVMViewModelBase* FindViewModelInstance(struct FMVVMViewModelContext Context); // Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6fdf26c
	bool AddViewModelInstance(struct FMVVMViewModelContext Context, struct UMVVMViewModelBase* ViewModel); // Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x6fdf078
};

// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
// Size: 0x398 (Inherited: 0x380)
struct UMVVMViewModelBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct TArray<struct FFieldNotificationId> FieldNotifyNames; // 0x380(0x10)
	char pad_390[0x8]; // 0x390(0x08)
};

// Class ModelViewViewModel.MVVMView
// Size: 0x68 (Inherited: 0x28)
struct UMVVMView : UUserWidgetExtension {
	struct UMVVMViewClass* ClassExtension; // 0x28(0x08)
	char pad_30[0x38]; // 0x30(0x38)

	bool SetViewModel(struct FName ViewModelName, struct UMVVMViewModelBase* ViewModel); // Function ModelViewViewModel.MVVMView.SetViewModel // (Final|Native|Public|BlueprintCallable) // @ game+0x6fdfcd4
};

// Class ModelViewViewModel.MVVMViewClass
// Size: 0xb0 (Inherited: 0x28)
struct UMVVMViewClass : UWidgetBlueprintGeneratedClassExtension {
	struct TArray<struct FMVVMViewClass_SourceCreator> SourceCreators; // 0x28(0x10)
	struct TArray<struct FMVVMViewClass_CompiledBinding> CompiledBindings; // 0x38(0x10)
	struct FMVVMCompiledBindingLibrary BindingLibrary; // 0x48(0x60)
	char pad_A8[0x8]; // 0xa8(0x08)
};

