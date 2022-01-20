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

// BlueprintGeneratedClass GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C
// 0x0089 (0x0969 - 0x08E0)
class UGAT_Athena_c4_Detonate_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayForChainExplode;                                     // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenExplodes;                                     // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TrackGroupTag;                                            // 0x08F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             MontageNoAmmo;                                            // 0x0900(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    C4ItemDef;                                                // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasTargetC4ToExplode;                                     // 0x0968(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C");
		return ptr;
	}


	void Update_Used_Explosive_Stat();
	void OnRep_NumberOfBombsOut();
	void Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Athena_c4_Detonate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
