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

// BlueprintGeneratedClass GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C
// 0x0030 (0x0900 - 0x08D0)
class UGAB_HuskBaseRadialMelee_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       MontageSectionToPlay;                                     // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x08E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08E1(0x0007) MISSED OFFSET
	struct FName                                       AttackToLeftMontageSection;                               // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttackToRightMontageSection;                              // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_AIBaseMeleeFrustration_Reset;                          // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C");
		return ptr;
	}


	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void Completed_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_HuskBaseRadialMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
