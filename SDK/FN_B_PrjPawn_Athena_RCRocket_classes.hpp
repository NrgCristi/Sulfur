#pragma once

// Fortnite (5.21) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C
// 0x0151 (0x2371 - 0x2220)
class AB_PrjPawn_Athena_RCRocket_C : public AFortRemoteControlledPawnAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2220(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Jet_Launch;                                               // 0x2228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               RideBox;                                                  // 0x2230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               HitBox;                                                   // 0x2238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMissileMesh;                                      // 0x2240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BlinkingLight;                                            // 0x2248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LoadMissile;                                              // 0x2250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Jet;                                                      // 0x2258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MissileInAirBankingAudio;                                 // 0x2260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MissileInAirAudio;                                        // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ScaleUpRocket_ScaleRocket_AE4726BD4835EF8E9D886681DC468461;// 0x2270(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleUpRocket__Direction_AE4726BD4835EF8E9D886681DC468461;// 0x227C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x227D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleUpRocket;                                            // 0x2280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDetached;                                                // 0x2288(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTransformed;                                             // 0x2289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x228A(0x0006) MISSED OFFSET
	class USoundBase*                                  ExplosionSound;                                           // 0x2290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionPS;                                              // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TransformationPS;                                         // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TransformationSound;                                      // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Delta;                                               // 0x22B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentVector;                                            // 0x22B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVector;                                           // 0x22C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LevelOutRotation;                                         // 0x22CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Rate;                                                // 0x22D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BankingAudioVolume;                                       // 0x22D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BankingAudioPitch;                                        // 0x22D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAudioModulator;                                       // 0x22DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAudioModulatorMax;                                    // 0x22E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x22E4(0x0004) MISSED OFFSET
	struct FName                                       LeftWing;                                                 // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightWing;                                                // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TopWing;                                                  // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BottomWing;                                               // 0x2300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AB_RCRocket_Launcher_Athena_C*               MissileLauncher;                                          // 0x2308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SwapToIdleAnim;                                           // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ControllerAnim;                                           // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x2320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeMeshSwap;                                      // 0x2324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFuelAmount;                                            // 0x2328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x232C(0x0004) MISSED OFFSET
	struct FTimerHandle                                FuelTimer;                                                // 0x2330(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  MissileInAirSound;                                        // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MissileLowFuelSound;                                      // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             Missile_LowFuelWarning;                                   // 0x2348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ControllerRocketFX;                                       // 0x2350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ScreenSoundComponent;                                     // 0x2358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DelayToggleRC_Vis;                                        // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2364(0x0004) MISSED OFFSET
	class UParticleSystem*                             HologramRocket;                                           // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPlayedFuelWarningSound;                               // 0x2370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C");
		return ptr;
	}


	void FuelLevelVisuals();
	void OnRep_bDetached();
	void UserConstructionScript();
	void ScaleUpRocket__FinishedFunc();
	void ScaleUpRocket__UpdateFunc();
	void OnNotifyEnd_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnNotifyBegin_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnInterrupted_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnBlendOut_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnCompleted_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnNotifyEnd_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnNotifyBegin_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnInterrupted_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnBlendOut_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnCompleted_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void ReceiveUnpossessed(class AController** OldController);
	void OnTriggeredHealthThreshold(float* PreviousTriggeredHealthThreshold, float* CurrentTriggeredHealthThreshold);
	void ReceiveTick(float* DeltaSeconds);
	void OnDoKill();
	void Multicast_HandleOnKill();
	void SetPreviousVector();
	void LevelOutMissile();
	void Handle_Movement_Audio();
	void ResetWeapon();
	void StartFuelTimer();
	void OnClientSetupRemoteControlPawn();
	void BndEvt__HitBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_PrjPawn_Athena_RCRocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
