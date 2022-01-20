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

// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaBattlePassAnimatedLogo_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.OnAnimationFinished");

	UAthenaBattlePassAnimatedLogo_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.PlayIntroAnim
// (BlueprintCallable, BlueprintEvent)

void UAthenaBattlePassAnimatedLogo_C::PlayIntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.PlayIntroAnim");

	UAthenaBattlePassAnimatedLogo_C_PlayIntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.ExecuteUbergraph_AthenaBattlePassAnimatedLogo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaBattlePassAnimatedLogo_C::ExecuteUbergraph_AthenaBattlePassAnimatedLogo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C.ExecuteUbergraph_AthenaBattlePassAnimatedLogo");

	UAthenaBattlePassAnimatedLogo_C_ExecuteUbergraph_AthenaBattlePassAnimatedLogo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
