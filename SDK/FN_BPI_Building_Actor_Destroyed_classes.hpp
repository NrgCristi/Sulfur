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

// BlueprintGeneratedClass BPI_Building_Actor_Destroyed.BPI_Building_Actor_Destroyed_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Building_Actor_Destroyed_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Building_Actor_Destroyed.BPI_Building_Actor_Destroyed_C");
		return ptr;
	}


	void Event_Building_Actor_Destroyed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
