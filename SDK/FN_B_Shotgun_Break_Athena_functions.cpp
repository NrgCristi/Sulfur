// Fortnite (5.21) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Shotgun_Break_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.UserConstructionScript");

	AB_Shotgun_Break_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
