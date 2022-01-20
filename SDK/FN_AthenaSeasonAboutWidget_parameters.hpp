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

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnMouseWheel
struct UAthenaSeasonAboutWidget_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageLeft
struct UAthenaSeasonAboutWidget_C_HandlePageLeft_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageRight
struct UAthenaSeasonAboutWidget_C_HandlePageRight_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnCreateRewardWidget
struct UAthenaSeasonAboutWidget_C_OnCreateRewardWidget_Params
{
	class UFortItem**                                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonAboutWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonAboutWidget_C_BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnActivated
struct UAthenaSeasonAboutWidget_C_OnActivated_Params
{
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnDeactivated
struct UAthenaSeasonAboutWidget_C_OnDeactivated_Params
{
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnCreatePageWidget
struct UAthenaSeasonAboutWidget_C_OnCreatePageWidget_Params
{
	class UEpicCMSSimpleMessage**                      Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnStartPageGeneration
struct UAthenaSeasonAboutWidget_C_OnStartPageGeneration_Params
{
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnPagesGenerated
struct UAthenaSeasonAboutWidget_C_OnPagesGenerated_Params
{
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.Construct
struct UAthenaSeasonAboutWidget_C_Construct_Params
{
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandleWidgetCreated
struct UAthenaSeasonAboutWidget_C_HandleWidgetCreated_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature
struct UAthenaSeasonAboutWidget_C_BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature_Params
{
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature
struct UAthenaSeasonAboutWidget_C_BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature_Params
{
};

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.ExecuteUbergraph_AthenaSeasonAboutWidget
struct UAthenaSeasonAboutWidget_C_ExecuteUbergraph_AthenaSeasonAboutWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
