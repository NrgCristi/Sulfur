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

// BlueprintGeneratedClass GE_SmasherMeleeDamage.GE_SmasherMeleeDamage_C
// 0x0000 (0x0638 - 0x0638)
class UGE_SmasherMeleeDamage_C : public UGE_DirectCreatureDamage_DoNotDamageObjectives_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GE_SmasherMeleeDamage.GE_SmasherMeleeDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
