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

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetEventInfoVisibility
struct UAthenaSpectatorHUD_C_SetEventInfoVisibility_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SpectatorPlayerStatusVisibilityChanged
struct UAthenaSpectatorHUD_C_SpectatorPlayerStatusVisibilityChanged_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SpectatorMatchStatusVisibilityChanged
struct UAthenaSpectatorHUD_C_SpectatorMatchStatusVisibilityChanged_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetQuickbarSizes
struct UAthenaSpectatorHUD_C_SetQuickbarSizes_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleQuickbarSlot FocusSlotChanged
struct UAthenaSpectatorHUD_C_HandleQuickbarSlot_FocusSlotChanged_Params
{
	EFortQuickBars                                     Quickbar_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetNameplateLayerDataSource
struct UAthenaSpectatorHUD_C_SetNameplateLayerDataSource_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetNameplateLayerVisibility
struct UAthenaSpectatorHUD_C_SetNameplateLayerVisibility_Params
{
	bool                                               bNameplatesEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BindBroadcastEvents
struct UAthenaSpectatorHUD_C_BindBroadcastEvents_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleOffAirWidgetVisibility
struct UAthenaSpectatorHUD_C_ToggleOffAirWidgetVisibility_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.TogglePlayerListVisibility
struct UAthenaSpectatorHUD_C_TogglePlayerListVisibility_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowCameraControls
struct UAthenaSpectatorHUD_C_ShowCameraControls_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HideCameraControlsOnTimeout
struct UAthenaSpectatorHUD_C_HideCameraControlsOnTimeout_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleInputModeChanged
struct UAthenaSpectatorHUD_C_HandleInputModeChanged_Params
{
	bool                                               Passthrough;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCameraChange
struct UAthenaSpectatorHUD_C_HandleCameraChange_Params
{
	class AFortPlayerControllerSpectating*             PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESpectatorCameraType                               CameraType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleViewSettingsVisibility
struct UAthenaSpectatorHUD_C_ToggleViewSettingsVisibility_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnLevelStreamingChanged
struct UAthenaSpectatorHUD_C_OnLevelStreamingChanged_Params
{
	bool                                               bStreaming;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Get Display Time in Minutes And Seconds
struct UAthenaSpectatorHUD_C_Get_Display_Time_in_Minutes_And_Seconds_Params
{
	float                                              TimeInSeconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Bind Replay UI Events
struct UAthenaSpectatorHUD_C_Bind_Replay_UI_Events_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HudVisibilityChangedFromNative
struct UAthenaSpectatorHUD_C_HudVisibilityChangedFromNative_Params
{
	EHudVisibilityState                                NewVisibilty;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.TimelineRangeChangedFromNative
struct UAthenaSpectatorHUD_C_TimelineRangeChangedFromNative_Params
{
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CurrentTimeChangedFromNative
struct UAthenaSpectatorHUD_C_CurrentTimeChangedFromNative_Params
{
	float                                              NowTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupCameraMode
struct UAthenaSpectatorHUD_C_SetupCameraMode_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CheckHUDElementVisibility
struct UAthenaSpectatorHUD_C_CheckHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                HUDElementTagToCheck;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     HUDElement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PopContentWidgetInternal
struct UAthenaSpectatorHUD_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowPicker
struct UAthenaSpectatorHUD_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleFocusChat
struct UAthenaSpectatorHUD_C_HandleFocusChat_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTopLevelMenu
struct UAthenaSpectatorHUD_C_ToggleTopLevelMenu_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleChat
struct UAthenaSpectatorHUD_C_ToggleChat_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetPersistentHUDContentVisibility
struct UAthenaSpectatorHUD_C_SetPersistentHUDContentVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleIndicatorModeChanged
struct UAthenaSpectatorHUD_C_HandleIndicatorModeChanged_Params
{
	bool                                               InidicatorsEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerTargetingChanged
struct UAthenaSpectatorHUD_C_OnPlayerTargetingChanged_Params
{
	bool                                               IsTargeting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleKeybindsChanged
struct UAthenaSpectatorHUD_C_HandleKeybindsChanged_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCursorModeChanged
struct UAthenaSpectatorHUD_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Destruct
struct UAthenaSpectatorHUD_C_Destruct_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnUnableToPerformAction
struct UAthenaSpectatorHUD_C_OnUnableToPerformAction_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       FailureText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Prepare Game Over
struct UAthenaSpectatorHUD_C_Prepare_Game_Over_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnEnterState
struct UAthenaSpectatorHUD_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Died
struct UAthenaSpectatorHUD_C_On_Player_Died_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PrepareToShowEndGameUI
struct UAthenaSpectatorHUD_C_PrepareToShowEndGameUI_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Won
struct UAthenaSpectatorHUD_C_On_Player_Won_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnRevived
struct UAthenaSpectatorHUD_C_OnRevived_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleRevived
struct UAthenaSpectatorHUD_C_HandleRevived_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Team Won
struct UAthenaSpectatorHUD_C_On_Team_Won_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PushContentWidgetInternal
struct UAthenaSpectatorHUD_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ViewModelChanged
struct UAthenaSpectatorHUD_C_ViewModelChanged_Params
{
	class UAthenaPlayerViewModel**                     ViewModel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetFullScreenMapVisibility
struct UAthenaSpectatorHUD_C_SetFullScreenMapVisibility_Params
{
	bool*                                              bIsVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__HUDVisibility_K2Node_ComponentBoundEvent_279_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HUDVisibilitySound
struct UAthenaSpectatorHUD_C_HUDVisibilitySound_Params
{
	EHudVisibilityState                                HUDVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHUDScaleChanged
struct UAthenaSpectatorHUD_C_OnHUDScaleChanged_Params
{
	float*                                             HUDScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Construct
struct UAthenaSpectatorHUD_C_Construct_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BattleBusButton_K2Node_ComponentBoundEvent_27_CommonButtonClicked__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__BattleBusButton_K2Node_ComponentBoundEvent_27_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CustomEvent_0_1
struct UAthenaSpectatorHUD_C_CustomEvent_0_1_Params
{
	EAthenaGamePhase                                   GamePhase;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__EventInfoButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__EventInfoButton_K2Node_ComponentBoundEvent_48_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ExecuteUbergraph_AthenaSpectatorHUD
struct UAthenaSpectatorHUD_C_ExecuteUbergraph_AthenaSpectatorHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
