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

// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.OnExecute
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGCN_MedicPack_Equipped_C::OnExecute(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.OnExecute");

	UGCN_MedicPack_Equipped_C_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetMaxFuel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerPawn_Athena_C*    PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGCN_MedicPack_Equipped_C::GetMaxFuel(class APlayerPawn_Athena_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetMaxFuel");

	UGCN_MedicPack_Equipped_C_GetMaxFuel_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetFuel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerPawn_Athena_C*    PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGCN_MedicPack_Equipped_C::GetFuel(class APlayerPawn_Athena_C* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetFuel");

	UGCN_MedicPack_Equipped_C_GetFuel_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetFuelPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerPawn_Athena_C*    PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Fuel_Percent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGCN_MedicPack_Equipped_C::GetFuelPercent(class APlayerPawn_Athena_C* PlayerPawn, float* Fuel_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetFuelPercent");

	UGCN_MedicPack_Equipped_C_GetFuelPercent_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fuel_Percent != nullptr)
		*Fuel_Percent = params.Fuel_Percent;
}


// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGCN_MedicPack_Equipped_C::WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.WhileActive");

	UGCN_MedicPack_Equipped_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
