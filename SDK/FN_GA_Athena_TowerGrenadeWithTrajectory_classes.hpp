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

// BlueprintGeneratedClass GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C
// 0x0030 (0x0B70 - 0x0B40)
class UGA_Athena_TowerGrenadeWithTrajectory_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B40(0x0008) (Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*                  ProjectileTrajectoryRed;                                  // 0x0B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorRedClass;                              // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStat;                                            // 0x0B58(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortQuestItemDefinition*                    QuestItemUsePortafort;                                    // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C");
		return ptr;
	}


	void SetupDummyProjectileRed();
	void K2_ActivateAbility();
	void CleanupTrajectoryDisplay();
	void Server_SpawnProjectile(struct FVector* Location, struct FRotator* Direction);
	void UpdateTrajectorySpline();
	void ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
