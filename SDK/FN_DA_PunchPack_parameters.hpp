#pragma once

// Fortnite (5.21) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DA_PunchPack.DA_PunchPack_C.IsOnGround
struct ADA_PunchPack_C_IsOnGround_Params
{
	bool                                               bOnGround;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DA_PunchPack.DA_PunchPack_C.RaiseUsageError
struct ADA_PunchPack_C_RaiseUsageError_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DA_PunchPack.DA_PunchPack_C.UserConstructionScript
struct ADA_PunchPack_C_UserConstructionScript_Params
{
};

// Function DA_PunchPack.DA_PunchPack_C.BPPressSecondaryFire
struct ADA_PunchPack_C_BPPressSecondaryFire_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_PunchPack.DA_PunchPack_C.BPReleaseSecondaryFire
struct ADA_PunchPack_C_BPReleaseSecondaryFire_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_PunchPack.DA_PunchPack_C.MinHeldTimeCheck
struct ADA_PunchPack_C_MinHeldTimeCheck_Params
{
};

// Function DA_PunchPack.DA_PunchPack_C.BPOnUnEquip
struct ADA_PunchPack_C_BPOnUnEquip_Params
{
};

// Function DA_PunchPack.DA_PunchPack_C.BPPressTrigger
struct ADA_PunchPack_C_BPPressTrigger_Params
{
	class AFortDecoHelper**                            FortDecoHelper;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DA_PunchPack.DA_PunchPack_C.ExecuteUbergraph_DA_PunchPack
struct ADA_PunchPack_C_ExecuteUbergraph_DA_PunchPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
