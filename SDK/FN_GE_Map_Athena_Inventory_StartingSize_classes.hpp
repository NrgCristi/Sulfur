#pragma once

// Fortnite (2.4.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GE_Map_Athena_Inventory_StartingSize.GE_Map_Athena_Inventory_StartingSize_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Map_Athena_Inventory_StartingSize_C : public UGE_Map_Offense_To_WeaponDamage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_Map_Athena_Inventory_StartingSize.GE_Map_Athena_Inventory_StartingSize_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
