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

// AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C
// 0x0150 (0x04B0 - 0x0360)
class UCrossbow_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973;      // 0x0368(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D;      // 0x03D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7;// 0x0410(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_Crossbow_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
