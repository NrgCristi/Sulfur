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

// BlueprintGeneratedClass PBWA_M1_HalfWall.PBWA_M1_HalfWall_C
// 0x0000 (0x0D08 - 0x0D08)
class APBWA_M1_HalfWall_C : public ABuildingWall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_M1_HalfWall.PBWA_M1_HalfWall_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
