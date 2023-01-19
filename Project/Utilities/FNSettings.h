#pragma once

// Include Base
#include "../Includes.h"
#include "Definitions.h"

// Include ImGui
#include "Includes/IncludeImGui.h"

// Cheat Settings
enum EAimTargetBones {
    Head,
    Chest,
    Feet
};
enum EServerStatus {
    Loading,
    Offline,
    Online
};
enum EExitCodes {
    None,
    UnknownError,
    NoInternet,
    DebuggerDetected,
    GameNotStarted,
    MoreThanOneInstance,
    DirectXObjectFailed,
    DirectXDeviceFailed,
    NetworkLoadingFailed,
    LicenseExpiredWhileRunning,
    BlacklistedSoftwareDetected,
};
struct FNSensitivitySettings {
    FLOAT m_flSensitivityX = 13.0f;
    FLOAT m_flSensitivityY = 13.0f;
    FLOAT m_flTargetingSensitivity = 30.0f;
};
struct FNAimSettings {
    bool m_bHardSmoothed = false;
    bool m_bEnabled = true;
    bool m_bUseADS = true;
    int m_iFOV = 300;
    int m_iADSFOV = 300;
    bool m_rmousefov = false;
    int m_iNFOV = m_iFOV;
    FLOAT m_flSmoothing = 0.20f;
    FLOAT m_flADSSmoothing = 0.20f;
    bool m_bAlwaysOn = false;
    int m_kbAimBind;
    int m_kbAimBind2;
    int m_kbADSBind = m_kbAimBind;
    int m_kbADSBind2 = m_kbAimBind2;
    int m_kbAutoShootBind;
    EAimTargetBones m_eAimTargetBone = EAimTargetBones::Head;
    int m_iAntiRecoilPixels = 0;
    bool m_bAdaptiveSmoothing = true;
};
struct FNInterfaceSettings{
    int m_kbMenuBind = VK_INSERT;
    bool m_bOverlayBoxes = false;
    bool m_bOverlayBoxesRed = false;
    bool m_bShowFOV = false;
    bool m_bCycleRGB = false;
    bool m_bShowPreview = false;
    bool m_AnimateBackground = true;
    FLOAT m_flCycleRGBSpeed = 0.5f;
    bool m_bUseDiscordRPC = false;
    int m_iRounding = 15;
    int m_iORounding = 15;
    FLOAT m_flUIHue = 0.552f;
    FLOAT m_flUISaturation = 1.000f;
    FLOAT m_flUIBrightness = 1.000f;
    ImVec4 m_cDetailColor = ImVec4(0.25, 0.25f, 0.25f, 1.00f);
    bool m_bIncreaseFPS = false;
    bool m_bShowDebugMenu = false;
    bool m_bShowFPS = false;
    int m_iFPSCap = 70;
    bool m_bHideOverlay = false;
    bool m_bShowAvoidance = false;
    bool m_bShowDetectionRange = false;
};
struct FNSettings {
    FNAimSettings Aim;
    FNInterfaceSettings Interface;
    FNSensitivitySettings Sensitivity;
};

FNSettings FSettings;