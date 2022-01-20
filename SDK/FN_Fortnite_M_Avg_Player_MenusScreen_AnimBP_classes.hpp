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

// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_MenusScreen_AnimBP.Fortnite_M_Avg_Player_MenusScreen_AnimBP_C
// 0x185C (0x4ADC - 0x3280)
class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C : public UFortPlayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3280(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A674FFBF48506B9BA7EE8CBDBC8210BD;      // 0x3288(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1DB3E5A42B9996B6785308036E85FAE;// 0x32C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B299A69E447E60EE4F7B6C8FBE368C16;// 0x3310(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_951E9B3D4F1C41FA19C1348CDF1A46C3;// 0x33B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05C01B274E6CFFEB43237F82185270F4;// 0x33F0(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9DA1AEC64472F45AA7CBECA9AC0600B2;// 0x3490(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_16C670594F63485CBAD87ABDF4800661;// 0x34D0(0x00E0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_646F5CD042D0A5ED4317CA9FB189AF7D;// 0x35B0(0x00D0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53B8C117420CB0F1D06CF7BB2D0F611F;// 0x3680(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9767634C4FD80B5DCE5D27A2D3ECF55A;// 0x36C8(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DEF0FA8B424C71AC423D7F827E27D566;// 0x3768(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C3AB68A492CB3F60B259E99EE136048;// 0x37A8(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5353AF9471A1BD5399A9CA462567314;// 0x3848(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4CF53C32440BB605C95230936BD30C61;// 0x3888(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FCD8E69443C0A585805514BA49F1D848;// 0x3968(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_517B1D0249C8EC092C471DBB5DD36220;// 0x39B0(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A5671DD44544B7D8FE344C948A1F6D5F;// 0x3A50(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26F17D274A4F783FBE1BA29144FD59C0;// 0x3A90(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DCDAAE584818E91CC81A0BA12944C016;// 0x3B30(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_152F0BA4497936B543D683B268EB17F7;// 0x3B70(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9B548FD24DD8CA302DBE0493C9C73F98;// 0x3C50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_06673EFA4BA843B43D3D76986132A086;// 0x3C98(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1F49854749DE80A5A7C55FB732227D7B;// 0x3D38(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1FF88FC743D30AC2123949A47B704E48;// 0x3D78(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_133E4CCB4CD07B192E5272994F4A94D0;// 0x3E18(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FA4F2A1D4B990DE217B853803767EFEA;// 0x3E58(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D53EBE274630FE146FC57C9C40922FA4;// 0x3F38(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBF0067242E2BBE0B1BE1AAB460C3E97;// 0x3F80(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FFC399704D92F63AF22597B83C150F11;// 0x4020(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37AC3FC042AD93F524BC0EB3B9D366CE;// 0x4060(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BE228804752B6A459BF5FADAA550E24;// 0x4100(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4797E15545A1D285BFB1C498264BFE5F;// 0x4140(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD721A434BAE1DC3B4791ABEF2973E96;// 0x4220(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60AE7A614B28484E515FE4AD9926EBAF;// 0x4268(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_27F21EED44633C75F85E8E9260E524AB;// 0x4308(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_027C00EF4B400C53991ED7BEE9CF57E2;// 0x4348(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0719A412410C7F73A2EB36B31A681128;// 0x43E8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DEEE76B9479CA855B13ACDB7B1ADD3DE;// 0x4428(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_863AEA3C426E5A0975CC67A91E44BA76;// 0x4508(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21E547B847DA11586F2069B996B02230;// 0x4550(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AFE7D68B41BDD2DFC8A938853BBACE1C;// 0x45F0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F91BF94341E4790BEA4E0CAAE54C94B4;// 0x4630(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_10C5AD0C4E2C8EB6F7B9F0B4860D810D;// 0x46D0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0DCD441046567AE3F7CEC1A384822795;// 0x4710(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63200C884B8BFFB1AB40C7BA4AE4764A;// 0x47F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00C62FC3461975826AB7E88483FB7F99;// 0x4838(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_536C475D4876F140A624A0B5A5398947;// 0x48D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E6363B3848E7E34F43DA088E680182A5;// 0x4918(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F169FFA74713A776C1D5A4A712A655F2;// 0x49B8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_722C2AEE4FDCBF942D1588973096C898;// 0x49F8(0x00E0)
	int                                                ClassNameInt;                                             // 0x4AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_MenusScreen_AnimBP.Fortnite_M_Avg_Player_MenusScreen_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_9B548FD24DD8CA302DBE0493C9C73F98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_BlendListByInt_646F5CD042D0A5ED4317CA9FB189AF7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_D53EBE274630FE146FC57C9C40922FA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_DD721A434BAE1DC3B4791ABEF2973E96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_F1DB3E5A42B9996B6785308036E85FAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_863AEA3C426E5A0975CC67A91E44BA76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_53B8C117420CB0F1D06CF7BB2D0F611F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_63200C884B8BFFB1AB40C7BA4AE4764A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP_AnimGraphNode_TransitionResult_FCD8E69443C0A585805514BA49F1D848();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Fortnite_M_Avg_Player_MenusScreen_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
