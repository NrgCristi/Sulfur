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

// BlueprintGeneratedClass DA_GuidedMissilePack.DA_GuidedMissilePack_C
// 0x0008 (0x0BA8 - 0x0BA0)
class ADA_GuidedMissilePack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BA0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_GuidedMissilePack.DA_GuidedMissilePack_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void ExecuteUbergraph_DA_GuidedMissilePack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
