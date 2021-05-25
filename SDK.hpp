#pragma once
#define WINDOWS_IGNORE_PACKING_MISMATCH
// Fortnite (16.20) SDK

#include <set>
#include <string>
#include <xlocale>
#include <windows.h>
#include "xor.h"

#include "SDK/FN_Basic.hpp"

#include "SDK/FN_CoreUObject_structs.hpp"
#include "SDK/FN_CoreUObject_classes.hpp"
#include "SDK/FN_CoreUObject_parameters.hpp"
#include "SDK/FN_Chaos_structs.hpp"
#include "SDK/FN_Chaos_classes.hpp"
#include "SDK/FN_Chaos_parameters.hpp"
#include "SDK/FN_NiagaraShader_structs.hpp"
#include "SDK/FN_NiagaraShader_classes.hpp"
#include "SDK/FN_NiagaraShader_parameters.hpp"
#include "SDK/FN_PropertyPath_structs.hpp"
#include "SDK/FN_PropertyPath_classes.hpp"
#include "SDK/FN_PropertyPath_parameters.hpp"
#include "SDK/FN_DeveloperSettings_structs.hpp"
#include "SDK/FN_DeveloperSettings_classes.hpp"
#include "SDK/FN_DeveloperSettings_parameters.hpp"
#include "SDK/FN_SlateCore_structs.hpp"
#include "SDK/FN_SlateCore_classes.hpp"
#include "SDK/FN_SlateCore_parameters.hpp"
#include "SDK/FN_PropertyAccess_structs.hpp"
#include "SDK/FN_PropertyAccess_classes.hpp"
#include "SDK/FN_PropertyAccess_parameters.hpp"
#include "SDK/FN_PacketHandler_structs.hpp"
#include "SDK/FN_PacketHandler_classes.hpp"
#include "SDK/FN_PacketHandler_parameters.hpp"
#include "SDK/FN_PhysicsCore_structs.hpp"
#include "SDK/FN_PhysicsCore_classes.hpp"
#include "SDK/FN_PhysicsCore_parameters.hpp"
#include "SDK/FN_InputCore_structs.hpp"
#include "SDK/FN_InputCore_classes.hpp"
#include "SDK/FN_InputCore_parameters.hpp"
#include "SDK/FN_Slate_structs.hpp"
#include "SDK/FN_Slate_classes.hpp"
#include "SDK/FN_Slate_parameters.hpp"
#include "SDK/FN_AudioPlatformConfiguration_structs.hpp"
#include "SDK/FN_AudioPlatformConfiguration_classes.hpp"
#include "SDK/FN_AudioPlatformConfiguration_parameters.hpp"
#include "SDK/FN_Engine_structs.hpp"
#include "SDK/FN_Engine_classes.hpp"
#include "SDK/FN_Engine_parameters.hpp"
#include "SDK/FN_Foliage_structs.hpp"
#include "SDK/FN_Foliage_classes.hpp"
#include "SDK/FN_Foliage_parameters.hpp"
#include "SDK/FN_MovieScene_structs.hpp"
#include "SDK/FN_MovieScene_classes.hpp"
#include "SDK/FN_MovieScene_parameters.hpp"
#include "SDK/FN_ModularGameplay_structs.hpp"
#include "SDK/FN_ModularGameplay_classes.hpp"
#include "SDK/FN_ModularGameplay_parameters.hpp"
#include "SDK/FN_MovieSceneTracks_structs.hpp"
#include "SDK/FN_MovieSceneTracks_classes.hpp"
#include "SDK/FN_MovieSceneTracks_parameters.hpp"
#include "SDK/FN_FieldSystemEngine_structs.hpp"
#include "SDK/FN_FieldSystemEngine_classes.hpp"
#include "SDK/FN_FieldSystemEngine_parameters.hpp"
#include "SDK/FN_GameplayTags_structs.hpp"
#include "SDK/FN_GameplayTags_classes.hpp"
#include "SDK/FN_GameplayTags_parameters.hpp"
#include "SDK/FN_B_CameraLens_Teleport_structs.hpp"
#include "SDK/FN_B_CameraLens_Teleport_classes.hpp"
#include "SDK/FN_B_CameraLens_Teleport_parameters.hpp"
#include "SDK/FN_CommonInput_structs.hpp"
#include "SDK/FN_CommonInput_classes.hpp"
#include "SDK/FN_CommonInput_parameters.hpp"
#include "SDK/FN_GameplayCameras_structs.hpp"
#include "SDK/FN_GameplayCameras_classes.hpp"
#include "SDK/FN_GameplayCameras_parameters.hpp"
#include "SDK/FN_AnimationCore_structs.hpp"
#include "SDK/FN_AnimationCore_classes.hpp"
#include "SDK/FN_AnimationCore_parameters.hpp"
#include "SDK/FN_AudioMixer_structs.hpp"
#include "SDK/FN_AudioMixer_classes.hpp"
#include "SDK/FN_AudioMixer_parameters.hpp"
#include "SDK/FN_CinematicCamera_structs.hpp"
#include "SDK/FN_CinematicCamera_classes.hpp"
#include "SDK/FN_CinematicCamera_parameters.hpp"
#include "SDK/FN_OnlineSubsystem_structs.hpp"
#include "SDK/FN_OnlineSubsystem_classes.hpp"
#include "SDK/FN_OnlineSubsystem_parameters.hpp"
#include "SDK/FN_AmbientAudio_structs.hpp"
#include "SDK/FN_AmbientAudio_classes.hpp"
#include "SDK/FN_AmbientAudio_parameters.hpp"
#include "SDK/FN_FN_JFly_RadialWind_structs.hpp"
#include "SDK/FN_FN_JFly_RadialWind_classes.hpp"
#include "SDK/FN_FN_JFly_RadialWind_parameters.hpp"
#include "SDK/FN_BP_CameraShake_PortalWarp_Fast_structs.hpp"
#include "SDK/FN_BP_CameraShake_PortalWarp_Fast_classes.hpp"
#include "SDK/FN_BP_CameraShake_PortalWarp_Fast_parameters.hpp"
#include "SDK/FN_NiagaraCore_structs.hpp"
#include "SDK/FN_NiagaraCore_classes.hpp"
#include "SDK/FN_NiagaraCore_parameters.hpp"
#include "SDK/FN_PlatformHelpersLibrary_structs.hpp"
#include "SDK/FN_PlatformHelpersLibrary_classes.hpp"
#include "SDK/FN_PlatformHelpersLibrary_parameters.hpp"
#include "SDK/FN_BP_CameraShake_PortalWarpZoom_structs.hpp"
#include "SDK/FN_BP_CameraShake_PortalWarpZoom_classes.hpp"
#include "SDK/FN_BP_CameraShake_PortalWarpZoom_parameters.hpp"
#include "SDK/FN_GameplayTasks_structs.hpp"
#include "SDK/FN_GameplayTasks_classes.hpp"
#include "SDK/FN_GameplayTasks_parameters.hpp"
#include "SDK/FN_UMG_structs.hpp"
#include "SDK/FN_UMG_classes.hpp"
#include "SDK/FN_UMG_parameters.hpp"
#include "SDK/FN_SoundLibrary_structs.hpp"
#include "SDK/FN_SoundLibrary_classes.hpp"
#include "SDK/FN_SoundLibrary_parameters.hpp"
#include "SDK/FN_Synthesis_structs.hpp"
#include "SDK/FN_Synthesis_classes.hpp"
#include "SDK/FN_Synthesis_parameters.hpp"
#include "SDK/FN_PrimalSwapDetail_structs.hpp"
#include "SDK/FN_PrimalSwapDetail_classes.hpp"
#include "SDK/FN_PrimalSwapDetail_parameters.hpp"
#include "SDK/FN_DataRegistry_structs.hpp"
#include "SDK/FN_DataRegistry_classes.hpp"
#include "SDK/FN_DataRegistry_parameters.hpp"
#include "SDK/FN_Account_structs.hpp"
#include "SDK/FN_Account_classes.hpp"
#include "SDK/FN_Account_parameters.hpp"
#include "SDK/FN_Rejoin_structs.hpp"
#include "SDK/FN_Rejoin_classes.hpp"
#include "SDK/FN_Rejoin_parameters.hpp"
#include "SDK/FN_Hotfix_structs.hpp"
#include "SDK/FN_Hotfix_classes.hpp"
#include "SDK/FN_Hotfix_parameters.hpp"
#include "SDK/FN_Overlay_structs.hpp"
#include "SDK/FN_Overlay_classes.hpp"
#include "SDK/FN_Overlay_parameters.hpp"
#include "SDK/FN_NiagaraAnimNotifies_structs.hpp"
#include "SDK/FN_NiagaraAnimNotifies_classes.hpp"
#include "SDK/FN_NiagaraAnimNotifies_parameters.hpp"
#include "SDK/FN_ClientPilot_structs.hpp"
#include "SDK/FN_ClientPilot_classes.hpp"
#include "SDK/FN_ClientPilot_parameters.hpp"
#include "SDK/FN_MediaUtils_structs.hpp"
#include "SDK/FN_MediaUtils_classes.hpp"
#include "SDK/FN_MediaUtils_parameters.hpp"
#include "SDK/FN_BP_PortalCloser_Pickup_structs.hpp"
#include "SDK/FN_BP_PortalCloser_Pickup_classes.hpp"
#include "SDK/FN_BP_PortalCloser_Pickup_parameters.hpp"
#include "SDK/FN_CommonDialogueRuntime_structs.hpp"
#include "SDK/FN_CommonDialogueRuntime_classes.hpp"
#include "SDK/FN_CommonDialogueRuntime_parameters.hpp"
#include "SDK/FN_ReplicationGraph_structs.hpp"
#include "SDK/FN_ReplicationGraph_classes.hpp"
#include "SDK/FN_ReplicationGraph_parameters.hpp"
#include "SDK/FN_BP_RealityWaveTrigger_structs.hpp"
#include "SDK/FN_BP_RealityWaveTrigger_classes.hpp"
#include "SDK/FN_BP_RealityWaveTrigger_parameters.hpp"
#include "SDK/FN_GameplayAbilities_structs.hpp"
#include "SDK/FN_GameplayAbilities_classes.hpp"
#include "SDK/FN_JsonUtilities_structs.hpp"
#include "SDK/FN_JsonUtilities_classes.hpp"
#include "SDK/FN_JsonUtilities_parameters.hpp"
#include "SDK/FN_AnimGraphRuntime_structs.hpp"
#include "SDK/FN_AnimGraphRuntime_classes.hpp"
#include "SDK/FN_AnimGraphRuntime_parameters.hpp"
#include "SDK/FN_BP_RealityWaveManager_structs.hpp"
#include "SDK/FN_BP_RealityWaveManager_classes.hpp"
#include "SDK/FN_BP_RealityWaveManager_parameters.hpp"
#include "SDK/FN_OnlineSubsystemUtils_structs.hpp"
#include "SDK/FN_OnlineSubsystemUtils_classes.hpp"
#include "SDK/FN_OnlineSubsystemUtils_parameters.hpp"
#include "SDK/FN_BP_PortalCloser_Dummy_structs.hpp"
#include "SDK/FN_BP_PortalCloser_Dummy_classes.hpp"
#include "SDK/FN_BP_PortalCloser_Dummy_parameters.hpp"
#include "SDK/FN_TargetingSystem_structs.hpp"
#include "SDK/FN_TargetingSystem_classes.hpp"
#include "SDK/FN_TargetingSystem_parameters.hpp"
#include "SDK/FN_BlueprintContext_structs.hpp"
#include "SDK/FN_BlueprintContext_classes.hpp"
#include "SDK/FN_BlueprintContext_parameters.hpp"
#include "SDK/FN_NavigationSystem_structs.hpp"
#include "SDK/FN_NavigationSystem_classes.hpp"
#include "SDK/FN_NavigationSystem_parameters.hpp"
#include "SDK/FN_AIModule_structs.hpp"
#include "SDK/FN_AIModule_classes.hpp"
#include "SDK/FN_AIModule_parameters.hpp"
#include "SDK/FN_Party_structs.hpp"
#include "SDK/FN_Party_classes.hpp"
#include "SDK/FN_Party_parameters.hpp"
#include "SDK/FN_Gauntlet_structs.hpp"
#include "SDK/FN_Gauntlet_classes.hpp"
#include "SDK/FN_Gauntlet_parameters.hpp"
#include "SDK/FN_AnimationSharing_structs.hpp"
#include "SDK/FN_AnimationSharing_classes.hpp"
#include "SDK/FN_AnimationSharing_parameters.hpp"
#include "SDK/FN_Niagara_structs.hpp"
#include "SDK/FN_Niagara_classes.hpp"
#include "SDK/FN_Niagara_parameters.hpp"
#include "SDK/FN_CommonUI_structs.hpp"
#include "SDK/FN_CommonUI_classes.hpp"
#include "SDK/FN_CommonUI_parameters.hpp"
#include "SDK/FN_DataAssetDirectory_structs.hpp"
#include "SDK/FN_DataAssetDirectory_classes.hpp"
#include "SDK/FN_DataAssetDirectory_parameters.hpp"
#include "SDK/FN_AnimationBudgetAllocator_structs.hpp"
#include "SDK/FN_AnimationBudgetAllocator_classes.hpp"
#include "SDK/FN_AnimationBudgetAllocator_parameters.hpp"
#include "SDK/FN_PhysXVehicles_structs.hpp"
#include "SDK/FN_PhysXVehicles_classes.hpp"
#include "SDK/FN_PhysXVehicles_parameters.hpp"
#include "SDK/FN_MeshNetwork_structs.hpp"
#include "SDK/FN_MeshNetwork_classes.hpp"
#include "SDK/FN_MeshNetwork_parameters.hpp"
#include "SDK/FN_LiveLinkInterface_structs.hpp"
#include "SDK/FN_LiveLinkInterface_classes.hpp"
#include "SDK/FN_LiveLinkInterface_parameters.hpp"
#include "SDK/FN_CommonUILegacy_structs.hpp"
#include "SDK/FN_CommonUILegacy_classes.hpp"
#include "SDK/FN_CommonUILegacy_parameters.hpp"
#include "SDK/FN_Lobby_structs.hpp"
#include "SDK/FN_Lobby_classes.hpp"
#include "SDK/FN_Lobby_parameters.hpp"
#include "SDK/FN_McpProfileSys_structs.hpp"
#include "SDK/FN_McpProfileSys_classes.hpp"
#include "SDK/FN_McpProfileSys_parameters.hpp"
#include "SDK/FN_Curie_structs.hpp"
#include "SDK/FN_Curie_classes.hpp"
#include "SDK/FN_Curie_parameters.hpp"
#include "SDK/FN_Water_structs.hpp"
#include "SDK/FN_Water_classes.hpp"
#include "SDK/FN_Water_parameters.hpp"
#include "SDK/FN_WebBrowser_structs.hpp"
#include "SDK/FN_WebBrowser_classes.hpp"
#include "SDK/FN_WebBrowser_parameters.hpp"
#include "SDK/FN_PortalDevicePickupWidget_structs.hpp"
#include "SDK/FN_PortalDevicePickupWidget_classes.hpp"
#include "SDK/FN_PortalDevicePickupWidget_parameters.hpp"
#include "SDK/FN_SignificanceManager_structs.hpp"
#include "SDK/FN_SignificanceManager_classes.hpp"
#include "SDK/FN_SignificanceManager_parameters.hpp"
#include "SDK/FN_GameSubCatalog_structs.hpp"
#include "SDK/FN_GameSubCatalog_classes.hpp"
#include "SDK/FN_GameSubCatalog_parameters.hpp"
#include "SDK/FN_BP_RealityWave_structs.hpp"
#include "SDK/FN_BP_RealityWave_classes.hpp"
#include "SDK/FN_BP_RealityWave_parameters.hpp"
#include "SDK/FN_PlayspaceSystem_structs.hpp"
#include "SDK/FN_PlayspaceSystem_classes.hpp"
#include "SDK/FN_PlayspaceSystem_parameters.hpp"
#include "SDK/FN_MediaAssets_structs.hpp"
#include "SDK/FN_MediaAssets_classes.hpp"
#include "SDK/FN_MediaAssets_parameters.hpp"
#include "SDK/FN_GameFeatures_structs.hpp"
#include "SDK/FN_GameFeatures_classes.hpp"
#include "SDK/FN_GameFeatures_parameters.hpp"
#include "SDK/FN_SubtitlesWidgets_structs.hpp"
#include "SDK/FN_SubtitlesWidgets_classes.hpp"
#include "SDK/FN_SubtitlesWidgets_parameters.hpp"
#include "SDK/FN_En_ShellTypes_01_structs.hpp"
#include "SDK/FN_En_ShellTypes_01_classes.hpp"
#include "SDK/FN_En_ShellTypes_01_parameters.hpp"
#include "SDK/FN_FortniteGame_structs.hpp"
#include "SDK/FN_FortniteGame_classes.hpp"
#include "SDK/FN_FortniteGame_parameters.hpp"
#include "SDK/FN_NPC_Pawn_Wildlife_Parent_structs.hpp"
#include "SDK/FN_NPC_Pawn_Wildlife_Parent_classes.hpp"
#include "SDK/FN_NPC_Pawn_Wildlife_Parent_parameters.hpp"

#include "SDK/FN_UACBase_structs.hpp"
#include "SDK/FN_UACBase_classes.hpp"
#include "SDK/FN_UACBase_parameters.hpp"

#include "SDK/FN_Tiered_Chest_Athena_structs.hpp"
#include "SDK/FN_Tiered_Chest_Athena_classes.hpp"
#include "SDK/FN_Tiered_Chest_Athena_parameters.hpp"
#include "SDK/FN_AthenaSupplyDrop_structs.hpp"
#include "SDK/FN_AthenaSupplyDrop_classes.hpp"
#include "SDK/FN_AthenaSupplyDrop_parameters.hpp"


namespace KeyName
{
	//Insert
	inline SDK::FName Insert;
	inline SDK::FKey ToggleKey;

	//Left Mouse
	inline SDK::FName LeftMouse;
	inline SDK::FKey Left;

	//Right Mouse
	inline SDK::FName RightMouse;
	inline SDK::FKey Right;

	//CapsLock
	inline SDK::FName CapsLock;
	inline SDK::FKey CapsLockButton;

	//Shift
	inline SDK::FName Shift;
	inline SDK::FKey ShiftButton;

	//F1
	inline SDK::FName F1;
	inline SDK::FKey F1Button;

	//F2
	inline SDK::FName F2;
	inline SDK::FKey F2Button;

	//F3
	inline SDK::FName F3;
	inline SDK::FKey F3Button;

	//F4
	inline SDK::FName F4;
	inline SDK::FKey F4Button;

	//F5
	inline SDK::FName F5;
	inline SDK::FKey F5Button;

	//F6
	inline SDK::FName F6;
	inline SDK::FKey F6Button;

	//F7
	inline SDK::FName F7;
	inline SDK::FKey F7Button;

	//F8
	inline SDK::FName F8;
	inline SDK::FKey F8Button;

	//F9
	inline SDK::FName F9;
	inline SDK::FKey F9Button;

	//F10
	inline SDK::FName F10;
	inline SDK::FKey F10Button;

	//F12
	inline SDK::FName F12;
	inline SDK::FKey F12Button;

}

inline bool KeyNames()
{
	//Insert
	KeyName::Insert.ComparisonIndex = 560172;
	KeyName::Insert.Number = 0;
	KeyName::ToggleKey.KeyName = KeyName::Insert;

	//Left Mouse
	KeyName::LeftMouse.ComparisonIndex = 560071;
	KeyName::LeftMouse.Number = 0;
	KeyName::Left.KeyName = KeyName::LeftMouse;

	//Right Mouse
	KeyName::RightMouse.ComparisonIndex = 560080;
	KeyName::RightMouse.Number = 0;
	KeyName::Right.KeyName = KeyName::RightMouse;

	//CapsLock
	KeyName::CapsLock.ComparisonIndex = 560131;
	KeyName::CapsLock.Number = 0;
	KeyName::CapsLockButton.KeyName = KeyName::CapsLock;

	//Shift
	KeyName::CapsLock.ComparisonIndex = 560379;
	KeyName::CapsLock.Number = 0;
	KeyName::CapsLockButton.KeyName = KeyName::Shift;

	//F1
	KeyName::F1.ComparisonIndex = 560341;
	KeyName::F1.Number = 0;
	KeyName::F1Button.KeyName = KeyName::F1;

	//F2
	KeyName::F2.ComparisonIndex = 560343;
	KeyName::F2.Number = 0;
	KeyName::F2Button.KeyName = KeyName::F2;

	//F3
	KeyName::F3.ComparisonIndex = 560345;
	KeyName::F3.Number = 0;
	KeyName::F3Button.KeyName = KeyName::F3;

	//F4
	KeyName::F4.ComparisonIndex = 560347;
	KeyName::F4.Number = 0;
	KeyName::F4Button.KeyName = KeyName::F4;

	//F5
	KeyName::F5.ComparisonIndex = 560349;
	KeyName::F5.Number = 0;
	KeyName::F5Button.KeyName = KeyName::F5;

	//F6
	KeyName::F6.ComparisonIndex = 560351;
	KeyName::F6.Number = 0;
	KeyName::F6Button.KeyName = KeyName::F6;

	//F7
	KeyName::F7.ComparisonIndex = 560353;
	KeyName::F7.Number = 0;
	KeyName::F7Button.KeyName = KeyName::F7;

	//F8
	KeyName::F8.ComparisonIndex = 560355;
	KeyName::F8.Number = 0;
	KeyName::F8Button.KeyName = KeyName::F8;

	//F9
	KeyName::F9.ComparisonIndex = 560357;
	KeyName::F9.Number = 0;
	KeyName::F9Button.KeyName = KeyName::F9;

	//F10
	KeyName::F10.ComparisonIndex = 560359;
	KeyName::F10.Number = 0;
	KeyName::F10Button.KeyName = KeyName::F10;


	//F12
	KeyName::F12.ComparisonIndex = 560365;
	KeyName::F12.Number = 0;
	KeyName::F12Button.KeyName = KeyName::F12;

	return 0;
}

enum eBone
{
	BONE_NULL_1 = 0,
	BONE_NULL_2 = 1,
	BONE_PELVIS_1 = 2,
	BONE_PELVIS_2 = 3,
	BONE_PELVIS_3 = 4,
	BONE_TORSO = 5,

	BONE_CHEST_LOW = 6,
	BONE_CHEST = 7,

	// -------------------------

	BONE_CHEST_LEFT = 8,

	BONE_L_SHOULDER_1 = 9,
	BONE_L_ELBOW = 10,

	BONE_L_HAND_ROOT_1 = 11,

	BONE_L_FINGER_1_ROOT = 12,
	BONE_L_FINGER_1_LOW = 13,
	BONE_L_FINGER_1 = 14,
	BONE_L_FINGER_1_TOP = 15,

	BONE_L_FINGER_2_ROOT = 16,
	BONE_L_FINGER_2_LOW = 17,
	BONE_L_FINGER_2 = 18,
	BONE_L_FINGER_2_TOP = 19,

	BONE_L_FINGER_3_ROOT = 20,
	BONE_L_FINGER_3_LOW = 21,
	BONE_L_FINGER_3 = 22,
	BONE_L_FINGER_3_TOP = 23,

	BONE_L_FINGER_4_ROOT = 24,
	BONE_L_FINGER_4_LOW = 25,
	BONE_L_FINGER_4_ = 26,
	BONE_L_FINGER_4_TOP = 27,

	BONE_L_THUMB_ROOT = 28,
	BONE_L_THUMB_LOW = 29,
	BONE_L_THUMB = 30,

	BONE_L_HAND_ROOT_2 = 31,
	BONE_L_WRIST = 32,
	BONE_L_ARM_LOWER = 33,

	BONE_L_SHOULDER_2 = 34,

	BONE_L_ARM_TOP = 35,

	// -------------------------

	BONE_CHEST_TOP_1 = 36,

	// -------------------------

	BONE_CHEST_RIGHT = 37,

	BONE_R_ELBOW = 38,

	BONE_R_HAND_ROOT_1 = 39,

	BONE_R_FINGER_1_ROOT = 40,
	BONE_R_FINGER_1_LOW = 41,
	BONE_R_FINGER_1 = 42,
	BONE_R_FINGER_1_TOP = 43,

	BONE_R_FINGER_2_ROOT = 44,
	BONE_R_FINGER_2_LOW = 45,
	BONE_R_FINGER_2 = 46,
	BONE_R_FINGER_2_TOP = 47,

	BONE_R_FINGER_3_ROOT = 48,
	BONE_R_FINGER_3_LOW = 49,
	BONE_R_FINGER_3 = 50,
	BONE_R_FINGER_3_TOP = 51,

	BONE_R_FINGER_4_ROOT = 52,
	BONE_R_FINGER_4_LOW = 53,
	BONE_R_FINGER_4_ = 54,
	BONE_R_FINGER_4_TOP = 55,

	BONE_R_THUMB_ROOT = 56,
	BONE_R_THUMB_LOW = 57,
	BONE_R_THUMB = 58,

	BONE_R_HAND_ROOT = 59,
	BONE_R_WRIST = 60,
	BONE_R_ARM_LOWER = 61,

	BONE_R_SHOULDER = 62,

	BONE_R_ARM_TOP = 63,

	// -------------------------

	BONE_CHEST_TOP_2 = 64,

	BONE_NECK = 65,
	BONE_HEAD = 66,

	// -------------------------

	BONE_L_LEG_ROOT = 67,
	BONE_L_KNEE = 68,
	BONE_L_FOOT_ROOT = 69,
	BONE_L_SHIN = 70,
	BONE_L_FOOT_MID = 71,
	BONE_L_FOOT_LOW = 72,
	BONE_L_THIGH = 73,

	// -------------------------

	BONE_R_LEG_ROOT = 74,
	BONE_R_KNEE = 75,
	BONE_R_FOOT_ROOT = 76,
	BONE_R_SHIN = 77,
	BONE_R_FOOT_MID = 78,
	BONE_R_FOOT_LOW = 79,
	BONE_R_THIGH = 80,

	// -------------------------

	BONE_NULL_3 = 81,
	BONE_MISC_L_FOOT = 82,
	BONE_MISC_R_FOOT = 83,
	BONE_NULL_4 = 84,
	BONE_MISC_R_HAND_1 = 85,
	BONE_MISC_L_HAND = 86,
	BONE_MISC_R_HAND_2 = 87,
};

namespace options {


	inline bool InVehicle;

	namespace Aim {

		inline bool AimLock = false;
		inline bool memory = true;
		inline bool mouse = true;
		inline bool silent = true;

		inline bool RandomAimBone = false;
		inline bool head = true;
		inline bool neck = false;
		inline bool chest = false;
		inline bool pelvis = false;
		inline bool visible_check = true;
		inline bool drawfov = true;
		inline float fov_range = 160.f;
		inline bool AimSmooting = false;
		inline float smooth = 9.0f;
		inline bool SmoothAim = false;
		inline float dist_limit = 200.0f;


		inline bool IsLocked = true;
		inline int32_t nBone = 3;
		inline int32_t nKey = 1;
	}

	namespace Visuals {

		inline bool Player = true;
		inline bool SelfEsP = true;
		inline bool BoxESP = false;
		inline bool CornerBox = true;
		inline bool Dbox = false;
		inline bool skeleton = true;
		inline bool loot = false;
		inline bool chests = true;
		inline bool vehicles = true;
		inline bool snaplines = false;
		inline bool current_weapon = true;
		inline bool NameESP = true;
		inline bool AmmoCount = false;
		inline bool Distance = true;
		inline bool CurrentWeapon = true;
		inline bool World = true;
		inline bool Radar = true;
		inline int ChestsDist = 250;
		inline bool Crosshair = true;
		inline bool AimLine = true; 
		inline INT MinWeaponTier = 2;
		//snaplines
		inline int AimPos;
	}

	namespace Misc {
		inline bool BoatFly = false;
		inline bool NoReload = false;
		inline bool InstantEquip = true;
		inline bool	AlwaysADS = false;
		inline bool InstaRevive = false;
		inline bool SkyDive = false;
		inline float FOV = 80.0f;
		inline float RapidSpeed = 10.0f;
		inline float BoatSpeedMulti = 2.f;
		inline bool FovChanger;
		inline bool bNoBloom = false;
		inline bool NoSpread = false;
		inline bool RapidFire = false;
		inline bool BoatSpeed = false;
		inline bool BoatInfiniteBoost = false;
	}




	namespace colours {


		inline SDK::FLinearColor BoxColour{ 255.f, 0.f, 0.f, 1.f };
		inline SDK::FLinearColor ChestColour{ 255.f, 255.f, 255.f, 255.f };
		inline SDK::FLinearColor LLamaColour{ 255.f, 255.f, 255.f, 255.f };
		inline SDK::FLinearColor ShadowColour{ 0.f, 0.f, 0.f, 255.f };
	}
}
