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

// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
// 0x00E8 (0x0448 - 0x0360)
class UBP_AssaultRifle_FrontClip_SideAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA9A03134DBA089D49100DBE71EF86F5;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4E27AC5C48BE291AEB818BA0DAEA04EB;      // 0x03A8(0x0068)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B63DE5144515FA5CE71B26B8581D7149;// 0x0410(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
