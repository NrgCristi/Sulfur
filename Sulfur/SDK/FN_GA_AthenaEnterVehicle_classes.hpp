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

// BlueprintGeneratedClass GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C
// 0x0008 (0x0AC8 - 0x0AC0)
class UGA_AthenaEnterVehicle_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_AthenaEnterVehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
