#pragma once

// Fortnite (4.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C
// 0x0094 (0x0B54 - 0x0AC0)
class UGA_Athena_ShieldSmall_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (Transient, DuplicateTransient)
	struct FFortGameplayAbilityMontageInfo             AnimMontageInfo;                                          // 0x0AC8(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    SpawnHeading;                                             // 0x0B28(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Projectile;                                               // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldingAmount;                                          // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmallShieldCap;                                           // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_ShieldSmall.GA_Athena_ShieldSmall_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void Completed_0FAA9CFB4F74B18CA297E1B4800037A2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_0FAA9CFB4F74B18CA297E1B4800037A2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_0FAA9CFB4F74B18CA297E1B4800037A2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_ShieldSmall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
