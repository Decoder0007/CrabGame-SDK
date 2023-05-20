#ifndef CRAB_GAME_H
#define CRAB_GAME_H

#pragma once
#include "CrabHook.h"

namespace AlertPrefab {
    crabaddr SetText = 0xCCD9F0;
    craboffset text = 0x18;
};

namespace Alerts {
    crabaddr Awake = 0xADC5D0;
    crabaddr NewAlert = 0xADC620;
    craboffset alert = 0x18;
    craboffset content = 0x20;
};

namespace AssignSharedObjectID {
    crabaddr AssignIDs = 0x13A6B60;
    crabaddr GetDictionary = 0x13A6DA0;
    crabaddr Contains = 0x13A6D10;
    crabaddr RemoveObject = 0x13A6E00;
    crabaddr AddObject = 0x13A6AD0;
};

namespace AudioFreqController {
    crabaddr Update = 0x12AAD40;
    crabaddr DamagePlayer = 0x2257B0;
    craboffset filter = 0x18;
};

namespace BlockManager {
    crabaddr Awake = 0x1507070;
    crabaddr RemovePiece = 0x1507650;
    crabaddr MakePieces = 0x1507340;
    crabaddr GetRandomSpawnPoint = 0x1507160;
    crabaddr GetRandomPieceIndex = 0x1507100;
    craboffset pieceDistance = 0x18;
    craboffset piece = 0x20;
    craboffset pieces = 0x28;
    craboffset spawnIndexes = 0x30;
    craboffset startPiece = 0x38;
};

namespace BoulderController {
    crabaddr Awake = 0x17382E0;
    crabaddr SpawnBoulder = 0x1738350;
    craboffset spawnPoints = 0x18;
    craboffset boulder = 0x20;
};

namespace BouncePlayer {
    crabaddr OnTriggerEnter = 0x15A5F90;
    crabaddr OnCollisionEnter = 0x15A5970;
    craboffset cooldown = 0x18;
    craboffset force = 0x1C;
    craboffset multiplayer = 0x20;
    craboffset upForce = 0x24;
    craboffset bounceDamage = 0x28;
    craboffset triggerDir = 0x2C;
    craboffset triggerUsePlayerPosVsObjectPos = 0x38;
    craboffset resetPlayerDownVelocity = 0x39;
    craboffset disable = 0x3A;
};

namespace BulletHit {
    crabaddr SetHit = 0x173C8E0;
    craboffset bulletDecal = 0x18;
    craboffset bloodDecal = 0x20;
    craboffset objectHitParticles = 0x28;
    craboffset playerHitParticles = 0x30;
};

namespace BulletPrefab {
    crabaddr SetBullet = 0x100D6F0;
    craboffset bulletPs = 0x20;
    craboffset smokePs = 0x28;
    craboffset hitPrefab = 0x30;
};

namespace BustlingButtonInteract {
    crabaddr Press = 0x159FAB0;
    crabaddr TryInteract = 0x159FBA0;
    crabaddr LocalInteract = 0x2257B0;
    crabaddr ServerInteract = 0x2257B0;
    crabaddr Awake = 0x159F980;
    crabaddr CanInteract = 0x39F120;
    crabaddr AllInteract = 0x2257B0;
    crabaddr Update = 0x159FCE0;
    craboffset buttonId = 0x20;
    craboffset active = 0x24;
    craboffset moveSfx = 0x28;
    craboffset btnSfx = 0x30;
};

namespace ButtonSfx {
    crabaddr OnPointerEnter = 0x2257B0;
    crabaddr OnPointerClick = 0x13A68F0;
};

namespace ButtonTimer {
    crabaddr SetState = 0xEBE120;
    crabaddr UpdatePlayerText = 0xEC8CF0;
    crabaddr SlowUpdate = 0xEBE210;
    crabaddr Start = 0xEBE560;
    craboffset timerText = 0x18;
    craboffset nowText = 0x20;
    craboffset nextText = 0x28;
    craboffset color = 0x30;
    craboffset green = 0x38;
    craboffset red = 0x48;
};

namespace CameraController {
    crabaddr OnDestroy = 0x1402CA0;
    crabaddr Start = 0x1402CF0;
    craboffset cameras = 0x18;
    craboffset cameraSwitchTime = 0x24;
    craboffset music = 0x28;
    craboffset clapping = 0x30;
    craboffset money = 0x38;
    craboffset animator = 0x40;
};

namespace CameraMove {
    crabaddr Update = 0x147B850;
    craboffset target = 0x18;
    craboffset lerp = 0x20;
    craboffset speed = 0x24;
    craboffset lookAtTarget = 0x28;
};

namespace CameraRecoil {
    crabaddr Update = 0x10968E0;
    crabaddr AddRecoil = 0x10909F0;
};

namespace CameraShaker {
    crabaddr GunShake = 0x11EB1D0;
    crabaddr DamageShake = 0x11EB110;
    crabaddr PushShake = 0x11EB300;
    crabaddr HeavyShake = 0x11EB270;
    crabaddr ShakeWithPresetAndRatio = 0x11EB390;
    crabaddr ShakeWithPreset = 0x11EB400;
    crabaddr Update = 0x2257B0;
    crabaddr Awake = 0x11EB0A0;
    craboffset damagePreset = 0x18;
    craboffset gunPreset = 0x20;
    craboffset pushPreset = 0x28;
    craboffset heavyShake = 0x30;
};

namespace ChangeFov {
    crabaddr Update = 0x1251B50;
    craboffset camera = 0x18;
    craboffset desiredFov = 0x20;
};

namespace Chatbox {
    crabaddr Awake = 0xEF4E30;
    crabaddr RemoveWhitespace = 0xEF5330;
    crabaddr RemoveRichText = 0xEF52D0;
    crabaddr Update = 0xEF6690;
    crabaddr ForceMessage = 0xEF5140;
    crabaddr HasConsecutiveChars = 0xEF5220;
    crabaddr AppendMessage = 0xEF49B0;
    crabaddr SendMessage = 0xEF54A0;
    craboffset overlay = 0x18;
    craboffset inputField = 0x20;
    craboffset messages = 0x28;
    craboffset localPlayer = 0x30;
    craboffset onlinePlayer = 0x40;
    craboffset deadPlayer = 0x50;
    craboffset server = 0x60;
    craboffset profanityList = 0x90;
};

namespace CheckSfx {
    crabaddr Awake = 0x2257B0;
    crabaddr SlowUpdate = 0x2257B0;
    craboffset sfx1 = 0x18;
    craboffset sfx2 = 0x20;
};

namespace CinematicCamera {
    crabaddr Awake = 0x146DE10;
    crabaddr Update = 0x146DEB0;
    craboffset speed = 0x18;
    craboffset size = 0x1C;
    craboffset frequency = 0x20;
};

namespace CircleRatioUI {
    crabaddr Update = 0x14E0100;
    crabaddr SetRatio = 0x14DDF20;
    craboffset circle = 0x18;
    craboffset text = 0x20;
    craboffset maxText = 0x28;
    craboffset useTextEasing = 0x44;
};

namespace ClientHandle {
    crabaddr SpectatorSpawn = 0xD413F0;
    crabaddr KingScores = 0xD3E740;
    crabaddr SyncObject = 0xD417F0;
    crabaddr SpectatingWho = 0xD410A0;
    crabaddr GameModeAlert = 0xD3DAE0;
    crabaddr LoadMap = 0xD3E920;
    crabaddr ReceiveSerializedDrop = 0xD40840;
    crabaddr RespawnPlayer = 0xD40AC0;
    crabaddr SendToLobby = 0xD40BB0;
    crabaddr StandoffUpdate = 0xD41560;
    crabaddr BlockCrush = 0xD3CD00;
    crabaddr ShowWinner = 0xD40DD0;
    crabaddr GameSpawnPlayer = 0xD3DE20;
    crabaddr TileTeams = 0xD41970;
    crabaddr ButtonSetNextPlayer = 0xD3CE60;
    crabaddr StandoffToggle = 0xD414B0;
    crabaddr MoneyUpdate = 0xD3F640;
    crabaddr AllReadyPlayers = 0xD3CB00;
    crabaddr FallingBlocks = 0xD3D740;
    crabaddr GiveHat = 0xD3E0E0;
    crabaddr StartGame = 0xD41670;
    crabaddr PlayerPosition = 0xD3FF20;
    crabaddr LobbyStart = 0xD3F150;
    crabaddr GameOver = 0xD3DD20;
    crabaddr LobbyMapUpdate = 0xD3F040;
    crabaddr FreezePlayers = 0xD3DA80;
    crabaddr UseItem = 0xD4AF00;
    crabaddr GameStartedCooldown = 0xD3DFC0;
    crabaddr PlayerDied = 0xD3FB70;
    crabaddr Interact = 0xD3E530;
    crabaddr HatScores = 0xD3E350;
    crabaddr CrabAnimation = 0xD3CFE0;
    crabaddr WaitingReady = 0xD4B310;
    crabaddr CrabHp = 0xD3D160;
    crabaddr SpawnBoulder = 0xD40F30;
    crabaddr ReceiveChatMessage = 0xD402A0;
    crabaddr ButtonPressed = 0xD3CD90;
    crabaddr Ping = 0xD3F810;
    crabaddr ButtonState = 0xD3CF30;
    crabaddr GlassPieces = 0xD3E1B0;
    crabaddr GameModeState = 0xD3DB60;
    crabaddr PingPong = 0x2257B0;
    crabaddr ForceGiveItem = 0xD3D7F0;
    crabaddr PlayerRotation = 0xD400E0;
    crabaddr PlayerPings = 0xD3FD70;
    crabaddr LoadingState = 0xD3EE70;
    crabaddr ForceRemoveItem = 0xD3D990;
    crabaddr TileUpdate = 0xD41AE0;
    crabaddr PunchPlayer = 0xD40190;
    crabaddr ServerRequestsCosmetics = 0xD40C60;
    crabaddr PlayerActiveItem = 0xD3F910;
    crabaddr SyncClock = 0xD417C0;
    crabaddr PlayerDamage = 0xD3FAC0;
    crabaddr ToggleLights = 0xD41C00;
    crabaddr MakeSeeker = 0xD3F570;
    crabaddr RedLight = 0xD409E0;
    crabaddr SetBomber = 0xD40D00;
    crabaddr VoiceData = 0xD4B210;
    crabaddr PlayerReload = 0xD3FFD0;
    crabaddr CrabTarget = 0xD3D220;
    crabaddr StrobeLights = 0xD41730;
    crabaddr SpawnCrabBall = 0xD40FA0;
    crabaddr LobbyVisualsChangeColor = 0xD3F470;
    crabaddr LoadingSendIntoGame = 0xD3ED60;
    crabaddr LobbyClosed = 0xD3EEF0;
    crabaddr ReceiveOtherPlayerDrop = 0xD40540;
    crabaddr CrabDifficulty = 0xD3D0A0;
    crabaddr GameModeTimer = 0xD3DC30;
    crabaddr ReceiveCosmetics = 0xD403E0;
    crabaddr DropItem = 0xD3D2E0;
    crabaddr PlayerAnimation = 0xD3FA10;
    crabaddr PhysicsObjectSnapshot = 0xD3F6B0;
    crabaddr LobbySettingsUpdate = 0xD3F0D0;
    crabaddr GetPieces = 0xD3E030;
    crabaddr DropMoney = 0xD3D510;
    crabaddr TagPlayer = 0xD418A0;
    crabaddr PieceFall = 0xD3F760;
};

namespace ClientPackets {
};

namespace ClientSend {
    crabaddr RequestColor = 0x1263260;
    crabaddr SendReceivedDrop = 0x1263B00;
    crabaddr StartedLoading = 0x1263F70;
    crabaddr HandShake = 0x1261E30;
    crabaddr PhysicsObjectSnapshot = 0x12621A0;
    crabaddr GameRequestAllPlayers = 0x1261BD0;
    crabaddr LoadingRequestEnterGame = 0x1262080;
    crabaddr SendProximityVoice = 0x12639A0;
    crabaddr DamagePlayer = 0x1261900;
    crabaddr RequestFreezeTime = 0x12633A0;
    crabaddr SendSerializedInventory = 0x1263C60;
    crabaddr VoiceChatOnOrOff = 0x1269D30;
    crabaddr PlayerRotation = 0x1262B70;
    crabaddr TryDropItem = 0x1264310;
    crabaddr PingPong = 0x1262390;
    crabaddr TryBuyItem = 0x12641D0;
    crabaddr PingServer = 0x12624B0;
    crabaddr UseItem = 0x1269BC0;
    crabaddr PressButton = 0x1262CE0;
    crabaddr GameModeLoaded = 0x1261AB0;
    crabaddr ReceivedDrop = 0x1262F90;
    crabaddr PlayerReload = 0x1262A30;
    crabaddr TryInteract = 0x1264490;
    crabaddr PunchPlayer = 0x1262E20;
    crabaddr SyncObject = 0x1264090;
    crabaddr RequestGameStartedCooldown = 0x12634C0;
    crabaddr SendSpectating = 0x1263DC0;
    crabaddr SendChatMessage = 0x1263720;
    crabaddr SendActiveItem = 0x12635E0;
    crabaddr DamageCrab = 0x12617A0;
    crabaddr GameRequestToSpawn = 0x1261CF0;
    crabaddr LoadMapRequest = 0x1261F60;
    crabaddr PlayerDied = 0x1262750;
    crabaddr PlayerPosition = 0x12628C0;
    crabaddr PlayerAnimation = 0x12625F0;
    crabaddr SendClientPing = 0x1263860;
    craboffset packetsSent = 0x0;
    craboffset bytesSent = 0x4;
};

namespace CombatUtility {
    crabaddr Awake = 0x11BE1A0;
    crabaddr DamageNumbers = 0x11BE1F0;
    crabaddr HurtboxTagToDamageMultiplier = 0x11BE310;
    craboffset damageNumbers = 0x18;
    craboffset hitMarker = 0x20;
};

namespace ControlSetting {
    crabaddr SetKey = 0xD66150;
    crabaddr SetSetting = 0xD66190;
    crabaddr StartListening = 0xD66220;
    craboffset keyText = 0x28;
    craboffset currentKey = 0x30;
};

namespace CosmeticItem {
    craboffset itemdefid = 0x18;
    craboffset name = 0x20;
    craboffset icon = 0x38;
    craboffset mesh = 0x40;
    craboffset materials = 0x48;
    craboffset materialToChangeColorOn = 0x50;
    craboffset exchangeItemDefId = 0x54;
    craboffset hatOffset = 0x58;
    craboffset hatThresholdBeforeOffset = 0x64;
    craboffset ignoreOffset = 0x70;
};

namespace CreditsUI {
    crabaddr OpenLink = 0xD67F70;
};

namespace Crosshair {
    crabaddr Update = 0x17FE8E0;
    craboffset left = 0x20;
    craboffset right = 0x28;
    craboffset top = 0x30;
    craboffset bot = 0x38;
    craboffset dotSize = 0x44;
    craboffset width = 0x48;
    craboffset length = 0x4C;
    craboffset gap = 0x50;
};

namespace CurrentSettings {
    crabaddr Awake = 0x104F070;
    crabaddr Start = 0x104F190;
    crabaddr InitSettings = 0x104F190;
    crabaddr UpdateSave = 0x1050E40;
    crabaddr UpdateCamShake = 0x104F540;
    crabaddr UpdateSens = 0x1052F30;
    crabaddr UpdateInputDelay = 0x10501D0;
    crabaddr UpdateFov = 0x104FBA0;
    crabaddr UpdateInverted = 0x10502D0;
    crabaddr UpdateGrass = 0x104FF50;
    crabaddr UpdateTutorial = 0x1053730;
    crabaddr UpdateChat = 0x104F680;
    crabaddr UpdateStreamerMode = 0x1053550;
    crabaddr UpdateHoldCrouch = 0x1050090;
    crabaddr UpdateShadowQuality = 0x1053270;
    crabaddr UpdateShadowResolution = 0x1053360;
    crabaddr UpdateShadowCascades = 0x1053080;
    crabaddr UpdateShadowDistance = 0x1053170;
    crabaddr UpdateTextureQuality = 0x1053630;
    crabaddr UpdateAntiAliasing = 0x104F2D0;
    crabaddr UpdateSoftParticles = 0x1053450;
    crabaddr UpdateBloom = 0x104F410;
    crabaddr UpdateMotionBlur = 0x1050940;
    crabaddr UpdateAO = 0x104F1A0;
    crabaddr UpdateResolution = 0x1050C30;
    crabaddr UpdateFullscreen = 0x104FE50;
    crabaddr UpdateFullscreenMode = 0x104FD60;
    crabaddr UpdateVSync = 0x1053830;
    crabaddr UpdateMaxFps = 0x1050470;
    crabaddr UpdateVolume = 0x1053D20;
    crabaddr UpdateMusic = 0x1050A70;
    crabaddr UpdateVoip = 0x1053920;
    crabaddr UpdateMicSetting = 0x1050560;
    crabaddr UpdateDeaf = 0x104F7F0;
    craboffset cameraShake = 0x0;
    craboffset grass = 0x1;
    craboffset invertedHor = 0x2;
    craboffset invertedVer = 0x3;
    craboffset sensMultiplier = 0x18;
    craboffset fov = 0x1C;
    craboffset tutorial = 0x20;
    craboffset holdCrouch = 0x4;
    craboffset volume = 0x8;
    craboffset music = 0xC;
    craboffset voip = 0x10;
    craboffset micSetting = 0x14;
    craboffset deaf = 0x24;
    craboffset micDevice = 0x28;
    craboffset lastSentVcOn = 0x20;
};

namespace DamageNumbers {
    crabaddr Update = 0xD3A330;
    crabaddr SetDamage = 0xD38670;
    crabaddr Start = 0xD38700;
    craboffset text = 0x18;
};

namespace DebugNet {
    crabaddr ToggleConsole = 0x1287640;
    crabaddr Update = 0x128EF70;
    crabaddr Start = 0x1287480;
    craboffset fps = 0x18;
    craboffset console = 0x20;
    craboffset r = 0x0;
};

namespace DebugSharedObjects {
    crabaddr Update = 0x134AF30;
    craboffset text = 0x18;
};

namespace Decals {
    crabaddr Awake = 0x1174650;
    craboffset decalPrefab = 0x18;
    crabaddr Decal = 0x21FCC0;
    craboffset material = 0x10;
    craboffset size = 0x18;
};

namespace DestroyObject {
    crabaddr Start = 0x142BD20;
    craboffset time = 0x18;
};

namespace DetectItems {
    crabaddr Awake = 0xBD7D30;
    craboffset whatIsItems = 0x18;
    craboffset cam = 0x20;
    craboffset currentlyHighlighted = 0x28;
    craboffset outlineMat = 0x30;
};

namespace DetectUnderWater {
    crabaddr OnTriggerExit = 0x107DA20;
    crabaddr OnTriggerEnter = 0x107D8F0;
};

namespace DiffuseAudio {
    crabaddr Awake = 0x11E3B10;
    crabaddr Update = 0x11EAFA0;
    crabaddr SlowUpdate = 0x11E3C20;
    craboffset muteStartVolume = 0x24;
    craboffset diffusedMinVolume = 0x28;
    craboffset source = 0x30;
    craboffset filter = 0x38;
    craboffset whatIsHitable = 0x48;
};

namespace DisplayMic {
    crabaddr Start = 0x11BE0A0;
    craboffset mic = 0x18;
};

namespace DisplayNameUI {
    crabaddr SetName = 0xCCD9F0;
    crabaddr Show = 0x15F2320;
    crabaddr Awake = 0x15F22A0;
    crabaddr Hide = 0x15F22E0;
    craboffset nameText = 0x18;
};

namespace DissonanceManager {
    crabaddr JoinedLobby = 0x11EE6E0;
    crabaddr PeerJoinedLobby = 0x11EE720;
    crabaddr Awake = 0x11EE560;
    crabaddr PlayerDied = 0x11EE780;
    crabaddr ResetDissonance = 0x11EE810;
    crabaddr PeerLeftLobby = 0x11EE760;
    crabaddr Start = 0x11EE8A0;
    crabaddr CreatedLobby = 0x11EE660;
    craboffset dissonanceP2p = 0x18;
    craboffset comms = 0x20;
    craboffset dissonanceManager = 0x28;
};

namespace DissonancePlayer {
    crabaddr OnDisable = 0x17F4F80;
    crabaddr Setup = 0x17F5010;
    crabaddr SetSphereRadius = 0x17F6040;
    crabaddr OnEnable = 0x2257B0;
    craboffset local = 0x18;
    craboffset isTracking = 0x19;
    craboffset isLocal = 0x1A;
    craboffset playerId = 0x20;
    craboffset orientation = 0x28;
    craboffset pm = 0x30;
    craboffset sphereCollider = 0x38;
    craboffset comms = 0x40;
    craboffset maxRadius = 0x48;
    craboffset minRadius = 0x4C;
    craboffset maxPlayers = 0x50;
    craboffset minPlayers = 0x54;
    craboffset currentPlayers = 0x58;
};

namespace Dorm {
    crabaddr Start = 0x11BEED0;
    craboffset lobbyObjects = 0x18;
    craboffset lightsObjects = 0x20;
    craboffset button = 0x28;
};

namespace DropdownSetting {
    crabaddr ApplySetting = 0x12E6EE0;
    crabaddr SetSettings = 0x12E6FE0;
    crabaddr Scroll = 0xD68030;
    crabaddr ApplyMic = 0x2257B0;
    crabaddr UpdateResolution = 0x12E7640;
    craboffset dropdown = 0x28;
    craboffset settingText = 0x30;
};

namespace EffectManager {
    crabaddr Awake = 0x15F9930;
    crabaddr Start = 0x15F9A60;
    craboffset tagFx = 0x18;
    craboffset effectSeed = 0x0;
};

namespace EnableAudio {
    crabaddr Awake = 0x124F630;
    craboffset audio = 0x18;
    craboffset time = 0x20;
};

namespace EnableDepthBuffer {
    crabaddr Update = 0xBD1760;
    craboffset m_camera = 0x18;
};

namespace EscapeUI {
    crabaddr Update = 0x17FF470;
    craboffset backBtn = 0x18;
};

namespace ExplodePlayer {
    crabaddr Start = 0x1595FF0;
    craboffset bodyParts = 0x18;
    craboffset force = 0x20;
};

namespace FitToParentUI {
    crabaddr Update = 0x17807E0;
    crabaddr Awake = 0x2257B0;
    craboffset text = 0x18;
    craboffset rect = 0x20;
};

namespace FollowPlayerCamera {
    crabaddr Update = 0x17F8DA0;
    craboffset offset = 0x18;
};

namespace FollowTarget {
    crabaddr Update = 0x114E120;
    crabaddr SetTarget = 0x114CE80;
    craboffset target = 0x18;
    craboffset keepOffset = 0x20;
    craboffset offset = 0x24;
};

namespace FootStep {
    crabaddr Start = 0x14E02A0;
    craboffset whatIsGround = 0x18;
    craboffset randomSfx = 0x20;
    craboffset genericStep = 0x28;
    craboffset grassStep = 0x30;
};

namespace FootstepOnTouch {
    crabaddr OnTriggerEnter = 0x1703C70;
    crabaddr GetReady = 0xBD1C00;
    craboffset footstep = 0x18;
    craboffset ready = 0x20;
    craboffset cooldown = 0x24;
};

namespace GameAudio {
    crabaddr PlayRoundStart = 0x122ECD0;
    crabaddr PlayRoundEnd = 0x122EC90;
    crabaddr PlayerClockTick = 0x122ED20;
    crabaddr PlayRiser = 0x122EC60;
    craboffset roundStart = 0x18;
    craboffset roundEnd = 0x20;
    craboffset roundStartSfx = 0x28;
    craboffset clockSfx = 0x30;
    craboffset riserSfx = 0x38;
    craboffset firstTick = 0x40;
};

namespace GameLoop {
    crabaddr CheckGameOver = 0xE15680;
    crabaddr SetWinner = 0xE16120;
    crabaddr NextGame = 0xE15AA0;
    crabaddr Awake = 0xE154A0;
    crabaddr StartGames = 0xE16180;
    crabaddr RestartLobby = 0xE15F50;
    crabaddr ResetAllInventories = 0xE15DF0;
    crabaddr CanClientInteract = 0xE15610;
    crabaddr Reset = 0xE15F20;
    craboffset gameModesAvailable = 0x18;
    craboffset smallModes = 0x20;
    craboffset random = 0x28;
    craboffset winner = 0x38;
};

namespace GameManager {
    crabaddr SyncObject = 0xE2A990;
    crabaddr PunchPlayer = 0xE299E0;
    crabaddr SpawnPlayer = 0xE2A370;
    crabaddr RemovePlayer = 0xE29C20;
    crabaddr SetPlayerRotation = 0xE2A270;
    crabaddr Start = 0xE2A7C0;
    crabaddr SpawnSpectator = 0xE2A5D0;
    crabaddr Update = 0x2257B0;
    crabaddr RespawnPlayer = 0xE29D70;
    crabaddr GetPlayersAlive = 0xE289C0;
    crabaddr SetPlayerAnimation = 0xE2A070;
    crabaddr SetPlayerPosition = 0xE2A170;
    crabaddr PlayerTookDamage = 0xE29340;
    crabaddr Awake = 0xE28840;
    crabaddr PhysicsObjectSnapshot = 0xE28B40;
    crabaddr PlayerDied = 0xE28C10;
    craboffset activePlayers = 0x18;
    craboffset spectators = 0x20;
    craboffset onlinePlayer = 0x28;
    craboffset localPlayer = 0x30;
    craboffset playerRagdoll = 0x38;
    craboffset explodedPlayer = 0x40;
    craboffset spectatorCamera = 0x48;
    craboffset spectatorPrefab = 0x50;
    craboffset whatIsGround = 0x58;
    craboffset whatIsHittableBullet = 0x5C;
    craboffset whatIsHurtbox = 0x60;
    craboffset whatIsPlayer = 0x64;
    craboffset gameMode = 0x68;
    craboffset gameAudio = 0x70;
};

namespace GameMode {
    crabaddr Init = 0x105C880;
    crabaddr Update = 0x105D330;
    crabaddr OnFreezeOverAlert = 0x2257B0;
    crabaddr GetGoodBadPlayers = 0x105C7D0;
    crabaddr EndRound = 0x105C450;
    crabaddr GetFreezeTime = 0x105C7B0;
    crabaddr GetFreezeTimeSeconds = 0x105C750;
    crabaddr GameOver = 0x105C690;
    craboffset freezeTimer = 0x18;
    craboffset modeTime = 0x24;
    craboffset lastTick = 0x28;
    craboffset forcedPlayersLeft = 0x2C;
    craboffset totalRoundTime = 0x30;
};

namespace GameModeBombTag {
    crabaddr OnRoundOver = 0x2257B0;
    crabaddr OnFreezeOver = 0x134B9B0;
    crabaddr OutlineTagger = 0x134BD40;
    crabaddr TagPlayer = 0x134C2C0;
    crabaddr PlayerDied = 0x134C0E0;
    crabaddr StopGame = 0x2257B0;
    crabaddr ModeUpdate = 0x134B640;
    crabaddr InitMode = 0x134B5A0;
    crabaddr GameModeAlert = 0x134B520;
    crabaddr OnFreezeOverAlert = 0x134B720;
    crabaddr OnPlayerSpawnOrDespawn = 0x134BB10;
    crabaddr TryTagPlayer = 0x134C5D0;
};

namespace GameModeButtons {
    crabaddr PressButton = 0x11C7C80;
    crabaddr ResetButtons = 0x11C7ED0;
    crabaddr SetNextPlayer = 0x11C80A0;
    crabaddr OnRoundOver = 0x2257B0;
    crabaddr InitMode = 0x11C7820;
    crabaddr OnPlayerSpawnOrDespawn = 0x11C7BB0;
    crabaddr ModeUpdate = 0x11C78E0;
    crabaddr StopGame = 0x2257B0;
    crabaddr OnFreezeOver = 0x11C7AB0;
    crabaddr ServerReceivedButtonPress = 0x11C7FD0;
    crabaddr PlayerDied = 0x11C7C30;
    craboffset currentButtonPresser = 0x50;
    craboffset nextButtonPresser = 0x58;
    craboffset playerOrder = 0x68;
    craboffset playerIndex = 0x70;
    craboffset killTimer = 0x78;
    craboffset maxModeTimer = 0x80;
};

namespace GameModeData {
    craboffset musicType = 0x1C;
    craboffset minPlayers = 0x20;
    craboffset maxPlayers = 0x24;
    craboffset modeTime = 0x34;
    craboffset waitForRoundOverToDeclareSoloWinner = 0x38;
    craboffset compatibleMaps = 0x50;
    craboffset largeMaps = 0x58;
    craboffset mediumMaps = 0x60;
    craboffset smallMaps = 0x68;
    craboffset id = 0x70;
    craboffset isPlayable = 0x74;
    craboffset skipAsString = 0x75;
    craboffset bigOnlyMapPlayers = 0x78;
    craboffset bigAndMediumMapPlayers = 0x7C;
    craboffset mediumAndSmallMapPlayers = 0x80;
    craboffset smallMapsOnlyPlayers = 0x84;
};

namespace GameModeFallingPlatforms {
    crabaddr InitMode = 0x1734020;
    crabaddr OnRoundOver = 0x1734210;
    crabaddr OnFreezeOver = 0x1734100;
    crabaddr SetPieces = 0x1734250;
    crabaddr OnPlayerGameModeLoaded = 0x17341A0;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr PlayerDied = 0x2257B0;
    crabaddr StopGame = 0x1734360;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    crabaddr FallPiece = 0x1733FD0;
};

namespace GameModeGlass {
    crabaddr InitMode = 0xCCDD50;
    crabaddr StopGame = 0x2257B0;
    crabaddr PlayerDied = 0x2257B0;
    crabaddr OnFreezeOver = 0xCCDE00;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr CheckGameOver = 0xCCDA20;
    crabaddr OnFreezeOverAlert = 0xCCDDA0;
    crabaddr OnRoundOver = 0xCCDF90;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    crabaddr SetGlassPieces = 0xCCE210;
};

namespace GameModeHat {
    crabaddr TryTagPlayer = 0xFF5870;
    crabaddr StealHat = 0xFF5440;
    crabaddr OnPlayerSpawnOrDespawn = 0xFF4AF0;
    crabaddr FindPlayersToKill = 0xFF4490;
    crabaddr PlayerDied = 0xFF4E60;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr StopGame = 0x2257B0;
    crabaddr GameModeAlert = 0xFF4550;
    crabaddr OnFreezeOver = 0xFF46C0;
    crabaddr OutlineTagger = 0xFF4CE0;
    crabaddr InitMode = 0xFF45B0;
    crabaddr OnRoundOver = 0xFF4B10;
    crabaddr PlayersToEliminate = 0xFF4F70;
    craboffset taggedPlayers = 0x38;
    craboffset playerScores = 0x40;
    craboffset eliminationRatio = 0x50;
    craboffset playersToKill = 0x54;
};

namespace GameModeHnS {
    crabaddr OutlineTagger = 0xBB4850;
    crabaddr InitMode = 0xBB36E0;
    crabaddr OnFreezeOverAlert = 0xBB3BF0;
    crabaddr OutlineSeeker = 0xBB44E0;
    crabaddr GameModeAlert = 0xBB34C0;
    crabaddr GetGoodBadPlayers = 0xBB3540;
    crabaddr StopGame = 0x2257B0;
    crabaddr OnRoundOver = 0xBB41A0;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    crabaddr OnFreezeOver = 0xBB3E80;
    crabaddr CheckGameOver = 0xBB2FD0;
    crabaddr PlayerDied = 0xBB4990;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr MakeSeeker = 0xBB3850;
    craboffset seekers = 0x38;
    craboffset hiders = 0x40;
    craboffset idToKills = 0x48;
};

namespace GameModeKing {
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr OnPlayerSpawnOrDespawn = 0x13AE490;
    crabaddr PlayersToEliminate = 0x13AE6C0;
    crabaddr PlayerDied = 0x13AE680;
    crabaddr GameModeAlert = 0x13AE090;
    crabaddr InitMode = 0x13AE0F0;
    crabaddr OnRoundOver = 0x13AE4B0;
    crabaddr StopGame = 0x13AEB90;
    crabaddr OnFreezeOver = 0x13AE210;
    crabaddr FindPlayersToKill = 0x13ADFD0;
    crabaddr OnPlayerGameModeLoaded = 0x2257B0;
    craboffset playerScores = 0x38;
    craboffset eliminationRatio = 0x48;
    craboffset playersToKill = 0x4C;
};

namespace GameModeLights {
    crabaddr InitMode = 0x2257B0;
    crabaddr OnRoundOver = 0xD69100;
    crabaddr StopGame = 0x2257B0;
    crabaddr SendStrobe = 0xD691D0;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr Strobe = 0xD69220;
    crabaddr PlayerDied = 0x2257B0;
    crabaddr ToggleLights = 0xD69280;
    crabaddr OnFreezeOver = 0xD69020;
    craboffset prepTime = 0x38;
};

namespace GameModeManager {
    crabaddr GetGameMode = 0x10C5590;
    crabaddr Awake = 0x10C5270;
    crabaddr GetAvailableModesString = 0x10C5490;
    craboffset defaultMode = 0x18;
    craboffset allGameModes = 0x20;
    craboffset allPlayableGameModes = 0x28;
    craboffset practiceMode = 0x30;
};

namespace GameModePush {
    crabaddr OnFreezeOver = 0x12E96B0;
    crabaddr InitMode = 0x2257B0;
    crabaddr StopGame = 0x2257B0;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    crabaddr OnRoundOver = 0x12E9750;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr PlayerDied = 0x2257B0;
    craboffset item = 0x38;
};

namespace GameModeRace {
    crabaddr InitMode = 0x1862FF0;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr PlayerDied = 0x18633C0;
    crabaddr OnFreezeOver = 0x18630F0;
    crabaddr StopGame = 0x2257B0;
    crabaddr OnRoundOver = 0x1863150;
    crabaddr CheckGameOver = 0x1862CB0;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    craboffset qualifiers = 0x38;
};

namespace GameModeRedLight {
    crabaddr PlayerDied = 0x2257B0;
    crabaddr StopGame = 0x11805E0;
    crabaddr InitMode = 0x11800B0;
    crabaddr ForceMovementUpdate = 0x117FF50;
    crabaddr RedLight = 0x11804C0;
    crabaddr OnFreezeOverAlert = 0x1180140;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    crabaddr CheckGameOver = 0x117F720;
    crabaddr GreenLight = 0x117FFC0;
    crabaddr OnRoundOver = 0x1180200;
    crabaddr CheckMovement = 0x117FA50;
    crabaddr OnFreezeOver = 0x11801A0;
    crabaddr ModeUpdate = 0x2257B0;
    craboffset moveThreshold = 0x54;
    craboffset rotationThreshold = 0x58;
};

namespace GameModeTag {
    crabaddr GetGoodBadPlayers = 0x14FE5A0;
    crabaddr TagPlayer = 0x14FF390;
    crabaddr InitMode = 0x14FE740;
    crabaddr OnFreezeOver = 0x14FEAC0;
    crabaddr TryTagPlayer = 0x14FF6A0;
    crabaddr CheckGameOver = 0x14FDFF0;
    crabaddr OnRoundOver = 0x14FED80;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr OnFreezeOverAlert = 0x14FE830;
    crabaddr GameModeAlert = 0x14FE520;
    crabaddr StopGame = 0x2257B0;
    crabaddr OutlineTagger = 0x14FF020;
    crabaddr PlayerDied = 0x2257B0;
};

namespace GameModeTileDrive {
    crabaddr OnRoundOver = 0x11F7B60;
    crabaddr InitMode = 0x2257B0;
    crabaddr OnPlayerSpawnOrDespawn = 0x2257B0;
    crabaddr MakeTeam = 0x11F77A0;
    crabaddr StopGame = 0x2257B0;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr ForceUpdateTile = 0x11F7710;
    crabaddr SendTeam = 0x11F7F00;
    crabaddr OnFreezeOver = 0x11F7990;
    crabaddr PlayerDied = 0x2257B0;
    craboffset idToTeam = 0x38;
    craboffset nTeams = 0x40;
};

namespace GameModeTimer {
    crabaddr SlowUpdate = 0x10432D0;
    crabaddr Start = 0x1043760;
    craboffset timer = 0x18;
    craboffset freezeTimer = 0x20;
    craboffset formatTime = 0x38;
};

namespace GameModeWaiting {
    crabaddr Update = 0x105C3F0;
    crabaddr SetFreezeTime = 0x2257B0;
    crabaddr GetFreezeTime = 0x4FDD20;
    crabaddr InitMode = 0x2257B0;
    crabaddr OnRoundOver = 0x2257B0;
    crabaddr Init = 0x105A020;
    crabaddr ModeUpdate = 0x2257B0;
    crabaddr OnPlayerSpawnOrDespawn = 0x105A120;
    crabaddr PlayerDied = 0x2257B0;
    crabaddr OnFreezeOver = 0x2257B0;
    crabaddr StopGame = 0x2257B0;
    crabaddr UpdateLobbyTimer = 0x105C170;
};

namespace GameServer {
    crabaddr Awake = 0x1269F00;
    crabaddr CooldownClientChat = 0x126A010;
    crabaddr ForceRemoveItemItemId = 0x126AE60;
    crabaddr ForceGiveWeapon = 0x126A970;
    crabaddr SnowballHit = 0x126BA90;
    crabaddr ForceRemoveItem = 0x126B210;
    crabaddr CheckHit = 0x126A040;
    crabaddr PlayerDied = 0x126B2E0;
    crabaddr ChatCooldown = 0x126A010;
    crabaddr PunchCooldown = 0x126B9D0;
    crabaddr CheckPush = 0x126A430;
    crabaddr ForceRemoveAllWeapons = 0x126AB40;
    crabaddr QueueRespawn = 0x126BA00;
    crabaddr ForceGiveAllWeapon = 0x126A680;
    crabaddr PlayerSpawnRequest = 0x126B5C0;
};

namespace GameSettings {
};

namespace GameUI {
    crabaddr Start = 0x117CEA0;
    crabaddr UpdateChat = 0x117CFD0;
    crabaddr Awake = 0x117CE50;
    crabaddr Update = 0x117F690;
    craboffset roleUI = 0x18;
    craboffset lobbyStatusUI = 0x20;
    craboffset canvasGroup = 0x28;
    craboffset chatBox = 0x30;
};

namespace GeometryGrassPainter {
    craboffset AdjustedColor = 0x28;
    craboffset toolbarInt = 0x48;
    craboffset painting = 0x78;
    craboffset removing = 0x79;
    craboffset editing = 0x7A;
    craboffset i = 0x7C;
    craboffset sizeWidth = 0x80;
    craboffset sizeLength = 0x84;
    craboffset density = 0x88;
    craboffset normalLimit = 0x8C;
    craboffset rangeR = 0x90;
    craboffset rangeG = 0x94;
    craboffset rangeB = 0x98;
    craboffset hitMask = 0x9C;
    craboffset paintMask = 0xA0;
    craboffset brushSize = 0xA4;
};

namespace GlassBreak {
    crabaddr MakeSolid = 0x1083EE0;
    crabaddr LocalInteract = 0x2257B0;
    crabaddr TryInteract = 0x10840E0;
    crabaddr ServerInteract = 0x2257B0;
    crabaddr AllInteract = 0x1083E80;
    crabaddr OnTriggerEnter = 0x1084010;
    crabaddr CanInteract = 0x222260;
    craboffset solidPiece = 0x20;
    craboffset glassFx = 0x28;
    craboffset fxOffset = 0x30;
};

namespace GlassManager {
    crabaddr Awake = 0x17F8210;
    craboffset pieces = 0x18;
};

namespace GoldVignette {
    crabaddr Awake = 0xEE2880;
    craboffset vignette = 0x18;
};

namespace Gun {
    crabaddr Update = 0x1146ED0;
    crabaddr Start = 0x1140A30;
    crabaddr StartReload = 0x1140A10;
    crabaddr Equip = 0x1140850;
    craboffset weaponParent = 0xA8;
};

namespace GunComponent {
    craboffset bulletsPerShot = 0x24;
    craboffset recoilResetSpeed = 0x2C;
    craboffset recoilPatternX = 0x30;
    craboffset recoilPatternY = 0x38;
    craboffset cameraShake = 0x48;
    craboffset minDamage = 0x50;
    craboffset startFalloffDistance = 0x54;
    craboffset endFalloffDistance = 0x58;
    craboffset multiplierDamage = 0x5C;
    craboffset pushSelfForce = 0x64;
    craboffset sphereRadius = 0x6C;
};

namespace HatScoreboard {
    crabaddr SlowUpdate = 0x10DF170;
    crabaddr Start = 0x10DF760;
    craboffset scoreText = 0x18;
    craboffset cyan = 0x40;
    craboffset danger = 0x50;
};

namespace HatUI {
    crabaddr AddOrdinal = 0x16F2E10;
    crabaddr Update = 0xFE83C0;
    crabaddr Start = 0x16F31A0;
    crabaddr SlowUpdate = 0x16F2F50;
    craboffset score = 0x18;
    craboffset needed = 0x20;
    craboffset overlay = 0x28;
    craboffset safe = 0x30;
    craboffset danger = 0x40;
    craboffset sfx = 0x50;
};

namespace HeaderScalingUI {
    crabaddr Update = 0x18679F0;
    craboffset main = 0x18;
    craboffset header = 0x20;
    craboffset content = 0x28;
    craboffset contentPercentScale = 0x30;
};

namespace IInteract {
};

namespace InputManager {
    crabaddr Start = 0xFEDE30;
    craboffset forward = 0x0;
    craboffset backwards = 0x4;
    craboffset left = 0x8;
    craboffset right = 0xC;
    craboffset jump = 0x10;
    craboffset crouch = 0x14;
    craboffset sprint = 0x18;
    craboffset interact = 0x1C;
    craboffset status = 0x20;
    craboffset drop = 0x24;
    craboffset map = 0x28;
    craboffset leftClick = 0x2C;
    craboffset rightClick = 0x30;
    craboffset inventory1 = 0x34;
    craboffset inventory2 = 0x38;
    craboffset inventory3 = 0x3C;
    craboffset inventory4 = 0x40;
    craboffset voipKey = 0x44;
};

namespace IntroUI {
    crabaddr Hide = 0x128F130;
    crabaddr Start = 0x128F160;
    crabaddr StopCinematic = 0x128F300;
    crabaddr Awake = 0x128F010;
    craboffset parent = 0x18;
    craboffset name = 0x20;
    craboffset gamemode = 0x28;
    craboffset description = 0x30;
};

namespace InventoryUI {
    crabaddr Awake = 0xD3B880;
    crabaddr ShowUI = 0xD3BAE0;
    crabaddr SetItem = 0xD3B950;
    crabaddr Update = 0xD3CA70;
    crabaddr HideUI = 0xD3B910;
    crabaddr SetPointer = 0xD3BA40;
    craboffset pointer = 0x18;
    craboffset inventoryRow = 0x20;
    craboffset canvas = 0x30;
    craboffset parentRect = 0x38;
};

namespace InviteWindow {
    crabaddr ShowCode = 0x14CA750;
    crabaddr Start = 0x14CA780;
    crabaddr CopyLobbyId = 0x14CA6C0;
    crabaddr OnEnable = 0x14CA720;
    craboffset codeText = 0x18;
    craboffset hideCode = 0x20;
};

namespace ItemAmmo {
    crabaddr TryUse = 0x14FD870;
    crabaddr LocalUse = 0x14FD7B0;
    crabaddr OnlineUse = 0x14FD830;
    crabaddr AllUse = 0x14FD770;
    crabaddr MouseUp = 0x14FD7F0;
};

namespace ItemAnimations {
    crabaddr Awake = 0x17B51D0;
    crabaddr PlayMeleeAnimation = 0x17B5270;
};

namespace ItemData {
    craboffset itemID = 0x18;
    craboffset objectID = 0x1C;
    craboffset itemPrefab = 0x28;
    craboffset icon = 0x30;
    craboffset iconBig = 0x38;
    craboffset itemName = 0x40;
    craboffset currentAmmo = 0x48;
    craboffset maxAmmo = 0x4C;
    craboffset ammoType = 0x50;
    craboffset reloadTime = 0x54;
    craboffset rotationOffset = 0x64;
    craboffset soundComponent = 0x88;
    craboffset damage = 0x90;
    craboffset canDrop = 0x94;
};

namespace ItemGun {
    crabaddr AllUse = 0x118B170;
    crabaddr GetReady = 0xEA24D0;
    crabaddr GetHit = 0x118B630;
    crabaddr TryReload = 0x118C370;
    crabaddr TryUse = 0x118C560;
    crabaddr LocalUse = 0x118B830;
    crabaddr MouseUp = 0x118C360;
    crabaddr OnlineUse = 0x2257B0;
    crabaddr Update = 0x118E000;
    craboffset gunTip = 0x58;
    craboffset muzzlePrefab = 0x60;
    craboffset bulletPrefab = 0x68;
};

namespace ItemHandle {
    crabaddr DisableIK = 0x1598E60;
    crabaddr IsItemEquipped = 0x1599470;
    crabaddr Awake = 0x1598D90;
    crabaddr Start = 0x15997A0;
    crabaddr UseItem = 0x159F810;
    crabaddr Update = 0x159F520;
    crabaddr EquipItem = 0x1598FA0;
    crabaddr StartReload = 0x1599740;
    crabaddr ResetIK = 0x15994D0;
    craboffset itemParent = 0x20;
    craboffset leftHandIK = 0x28;
    craboffset rightHandIK = 0x30;
};

namespace ItemManager {
    crabaddr GetItemById = 0x175D500;
    crabaddr GetItemByName = 0x175D5A0;
    crabaddr GetIdByName = 0x175D330;
    crabaddr Awake = 0x175D080;
    craboffset idToItem = 0x0;
    craboffset moneyPrefab = 0x18;
};

namespace ItemMelee {
    crabaddr GetReady = 0xEA24D0;
    crabaddr TryUse = 0x14191A0;
    crabaddr LocalUse = 0x1419050;
    crabaddr AllUse = 0x1418FD0;
    crabaddr OnlineUse = 0x14190B0;
    crabaddr MouseUp = 0x2257B0;
    craboffset audio = 0x58;
    craboffset hitFx = 0x80;
};

namespace ItemOther {
    crabaddr MouseUp = 0x13E38C0;
    crabaddr OnlineUse = 0x13E3900;
    crabaddr AllUse = 0x13E3840;
    crabaddr TryUse = 0x13E3940;
    crabaddr LocalUse = 0x13E3880;
};

namespace ItemPrefab {
    crabaddr Start = 0x12D8C10;
    crabaddr Reset = 0x12D8BE0;
    crabaddr TryReload = 0x2D4A40;
    crabaddr SetOwner = 0x32B1B0;
    crabaddr Equip = 0x12D89D0;
    crabaddr TryInteract = 0x12D8D00;
    crabaddr LocalInteract = 0x12D8B10;
    crabaddr ServerInteract = 0x2257B0;
    crabaddr AllInteract = 0x12D87E0;
    crabaddr CanInteract = 0x5892B0;
    crabaddr InstanceData = 0x12D8A50;
    craboffset itemData = 0x20;
    craboffset pickupFx = 0x30;
    craboffset rightHandTarget = 0x38;
    craboffset leftHandTarget = 0x40;
};

namespace ItemSlotUI {
    crabaddr Show = 0x15ECA90;
    crabaddr SetItem = 0x15EC9C0;
    crabaddr Hide = 0x15EC980;
    crabaddr Update = 0x15F2150;
    crabaddr Awake = 0x15EC900;
    craboffset canvas = 0x18;
    craboffset slot = 0x20;
    craboffset name = 0x28;
    craboffset image = 0x30;
    craboffset selectionImg = 0x38;
};

namespace ItemThrowable {
    crabaddr GetReady = 0xEA24D0;
    crabaddr LocalUse = 0xEE36F0;
    crabaddr TryUse = 0xEE3820;
    crabaddr AllUse = 0xEE3280;
    crabaddr OnlineUse = 0xEE3730;
    crabaddr MouseUp = 0x2257B0;
    crabaddr GetHit = 0xEE34F0;
    craboffset throwPrefab = 0x58;
    craboffset audio = 0x60;
    craboffset gunTip = 0x68;
    craboffset muzzlePrefab = 0x70;
};

namespace JoinLobbyBtn {
    crabaddr JoinLobby = 0x122A060;
    craboffset inputField = 0x18;
};

namespace JumpPad {
    crabaddr OnTriggerStay = 0xD4FA10;
    craboffset pushForce = 0x20;
};

namespace KeepTextUpright {
    crabaddr Update = 0x17F9080;
};

namespace KeyListener {
    crabaddr Awake = 0xD0E5F0;
    crabaddr ListenForKey = 0xD0E6E0;
    crabaddr Update = 0xD10950;
    craboffset currentlyChanging = 0x18;
    craboffset alertText = 0x20;
    craboffset overlay = 0x28;
};

namespace KillPlayerOutOfBounds {
    crabaddr OnDrawGizmos = 0x17FF5A0;
    crabaddr SlowUpdate = 0x17FF620;
    crabaddr Awake = 0x17FF550;
    craboffset killHeight = 0x18;
};

namespace KingOfTheHillUI {
    crabaddr AddOrdinal = 0x1192BA0;
    crabaddr SlowUpdate = 0x1192CE0;
    crabaddr Update = 0xFE83C0;
    crabaddr Start = 0x1192E40;
    craboffset score = 0x18;
    craboffset needed = 0x20;
    craboffset overlay = 0x28;
    craboffset safe = 0x30;
    craboffset danger = 0x40;
    craboffset sfx = 0x50;
};

namespace KingScoreboard {
    crabaddr SlowUpdate = 0x13FFA20;
    crabaddr Start = 0x1400010;
    craboffset scoreText = 0x18;
    craboffset cyan = 0x40;
    craboffset danger = 0x50;
};

namespace Ladder {
    crabaddr OnTriggerStay = 0x145B490;
    crabaddr OnTriggerExit = 0x2257B0;
    crabaddr Awake = 0x145B420;
    crabaddr OnTriggerEnter = 0x2257B0;
};

namespace LavaDamage {
    crabaddr Start = 0x12E42B0;
    craboffset sfxPrefab = 0x18;
};

namespace LavaPiece {
    crabaddr Break = 0x17B7B80;
    crabaddr Update = 0x17BDA30;
    craboffset soundPrefab = 0x20;
    craboffset breakPrefab = 0x28;
};

namespace LightsManager {
    crabaddr Awake = 0x1080EA0;
    craboffset lights = 0x18;
    craboffset reflection = 0x20;
    craboffset sfx = 0x28;
};

namespace LoadingScreen {
    crabaddr Update = 0x12AE680;
    crabaddr Start = 0x12AAFD0;
    crabaddr MainMenu = 0x12AAF20;
    craboffset progressText = 0x18;
    craboffset timerDone = 0x0;
    craboffset backgroundImage = 0x38;
    craboffset mapName = 0x40;
    craboffset gameMode = 0x48;
    craboffset gameModeDescription = 0x50;
    craboffset waitingForServer = 0x1;
};

namespace LobbyCamera {
    crabaddr Awake = 0xBCF990;
    crabaddr StopShake = 0xBCF9D0;
    crabaddr StartShake = 0xBCF990;
    craboffset shaker = 0x18;
    craboffset menuCamera = 0x20;
};

namespace LobbyManager {
    crabaddr RequestPracticeLobby = 0xD121C0;
    crabaddr KickPlayer = 0xD11960;
    crabaddr SetLobby = 0x93C980;
    crabaddr OnPlayerJoinLeaveUpdate = 0xD11DD0;
    crabaddr NewLobbySettings = 0xD11D00;
    crabaddr NewMuteList = 0xD11D60;
    crabaddr SetServerVersion = 0x2257B0;
    crabaddr AddPlayerToLobby = 0xD10C00;
    crabaddr GameEnded = 0xD11710;
    crabaddr CloseLobby = 0xD11660;
    crabaddr LobbyLoop = 0xD11A90;
    crabaddr GetClient = 0xD11760;
    crabaddr StartLobby = 0xD123D0;
    crabaddr RemovePlayerFromLobby = 0xD11FD0;
    crabaddr Awake = 0xD11180;
    crabaddr StartNewLobby = 0xD12570;
    crabaddr ChangeColor = 0xD114C0;
    crabaddr NameVal = 0xD11C50;
    crabaddr BanPlayer = 0xD11320;
    crabaddr StartPracticeLobby = 0xD125B0;
    crabaddr SetServerName = 0xD12250;
    crabaddr GetClients = 0x269060;
    crabaddr GetPlayerColorId = 0xD118A0;
    craboffset steamIdToUID = 0x0;
    craboffset lobbyPlayers = 0x8;
    craboffset started = 0x38;
    craboffset assets = 0x40;
    craboffset map = 0x48;
    craboffset gameMode = 0x50;
    craboffset nextRoundPlayers = 0x58;
    craboffset gameSettings = 0x60;
    craboffset gameState = 0x70;
    craboffset queueLobby = 0x78;
    craboffset lobbyUtility = 0x80;
    craboffset mutedPlayers = 0xA0;
    craboffset bannedPlayers = 0x18;
    craboffset connectedToSteam = 0xA8;
};

namespace LobbyReadyInteract {
    crabaddr AllInteract = 0x15EA270;
    crabaddr ServerInteract = 0x15EA3F0;
    crabaddr CanInteract = 0x222260;
    crabaddr Update = 0x15EC750;
    crabaddr LocalInteract = 0x2257B0;
    crabaddr Awake = 0x15EA370;
    crabaddr TryInteract = 0x15EA4B0;
    craboffset button = 0x20;
    craboffset readySfx = 0x28;
    craboffset unreadySfx = 0x30;
};

namespace LobbySettings {
    crabaddr UpdateServerName = 0x1209BD0;
    crabaddr Start = 0x1203470;
    craboffset joinMidGame = 0x18;
    craboffset maxPlayers = 0x20;
    craboffset lobbyType = 0x28;
    craboffset gameMode = 0x30;
    craboffset serverNameField = 0x38;
    craboffset proximityChat = 0x40;
};

namespace LobbyUtility {
    crabaddr RemoveWhitespace = 0x12EAE30;
    crabaddr ProfanityFilterString = 0x12EACC0;
    crabaddr Awake = 0x12EA9F0;
    craboffset profanityList = 0x18;
};

namespace LocalSfx {
    crabaddr PlayClip = 0x182D8C0;
    crabaddr Awake = 0x182D7E0;
    craboffset hitMarker = 0x18;
    craboffset button = 0x20;
    craboffset source = 0x28;
};

namespace MakeDissonance {
    crabaddr Update = 0x15250F0;
    crabaddr Awake = 0x1520080;
    craboffset diss = 0x18;
};

namespace MakeRagdoll {
    crabaddr CreateRagdoll = 0x1073FA0;
    craboffset armature = 0x18;
    craboffset mat = 0x20;
};

namespace ManagePlayerListing {
    crabaddr SetPlayer = 0xE048D0;
    crabaddr Show = 0xE04A60;
    crabaddr Update = 0xE0EC70;
    crabaddr MutePlayer = 0xE04680;
    crabaddr Awake = 0xE043D0;
    crabaddr BanPlayer = 0xE044E0;
    crabaddr KickPlayer = 0xE045A0;
    craboffset window = 0x18;
    craboffset kickBtn = 0x28;
    craboffset banBtn = 0x30;
    craboffset playerName = 0x38;
    craboffset muteText = 0x40;
};

namespace Map {
    craboffset mapName = 0x20;
    craboffset mapThumbnail = 0x28;
    craboffset playable = 0x34;
};

namespace MapBtn {
    crabaddr Deselect = 0x15A20F0;
    crabaddr Select = 0x15A2140;
    crabaddr SetMap = 0x15A2190;
    craboffset title = 0x18;
    craboffset image = 0x20;
    craboffset workshopId = 0x28;
};

namespace MapCamera {
    crabaddr Awake = 0x12436C0;
    crabaddr InvokeStop = 0x12437E0;
    crabaddr Update = 0x124F3F0;
};

namespace MapManager {
    crabaddr GetMap = 0x417B20;
    crabaddr Awake = 0x1229540;
    crabaddr GetAvailableMapsString = 0x12296F0;
    craboffset maps = 0x18;
    craboffset playableMaps = 0x20;
    craboffset defaultMap = 0x28;
};

namespace MapSelection {
    craboffset mapBtnPrefab = 0x18;
    craboffset btnParent = 0x20;
    craboffset mapBtns = 0x28;
};

namespace MenuUI {
    crabaddr MakeNewLobbySettings = 0x12A4530;
    crabaddr RefreshLobbies = 0x2257B0;
    crabaddr LeaveLobby = 0x12A44C0;
    crabaddr StartLobby = 0x12A46F0;
    crabaddr OnDestroy = 0x12A45A0;
    crabaddr Awake = 0x12A4320;
    crabaddr Start = 0x12A47D0;
    crabaddr ExitGame = 0x12A44B0;
    crabaddr OpenLobbyUi = 0x12A45F0;
    crabaddr OpenMainMenuUi = 0x12A46B0;
    crabaddr StartNewLobby = 0x12A4760;
    craboffset lobbyUi = 0x18;
    craboffset menuUi = 0x20;
    craboffset creatLobbyUi = 0x28;
    craboffset serverListUi = 0x30;
    craboffset micSetting = 0x38;
    craboffset updatePrompt = 0x40;
};

namespace MicDropDown {
    crabaddr ApplyMic = 0x2257B0;
    crabaddr SetSettings = 0xD68040;
    crabaddr ApplySetting = 0xD67F80;
    crabaddr Scroll = 0xD68030;
    craboffset dropdown = 0x28;
    craboffset settingText = 0x30;
};

namespace MicIcon {
    crabaddr SlowUpdate = 0x1711DA0;
    crabaddr Awake = 0x1711D50;
    craboffset icon = 0x28;
};

namespace MicSetting {
    crabaddr Start = 0x1519640;
    crabaddr CloseSetting = 0x15195F0;
    craboffset micSetting = 0x18;
    craboffset mainUI = 0x20;
};

namespace Money {
    crabaddr CanInteract = 0x222260;
    crabaddr TryInteract = 0xBE8580;
    crabaddr LocalInteract = 0x2257B0;
    crabaddr AllInteract = 0xBE83D0;
    crabaddr ServerInteract = 0xBE8430;
    craboffset amount = 0x20;
};

namespace MoveAlert {
    crabaddr Update = 0x12D86A0;
    crabaddr Start = 0x12D68C0;
    craboffset moveBackOut = 0x2C;
};

namespace MoveCamera {
    crabaddr BobOnce = 0x136C510;
    crabaddr StartSpectating = 0x136C990;
    crabaddr Start = 0x136CBB0;
    crabaddr PlayerDied = 0x136C720;
    crabaddr UpdateFov = 0x1371C20;
    crabaddr LateUpdate = 0x136C610;
    crabaddr PlayerRespawn = 0x136C8D0;
    crabaddr Awake = 0x136C3C0;
    crabaddr StartPlaying = 0x136C980;
    craboffset player = 0x18;
    craboffset offset = 0x20;
    craboffset desyncOffset = 0x2C;
    craboffset vaultOffset = 0x38;
    craboffset playerInput = 0x58;
    craboffset raycastCamera = 0x60;
    craboffset cinematic = 0x68;
    craboffset whatIsGround = 0xA8;
    craboffset cameraRot = 0xB8;
    craboffset mainCam = 0xF0;
};

namespace MoveInteract {
    crabaddr CanInteract = 0x222260;
    crabaddr ServerInteract = 0xFB9C90;
    crabaddr AllInteract = 0xFB9B80;
    crabaddr LocalInteract = 0x2257B0;
    crabaddr TryInteract = 0xFB9D20;
    crabaddr Start = 0xFB9CD0;
    craboffset objectToMove = 0x20;
    craboffset moveSpeed = 0x28;
    craboffset moveOffset = 0x2C;
};

namespace MoveLava {
    crabaddr Start = 0x9A8640;
    crabaddr FixedUpdate = 0x9A8450;
    craboffset offsetHeight = 0x24;
    craboffset lavaInterval = 0x28;
    craboffset lavaTime = 0x2C;
    craboffset lavaMoveTime = 0x30;
    craboffset lavaRotationTime = 0x3C;
    craboffset siren = 0x40;
};

namespace MovingObject {
    crabaddr FixedUpdate = 0x103DDA0;
    crabaddr Start = 0x103DEB0;
    crabaddr Awake = 0x103DD50;
    craboffset offsetPosition = 0x18;
    craboffset speed = 0x24;
    craboffset offset = 0x40;
};

namespace MusicController {
    crabaddr Update = 0x13AABB0;
    crabaddr StopSong = 0x13A9E40;
    crabaddr SetPitch = 0x13A9DA0;
    crabaddr ImmediateStop = 0x13A9A80;
    crabaddr SetVolume = 0x98C7B0;
    crabaddr Start = 0x13A9DC0;
    crabaddr Awake = 0x13A9980;
    craboffset Intense = 0x18;
    craboffset Menu = 0x20;
    craboffset funky = 0x28;
    craboffset scary = 0x30;
    craboffset winMusic = 0x38;
};

namespace MyBoolSetting {
    crabaddr SetSetting_int = 0x12D9210;
    crabaddr SetSetting_bool = 0x12D91B0;
    crabaddr ToggleSetting = 0x12D9250;
    craboffset checkMark = 0x28;
};

namespace NetStatus {
    crabaddr SlowUpdate = 0xE0EFF0;
    crabaddr Awake = 0xE0EE90;
    crabaddr GetPing = 0xE0EF40;
    crabaddr AddPing = 0xE0ED90;
};

namespace ObjectHitSfx {
    craboffset genericHits = 0x18;
    craboffset metalHits = 0x20;
    craboffset sfx = 0x28;
};

namespace OnlinePlayerMovement {
    crabaddr ForcePosition = 0xAE7340;
    crabaddr Start = 0xAE78C0;
    crabaddr Update = 0xAE9310;
    crabaddr SetRotation = 0xAE78A0;
    crabaddr LateUpdate = 0xAE73B0;
    crabaddr FixedUpdate = 0xAE7090;
    crabaddr SetCrouching = 0xAE76E0;
    crabaddr IsGrounded = 0xAE73A0;
    crabaddr SetPosition = 0xAE7850;
    craboffset animator = 0x68;
    craboffset colliders = 0x70;
    craboffset upperBodyRotation = 0x78;
    craboffset playerCollider = 0xE0;
    craboffset isGroundedTransform = 0xF0;
    craboffset whatIsGround = 0xF8;
    craboffset itemOrbit = 0x110;
};

namespace OnlyShowForGamemode {
    crabaddr Awake = 0x13A7A20;
    craboffset gameMode = 0x18;
    craboffset objects = 0x20;
};

namespace Outline {
    crabaddr OnEnable = 0xD5F360;
    crabaddr OnValidate = 0xD5F490;
    crabaddr OnDisable = 0xD5F230;
    crabaddr Update = 0xD65FD0;
    crabaddr Awake = 0xD5F040;
    crabaddr OnDestroy = 0xD5F1C0;
    crabaddr ListVector3 = 0x21FCC0;
    craboffset data = 0x10;
};

namespace Packet {
    crabaddr Dispose = 0x12A1280;
};

namespace PauseUI {
    crabaddr Update = 0x10DF0C0;
    crabaddr Start = 0x10DAC10;
    crabaddr TogglePause = 0x10DACA0;
    crabaddr Awake = 0x10DAB20;
    crabaddr LeaveGame = 0x10DAB60;
    craboffset pauseOverlay = 0x18;
    craboffset settings = 0x20;
    craboffset mapSelection = 0x28;
    craboffset inventory = 0x30;
    craboffset paused = 0x0;
};

namespace PersistentPlayerData {
    crabaddr Awake = 0x120D560;
    craboffset frozen = 0x0;
    craboffset hnsFrozen = 0x1;
};

namespace PhysicsObject {
    crabaddr Start = 0x2257B0;
    crabaddr GetReady = 0x1228540;
    crabaddr SetSnapshot = 0x2257B0;
    crabaddr OnCollisionEnter = 0x2257B0;
    craboffset updatesPerSecond = 0x0;
    craboffset collideFx = 0xC8;
    craboffset hitFxType = 0xD0;
};

namespace PiecesManager {
    crabaddr Awake = 0x18089C0;
    crabaddr GetRandomPieceIndex = 0x1808A40;
    crabaddr RemovePiece = 0x18090D0;
    crabaddr MakePieces = 0x1808C80;
    crabaddr GetRandomSpawnPoint = 0x1808AA0;
    craboffset pieceDistance = 0x18;
    craboffset piece = 0x20;
    craboffset pieces = 0x28;
    craboffset spawnIndexes = 0x30;
    craboffset startPiece = 0x38;
};

namespace PlayerAudio {
    crabaddr Awake = 0x11EDB60;
    craboffset fallDamage = 0x18;
};

namespace PlayerColors {
    crabaddr GetColorByID = 0x1807330;
    craboffset nColors = 0xE8;
};

namespace PlayerCustomization {
    crabaddr HatOutline = 0x144AF60;
    crabaddr Awake = 0x144AF10;
    craboffset crown = 0x18;
    craboffset sweater = 0x20;
    craboffset pants = 0x28;
    craboffset crownColor = 0x30;
    craboffset cosmetics = 0x40;
};

namespace PlayerEyes {
    crabaddr Awake = 0x174A0B0;
    crabaddr LateUpdate = 0x174A130;
    craboffset leftEye = 0x18;
    craboffset rightEye = 0x20;
    craboffset head = 0x28;
    craboffset target = 0x30;
    craboffset angleThreshold = 0x38;
    craboffset distThreshold = 0x3C;
    craboffset defaultRotationEuler = 0x44;
};

namespace PlayerInfo {
    crabaddr SetPlayer = 0x15DFB70;
    craboffset steamId = 0x18;
    craboffset score = 0x20;
    craboffset ping = 0x24;
};

namespace PlayerInformation {
    craboffset playerRadius = 0x108480;
};

namespace PlayerInput {
    crabaddr Awake = 0x105DD40;
    crabaddr Update = 0x105EF50;
    crabaddr FixedUpdate = 0x105E080;
    crabaddr StopInput = 0x105EF00;
    crabaddr CheckInputDown = 0x105DFB0;
    crabaddr CheckInputUp = 0x105E010;
    crabaddr CheckInput = 0x105E020;
    crabaddr NotFrozenInput = 0x105E580;
    crabaddr AlwaysInput = 0x105D9A0;
    crabaddr Look = 0x105E210;
    crabaddr GetAxisInput = 0x34E300;
    crabaddr GetMouseX = 0x105E130;
    crabaddr SetMouseOffset = 0x24FFB0;
    crabaddr GetMouseOffset = 0x24FF50;
    craboffset xRotation = 0x18;
    craboffset sensMultiplier = 0x4;
    craboffset desiredX = 0x1C;
    craboffset mouseScroll = 0x2C;
    craboffset active = 0x30;
    craboffset playerCam = 0x38;
    craboffset orientation = 0x40;
    craboffset playerMovement = 0x48;
    craboffset detectItems = 0x50;
    craboffset playerInventory = 0x58;
    craboffset punchPlayers = 0x60;
    craboffset actualWallRotation = 0x68;
    craboffset wallRotationVel = 0x6C;
    craboffset cameraRot = 0x70;
    craboffset wallRunRotation = 0x7C;
    craboffset mouseOffsetY = 0x80;
};

namespace PlayerInventory {
    crabaddr UpdateAmmoUI = 0x10271A0;
    crabaddr FindAvailableSlot = 0x1019CA0;
    crabaddr PlayEmptyShot = 0x101A750;
    crabaddr GetSlot = 0x101A060;
    crabaddr TryDropItem = 0x101AEE0;
    crabaddr MouseUp = 0x101A200;
    crabaddr UseAmmo = 0x1027390;
    crabaddr LockInventory = 0x101A1F0;
    crabaddr GetAmmoOfType = 0x1019FD0;
    crabaddr Reload = 0x101A910;
    crabaddr PreviousItem = 0x101A900;
    crabaddr PickupItem = 0x101A4C0;
    crabaddr Awake = 0x1019310;
    crabaddr EquipItem = 0x1019530;
    crabaddr UnEquip = 0x10270E0;
    crabaddr PickupAmmo = 0x101A340;
    crabaddr UseItem = 0x1027470;
    crabaddr ForceGiveItem = 0x1019DE0;
    crabaddr PlayItemEquip = 0x101A790;
    crabaddr RemoveItem = 0x101AAD0;
    crabaddr ClearInventory = 0x1019450;
    crabaddr Start = 0x101AED0;
    crabaddr ScrollItem = 0x101AE10;
    craboffset inventorySize = 0x8;
    craboffset weaponParent = 0x28;
    craboffset currentItem = 0x30;
    craboffset itemAudio = 0x38;
    craboffset woshSfx = 0x40;
    craboffset pm = 0x48;
    craboffset emptyShot = 0x58;
};

namespace PlayerList {
    crabaddr Toggle = 0x144C4C0;
    crabaddr Toggle_bool = 0x144C410;
    crabaddr Awake = 0x144C340;
    crabaddr UpdateList = 0x14501D0;
    craboffset parent = 0x18;
    craboffset contentParent = 0x20;
    craboffset namePrefab = 0x28;
};

namespace PlayerListingPrefab {
    crabaddr SetPlayer = 0x10CAD90;
    crabaddr ManagePlayer = 0x10CAC60;
    crabaddr SetSpectator = 0x10CB020;
    craboffset background = 0x18;
    craboffset icon = 0x20;
    craboffset username = 0x28;
    craboffset score = 0x30;
    craboffset ping = 0x38;
    craboffset manageButton = 0x50;
};

namespace PlayerManager {
    crabaddr UpdateVcSettings = 0xEE25C0;
    crabaddr SetColor = 0xEE0730;
    crabaddr Awake = 0xEE0350;
    crabaddr Mute = 0xEE0570;
    crabaddr SetCosmetics = 0xEE07F0;
    crabaddr UpdateForceMute = 0xEE24A0;
    crabaddr SetVolume = 0xEE0E60;
    crabaddr GetRotation = 0xEE0410;
    crabaddr SetPlayer = 0xEE08E0;
    crabaddr SetSpectator = 0xEE0C90;
    craboffset steamProfile = 0x18;
    craboffset shirt = 0x20;
    craboffset head = 0x28;
    craboffset playerName = 0x30;
    craboffset justDied = 0x38;
    craboffset dead = 0x39;
    craboffset waitingReady = 0x3A;
    craboffset username = 0x40;
    craboffset colorId = 0x48;
    craboffset itemHandle = 0x58;
    craboffset playerCustomization = 0x60;
    craboffset pants = 0x68;
    craboffset sweater = 0x70;
    craboffset vcTransform = 0x78;
    craboffset dissonancePlayer = 0x80;
    craboffset dissonanceConfig = 0x88;
    craboffset streamerMode = 0x90;
    craboffset playerNumber = 0x94;
    craboffset playerCosmetics = 0x98;
};

namespace PlayerMovement {
    crabaddr GetFallSpeed = 0x17BE4D0;
    crabaddr SetLadder = 0x17C0CE0;
    crabaddr Movement = 0x17BEF90;
    crabaddr Update = 0x17C67F0;
    crabaddr GetRb = 0x269070;
    crabaddr HitPoint = 0x17BE5E0;
    crabaddr GetPlayerCollider = 0x325050;
    crabaddr IsSliding = 0x17BE9C0;
    crabaddr OnCollisionStay = 0x17C03D0;
    crabaddr PushPlayer = 0x17C07F0;
    crabaddr IsUnderwater = 0x17BE9D0;
    crabaddr Jump = 0x17BEA00;
    crabaddr StopCrouch = 0x17C1060;
    crabaddr Start = 0x17C0FF0;
    crabaddr ResetState = 0x17C0C20;
    crabaddr IsCrouching = 0x17BE9B0;
    crabaddr SetInput = 0x17C0C90;
    crabaddr IsDead = 0x2CA140;
    crabaddr OnCollisionEnter = 0x17BFD80;
    crabaddr RefreshLadder = 0x17C0970;
    crabaddr FindVelRelativeToLook = 0x17BE330;
    crabaddr Awake = 0x17BDCB0;
    crabaddr GetSpeedHorizontal = 0x17BE520;
    crabaddr GetPlayerCamTransform = 0x17BE500;
    crabaddr StartCrouch = 0x17C0D50;
    crabaddr GetVelocity = 0x17BE5A0;
    crabaddr BouncePlayer = 0x17BE170;
    craboffset playerJumpSmokeFx = 0x18;
    craboffset footstepFx = 0x20;
    craboffset playerCam = 0x28;
    craboffset orientation = 0x30;
    craboffset dead = 0x40;
    craboffset grounded = 0x104;
    craboffset whatIsGround = 0x108;
    craboffset whatIsGroundOnly = 0x10C;
    craboffset extraGravity = 0x110;
    craboffset crouchRatio = 0x0;
    craboffset slideStartSfx = 0x138;
    craboffset slideSfx = 0x140;
    craboffset slideThresholdSpeed = 0x4;
    craboffset ps = 0x188;
    craboffset playerSmokeFx = 0x1A8;
    craboffset punchPlayers = 0x1B0;
    craboffset feet = 0x1C0;
    craboffset isUnderwater = 0x208;
    craboffset whatIsHittable = 0x2D4;
};

namespace PlayerRagdoll {
    crabaddr MakeRagdoll = 0x1471D40;
    craboffset makeRagdoll = 0x18;
    craboffset shirt = 0x20;
};

namespace PlayerSave {
    crabaddr OpenCrate = 0x105F2F0;
    crabaddr AddQuestProgress = 0x105F2B0;
    craboffset cameraShake = 0x10;
    craboffset fov = 0x14;
    craboffset sensMultiplier = 0x18;
    craboffset inputDelay = 0x1C;
    craboffset invertedMouseHor = 0x20;
    craboffset invertedMouseVert = 0x21;
    craboffset grass = 0x22;
    craboffset tutorial = 0x23;
    craboffset holdCrouch = 0x24;
    craboffset firstTimeOpeningGame = 0x25;
    craboffset updateShown = 0x26;
    craboffset chatEnabled = 0x27;
    craboffset streamerMode = 0x28;
    craboffset forward = 0x2C;
    craboffset backwards = 0x30;
    craboffset left = 0x34;
    craboffset right = 0x38;
    craboffset jump = 0x3C;
    craboffset crouch = 0x40;
    craboffset sprint = 0x44;
    craboffset interact = 0x48;
    craboffset inventory = 0x4C;
    craboffset drop = 0x50;
    craboffset map = 0x54;
    craboffset leftClick = 0x58;
    craboffset rightClick = 0x5C;
    craboffset inventory1 = 0x60;
    craboffset inventory2 = 0x64;
    craboffset inventory3 = 0x68;
    craboffset inventory4 = 0x6C;
    craboffset inventory5 = 0x70;
    craboffset inventory6 = 0x74;
    craboffset inventory7 = 0x78;
    craboffset inventory8 = 0x7C;
    craboffset voipKey = 0x80;
    craboffset shadowQuality = 0x84;
    craboffset shadowResolution = 0x88;
    craboffset shadowDistance = 0x8C;
    craboffset shadowCascade = 0x90;
    craboffset textureQuality = 0x94;
    craboffset antiAliasing = 0x98;
    craboffset softParticles = 0x9C;
    craboffset bloom = 0xA0;
    craboffset motionBlur = 0xA4;
    craboffset ambientOcclusion = 0xA5;
    craboffset resolution = 0xA8;
    craboffset refreshRate = 0xB0;
    craboffset fullscreen = 0xB4;
    craboffset fullscreenMode = 0xB8;
    craboffset vSync = 0xBC;
    craboffset fpsLimit = 0xC0;
    craboffset micSetting = 0xD0;
    craboffset deaf = 0xD4;
    craboffset hairDefId = 0xD8;
    craboffset faceDefId = 0xDC;
    craboffset hatDefId = 0xE0;
    craboffset shoesDefId = 0xE4;
    craboffset topDefId = 0xE8;
    craboffset backpackDefId = 0xEC;
    craboffset hair = 0xF0;
    craboffset face = 0xF8;
    craboffset hat = 0x100;
    craboffset shoes = 0x108;
    craboffset top = 0x110;
    craboffset backpack = 0x118;
    craboffset cratesOpened = 0x120;
    craboffset commons = 0x128;
    craboffset uncommons = 0x130;
    craboffset rares = 0x138;
    craboffset extraordinarys = 0x140;
    craboffset legendarys = 0x148;
    craboffset commonsC = 0x150;
    craboffset uncommonsC = 0x158;
    craboffset raresC = 0x160;
    craboffset legendarysC = 0x168;
    craboffset shinys = 0x170;
    craboffset questsComplete = 0x178;
    craboffset currentQuest = 0x17C;
    craboffset questProgress = 0x180;
    craboffset nextQuestAvailableTime = 0x188;
    craboffset isQuestComplete = 0x190;
};

namespace PlayerServerCommunication {
    crabaddr ForceMovementUpdate = 0xD87B30;
    crabaddr OnEnable = 0xD87D40;
    crabaddr Start = 0xD87EC0;
    crabaddr Awake = 0xD87A20;
    craboffset root = 0x18;
    craboffset cam = 0x20;
    craboffset posUpdatesPerSecondClose = 0x0;
    craboffset posUpdatesPerSecondMedium = 0x4;
    craboffset posUpdatesPerSecondFar = 0x8;
    craboffset rotUpdatesPerSecondClose = 0xC;
    craboffset rotUpdatesPerSecondMedium = 0x10;
    craboffset rotUpdatesPerSecondFar = 0x14;
    craboffset posUpdateFrequencyClose = 0x18;
    craboffset posUpdateFrequencyMedium = 0x1C;
    craboffset posUpdateFrequencyFar = 0x20;
    craboffset rotUpdateFrequencyClose = 0x24;
    craboffset rotUpdateFrequencyMedium = 0x28;
    craboffset rotUpdateFrequencyFar = 0x2C;
};

namespace PlayersInLobby {
    crabaddr SlowUpdate = 0x15F6940;
    crabaddr Start = 0x15F6950;
    crabaddr OnEnable = 0x15F6940;
    craboffset playerText = 0x18;
};

namespace PlayerStatus {
    crabaddr ResetStatus = 0x103B670;
    crabaddr DamagePlayer = 0x103B3B0;
    crabaddr Start = 0x103B670;
    crabaddr GetHpRatio = 0x103B600;
    crabaddr Awake = 0x103B350;
    crabaddr UpdateMoney = 0x103DAB0;
    crabaddr Update = 0x2257B0;
    craboffset currentHp = 0x18;
    craboffset maxHp = 0x2C;
    craboffset playersLeftWhenDied = 0x0;
};

namespace PlayerVoice {
    crabaddr LateUpdate = 0x1529070;
    crabaddr SlowUpdate = 0x1529240;
    crabaddr Awake = 0x1529020;
    craboffset jaw = 0x18;
    craboffset pm = 0x30;
};

namespace PPController {
    crabaddr Reset = 0x12D0FA0;
    crabaddr Awake = 0x12D0DB0;
    crabaddr SetMotionBlur = 0x12D1110;
    crabaddr SetBloom = 0x12D0FF0;
    crabaddr SetChromaticAberration = 0x12D1070;
    crabaddr SetAO = 0x12D0FB0;
};

namespace Prompt {
    crabaddr Update = 0x12CC660;
    crabaddr Awake = 0x12CA4F0;
    craboffset prompt = 0x18;
    craboffset prompts = 0x20;
};

namespace PromptPrefab {
    crabaddr RemovePrompt = 0x11DC8F0;
    crabaddr Update = 0x11DCA50;
    crabaddr Awake = 0x11DC830;
    crabaddr SetPrompt = 0x11DC970;
    craboffset header = 0x18;
    craboffset filler = 0x20;
};

namespace PunchPlayers {
    crabaddr Punch = 0xCEB020;
    craboffset sfx = 0x18;
    craboffset whatIsPlayers = 0x24;
};

namespace Quest {
    craboffset minPlayers = 0x18;
    craboffset name = 0x20;
    craboffset questId = 0x30;
};

namespace RaceUI {
    crabaddr Start = 0x12AEBA0;
    crabaddr SlowUpdate = 0x12AE890;
    craboffset score = 0x18;
    craboffset overlay = 0x20;
    craboffset safe = 0x28;
    craboffset danger = 0x38;
};

namespace RandomSfx {
    crabaddr Awake = 0x1710500;
    crabaddr Stop = 0x1710680;
    crabaddr Randomize = 0x1710590;
    craboffset sounds = 0x18;
    craboffset playOnAwake = 0x30;
};

namespace ReadyDisplay {
    crabaddr Awake = 0x14EB230;
    crabaddr SlowUpdate = 0x14EB2D0;
    craboffset prefab = 0x18;
    craboffset content = 0x20;
};

namespace ReadyPrefabUi {
    crabaddr UpdateUi = 0x177D970;
    crabaddr SetPlayer = 0x177D940;
    craboffset username = 0x18;
    craboffset overlay = 0x20;
    craboffset ready = 0x30;
    craboffset notReady = 0x40;
};

namespace RedLightSafeZone {
    crabaddr OnTriggerEnter = 0x1416870;
    crabaddr OnTriggerExit = 0x14169B0;
    crabaddr Awake = 0x14167D0;
    craboffset safePlayers = 0x18;
};

namespace RedLightStatue {
    crabaddr RedLight = 0x1450BD0;
    crabaddr Awake = 0x1450A10;
    crabaddr Update = 0x1450EC0;
    crabaddr PlayAlarm = 0x1450B90;
    crabaddr GreenLight = 0x1450AE0;
    craboffset whatIsRaycast = 0x68;
    craboffset redLightSfx = 0x70;
    craboffset otherSfx = 0x78;
    craboffset scanSfx = 0x80;
    craboffset babySfx = 0x88;
    craboffset redLight = 0x90;
    craboffset greenLight = 0x98;
    craboffset turn = 0xA0;
    craboffset spot = 0xA8;
};

namespace ReloadUI {
    crabaddr Update = 0x10B5520;
    crabaddr StartReload = 0x10B4C50;
    crabaddr Awake = 0x10B4BE0;
    craboffset currentBar = 0x18;
};

namespace ResetSave {
    crabaddr Reset = 0x1737410;
};

namespace ResolutionSetting {
    crabaddr ApplySetting = 0xE34300;
    crabaddr Scroll = 0xE34400;
    crabaddr SetSettings = 0xE34410;
    craboffset scrollLeft = 0x28;
    craboffset scrollRight = 0x30;
    craboffset settingText = 0x38;
};

namespace RevealPlayerNames {
    crabaddr SlowUpdate = 0x17F03F0;
    crabaddr Awake = 0x17F0350;
    craboffset playersVisible = 0x18;
    craboffset whatIsPlayer = 0x20;
};

namespace RewardUI {
    crabaddr Update = 0x108DCE0;
    crabaddr Awake = 0x1087BA0;
    crabaddr NewReward = 0x1087D40;
    craboffset line = 0x18;
    craboffset header = 0x20;
    craboffset rewardText = 0x28;
    craboffset top = 0x30;
    craboffset bot = 0x38;
    craboffset topOffset = 0x40;
    craboffset botOffset = 0x44;
    craboffset group = 0x78;
    craboffset sfx = 0x80;
};

namespace RisingLava {
    crabaddr Awake = 0x1474640;
    crabaddr Update = 0x1475DC0;
    craboffset spawnPos = 0x18;
    craboffset desiredPos = 0x24;
    craboffset lavaTime = 0x30;
};

namespace RotateAround {
    crabaddr Update = 0x140FA50;
    craboffset target = 0x18;
    craboffset speed = 0x20;
};

namespace RotationObject {
    crabaddr FixedUpdate = 0x1137E40;
    crabaddr Start = 0x11380E0;
    crabaddr Awake = 0x1137C30;
    craboffset axis = 0x18;
    craboffset speed = 0x24;
    craboffset offset = 0x40;
};

namespace SaveManager {
    crabaddr Awake = 0x10607D0;
    crabaddr Save = 0x1060E30;
    crabaddr Load = 0x1060940;
    crabaddr NewSave = 0x1060BF0;
    craboffset state = 0x18;
};

namespace ScoreVisuals {
    crabaddr Start = 0x14F6730;
    craboffset ps = 0x18;
    craboffset emission = 0x20;
    craboffset sfx = 0x28;
};

namespace ScrollSettings {
    crabaddr Scroll = 0x1037F10;
    crabaddr SetSettings = 0x1037F20;
    craboffset settingText = 0x28;
    craboffset scrollLeft = 0x38;
    craboffset scrollRight = 0x40;
};

namespace ServerClock {
    crabaddr Update = 0x1037CF0;
    crabaddr SyncClock = 0x10308C0;
    crabaddr SetClock = 0x1030870;
    crabaddr Awake = 0x1030730;
};

namespace ServerHandle {
    crabaddr PlayerInventorySerialized = 0xBEC320;
    crabaddr GameModeLoaded = 0xBEA870;
    crabaddr PlayerReload = 0xBEC780;
    crabaddr UseItem = 0xBFB4E0;
    crabaddr SyncObject = 0xBED2C0;
    crabaddr PlayerActiveItem = 0xBEBA40;
    crabaddr PlayerDropSerialized = 0xBEC1F0;
    crabaddr HandShake = 0xBEB160;
    crabaddr Ping = 0xBEB9C0;
    crabaddr ButtonPressed = 0xBEA210;
    crabaddr CrabDamage = 0xBEA420;
    crabaddr FreezeTimeRequest = 0xBEA7A0;
    crabaddr StartedLoading = 0xBED240;
    crabaddr LoadingRequestEnterGame = 0xBEB2C0;
    crabaddr GameRequestToSpawn = 0xBEAE30;
    crabaddr PlayerPosition = 0xBEC470;
    crabaddr RequestGameStartedCooldown = 0xBECF10;
    crabaddr PingPong = 0xBEB960;
    crabaddr TryInteract = 0xBED680;
    crabaddr VoiceChatOnOrOff = 0xBFB900;
    crabaddr TryDropItem = 0xBED370;
    crabaddr GetClientPing = 0xBEB0C0;
    crabaddr PunchPlayer = 0xBEC970;
    crabaddr SpectatingWho = 0xBED050;
    crabaddr LoadMapRequest = 0xBEB1E0;
    crabaddr PlayerReceivedDrop = 0xBEC620;
    crabaddr PlayerDied = 0xBEC0A0;
    crabaddr PhysicsObjectSnapshot = 0xBEB7A0;
    crabaddr SendProximityVoice = 0x2257B0;
    crabaddr PlayerDamage = 0xBEBB60;
    crabaddr ColorChangeRequest = 0xBEA2D0;
    crabaddr ReceiveChatMessage = 0xBECDF0;
    crabaddr GameRequestAllPlayers = 0xBEA8E0;
    crabaddr PlayerRotation = 0xBEC810;
    crabaddr TryBuyItem = 0x2257B0;
    crabaddr PlayerAnimation = 0xBEBAC0;
};

namespace ServerList {
    crabaddr OnEnable = 0xCDFD90;
    crabaddr RefreshMultiplayerLobbies = 0xCDFF20;
    crabaddr RefreshLobbies = 0xCDFEA0;
    craboffset serverListingPrefab = 0x18;
    craboffset listParent = 0x20;
    craboffset bufferIcon = 0x28;
    craboffset closeToggle = 0x30;
    craboffset minPlayersToggle = 0x38;
    craboffset startedToggle = 0x40;
};

namespace ServerPackets {
};

namespace ServerSend {
    crabaddr GameOver = 0x12DA720;
    crabaddr PingPong = 0x12DBB40;
    crabaddr DropMoney = 0x12DA1F0;
    crabaddr SetBomber = 0x12DED20;
    crabaddr PunchPlayer = 0x12DC7B0;
    crabaddr PlayerActiveItem = 0x12DBD20;
    crabaddr SpectatorSpawn_ulong = 0x12DF010;
    crabaddr RedLight = 0x12DC8E0;
    crabaddr CrabDifficulty = 0x12D9DE0;
    crabaddr LoadingSendAllIntoGame = 0x12DAFD0;
    crabaddr SendGameModeTimer_ulong_float_int = 0x12DD2C0;
    crabaddr StartGame = 0x12DF4B0;
    crabaddr ForceGiveItem = 0x12DA310;
    crabaddr SendButtonState = 0x12DCD30;
    crabaddr SyncObject = 0x12DF930;
    crabaddr PlayerRotation = 0x12DC680;
    crabaddr UseItemAll = 0x12E3FC0;
    crabaddr SendSpectatingWho = 0x12DE580;
    crabaddr PlayerReload = 0x12DC560;
    crabaddr GameStartedCooldown = 0x12DAAA0;
    crabaddr StandoffToggle = 0x12DF280;
    crabaddr PieceFall = 0x12DBA50;
    crabaddr UseItem = 0x12E4110;
    crabaddr SendReadyPlayers = 0x12DDF70;
    crabaddr PlayerDamage = 0x12DBF50;
    crabaddr LoadMap_int_int_ulong = 0x12DADA0;
    crabaddr PlayerReceivedDrop = 0x12DC300;
    crabaddr LobbyMapUpdate = 0x12DB390;
    crabaddr StartLobby_List_ulong = 0x12DF6D0;
    crabaddr CrabHp = 0x12D9ED0;
    crabaddr SendTileUpdates = 0x12DE960;
    crabaddr PhysicsObjectSnapshot = 0x12DB8B0;
    crabaddr GameSpawnPlayer = 0x12DA840;
    crabaddr LoadingState = 0x12DB190;
    crabaddr CrabAnimation = 0x12D9CF0;
    crabaddr ToggleLights = 0x12DFB60;
    crabaddr TagPlayer = 0x12DFA60;
    crabaddr SendChatMessage = 0x12DCE20;
    crabaddr RequestCosmetics = 0x12DCA10;
    crabaddr GiveHat = 0x12DABA0;
    crabaddr Ping = 0x12DBC20;
    crabaddr LobbySettingsUpdate = 0x12DB590;
    crabaddr PlayerPosition = 0x12DC1E0;
    crabaddr SendSerializedInventory = 0x12DE460;
    crabaddr SendCrabBall = 0x12DCF50;
    crabaddr SendSerializedDrop = 0x12DE340;
    crabaddr RespawnPlayer = 0x12DCAF0;
    crabaddr SendKingScores = 0x12DD730;
    crabaddr SendPlayerPings = 0x12DDB10;
    crabaddr ButtonSetNextPlayer = 0x12D9AF0;
    crabaddr SendPlayerReady = 0x12DDCA0;
    crabaddr SpawnBoulder = 0x12DEE20;
    crabaddr LoadMap_int_int = 0x12DAEC0;
    crabaddr SendFallingBlocks = 0x12DD070;
    crabaddr SendPieces = 0x12DDA10;
    crabaddr SendStrobe = 0x12DE6A0;
    crabaddr FreezePlayers = 0x12DA530;
    crabaddr SpectatorSpawn_ulong_ulong = 0x12DEF10;
    crabaddr DropItem = 0x12DA0B0;
    crabaddr SendModeState = 0x12DD920;
    crabaddr SendBlockCrush = 0x12DCC10;
    crabaddr CrabTarget = 0x12D9FC0;
    crabaddr MoneyUpdate = 0x12DB7B0;
    crabaddr PlayerDied = 0x12DC0B0;
    crabaddr SendToLobby = 0x12DEB50;
    crabaddr SendHatScores = 0x12DD540;
    crabaddr Interact = 0x12DACA0;
    crabaddr PlayerAnimation = 0x12DBE20;
    crabaddr LobbyClosed = 0x12DB290;
    crabaddr StartLobby_List = 0x12DF580;
    crabaddr SendGameModeTimer_float_int = 0x12DD1B0;
    crabaddr SendGlassPieces = 0x12DD3E0;
    crabaddr ChangeColor = 0x12D9BF0;
    crabaddr ButtonPressed = 0x12D99F0;
    crabaddr SendWinner = 0x12DEC20;
    crabaddr MakeSeeker = 0x12DB6B0;
    crabaddr ForceRemoveItem = 0x12DA430;
    crabaddr SendProximityVoice = 0x12DDDA0;
    crabaddr StandoffUpdate = 0x12DF370;
    crabaddr SyncClock = 0x12DF830;
    crabaddr SendTeams = 0x12DE770;
    crabaddr GameModeAlert = 0x12DA620;
    crabaddr LoadingSendIntoGame = 0x12DB0B0;
};

namespace ServerUIPrefab {
    crabaddr SetUI = 0x147BB70;
    crabaddr UpdateMap = 0x147D880;
    crabaddr JoinLobby = 0x147BAE0;
    crabaddr PlayerCount = 0x147BB60;
    craboffset previewImg = 0x18;
    craboffset title = 0x20;
    craboffset players = 0x28;
    craboffset lobbyState = 0x30;
    craboffset versionNumber = 0x38;
    craboffset micIcon = 0x40;
    craboffset micOn = 0x48;
    craboffset micOff = 0x50;
    craboffset blue = 0x58;
    craboffset red = 0x68;
    craboffset joinButton = 0x78;
    craboffset modified = 0x90;
    craboffset modifiedText = 0x98;
    craboffset modifiedColor = 0xA0;
    craboffset modifiedImg = 0xB8;
    crabaddr MoveNext = 0xF8B8C0;
};

namespace Setting {
};

namespace Settings {
    crabaddr IntToBool = 0x6D8680;
    crabaddr ResetSaveFile = 0xEA69E0;
    crabaddr Start = 0xEA6AD0;
    craboffset backBtn = 0x18;
    craboffset fov = 0x28;
    craboffset sens = 0x30;
    craboffset inputDelay = 0x38;
    craboffset invertedHor = 0x40;
    craboffset invertedVer = 0x48;
    craboffset grass = 0x50;
    craboffset tutorial = 0x58;
    craboffset chat = 0x60;
    craboffset streamerMode = 0x68;
    craboffset backward = 0x78;
    craboffset left = 0x80;
    craboffset right = 0x88;
    craboffset jump = 0x90;
    craboffset sprint = 0x98;
    craboffset interact = 0xA0;
    craboffset inventory = 0xA8;
    craboffset drop = 0xB0;
    craboffset map = 0xB8;
    craboffset crouch = 0xC0;
    craboffset holdCrouch = 0xC8;
    craboffset leftClick = 0xD0;
    craboffset rightClick = 0xD8;
    craboffset softParticles = 0x110;
    craboffset motionBlur = 0x120;
    craboffset ao = 0x128;
    craboffset fullscreen = 0x138;
    craboffset fpsLimit = 0x150;
    craboffset music = 0x160;
    craboffset voipVolume = 0x168;
    craboffset inputVolume = 0x170;
    craboffset micButtonSetting = 0x180;
    craboffset deaf = 0x188;
    craboffset devices = 0x190;
};

namespace ShaderInteractor {
    crabaddr Update = 0x1060F20;
};

namespace SharedObject {
    crabaddr GetId = 0x250040;
    crabaddr SetId = 0x250090;
    crabaddr OnDestroy = 0x2257B0;
    crabaddr Start = 0x11DD020;
    craboffset id = 0x18;
};

namespace SharedObjectManager {
    crabaddr GetNextId = 0x11BFD00;
    crabaddr GetSharedObject = 0x11BFD70;
    crabaddr GetDictionary = 0x268C40;
    crabaddr IsOIdTakenBySelf = 0x11BFDD0;
    crabaddr Contains = 0x11BFCA0;
    crabaddr AddObject = 0x11BFB80;
    crabaddr Awake = 0x11BFC00;
    crabaddr RemoveObject = 0x11BFEB0;
};

namespace ShopItemPrefab {
    crabaddr TryBuy = 0x2257B0;
    crabaddr OnPointerClick = 0x14F5E20;
    crabaddr OnPointerEnter = 0x2257B0;
    crabaddr Start = 0x2257B0;
    crabaddr Update = 0x14F6620;
    crabaddr UpdateItem = 0x2257B0;
    crabaddr OnPointerExit = 0x14F5E20;
    craboffset itemName = 0x28;
    craboffset itemPrice = 0x30;
    craboffset itemIcon = 0x38;
    craboffset cantAffordOverlay = 0x40;
    craboffset overlayGroup = 0x48;
    craboffset buyText = 0x50;
};

namespace ShopWindow {
    crabaddr UpdateShop = 0x10C5180;
    crabaddr InitShop = 0x10BBD20;
    craboffset itemPrefabUi = 0x18;
    craboffset shopTabPrefab = 0x20;
    craboffset tabBtnPrefab = 0x28;
    craboffset tabBtnParent = 0x30;
    craboffset shopTabParent = 0x38;
    craboffset baseContentParent = 0x40;
    craboffset tabNavigation = 0x48;
    craboffset items = 0x50;
};

namespace SliderSetting {
    crabaddr Truncate = 0x1596810;
    crabaddr SetSettings = 0x1596740;
    crabaddr UpdateSettings = 0x1598CE0;
    craboffset slider = 0x28;
    craboffset value = 0x30;
};

namespace SmokeLeg {
    crabaddr OnTriggerEnter = 0x1422B10;
    crabaddr GetReady = 0x1422B00;
    craboffset smokeFx = 0x18;
    craboffset cooldown = 0x20;
};

namespace SoundComponent {
    craboffset use = 0x18;
    craboffset equip = 0x20;
    craboffset reload = 0x28;
    craboffset hit = 0x30;
};

namespace SpawnZone {
    crabaddr GetRandomPosition = 0xDDAB70;
    crabaddr OnDrawGizmos = 0xDDAD40;
    craboffset size = 0x18;
};

namespace SpawnZoneManager {
    crabaddr SpawnNewZone = 0x2257B0;
    crabaddr Awake = 0x170AFE0;
    crabaddr FindGroundedSpawnPosition = 0x170B100;
    craboffset spawnZonePrefab = 0x18;
};

namespace StageController {
    crabaddr UpdateText = 0x10192B0;
    crabaddr RedLight = 0x2257B0;
    crabaddr CloseStage = 0x1016720;
    crabaddr PressButton = 0x10168A0;
    crabaddr GreenLight = 0x2257B0;
    crabaddr SetButtonState = 0x1016980;
    crabaddr ShowTimer = 0x2257B0;
    crabaddr Awake = 0x1016640;
    crabaddr OpenStage = 0x10167E0;
    crabaddr ResetButtons = 0x10168F0;
    crabaddr CanPressButton = 0x10166E0;
    craboffset buttons = 0x18;
    craboffset forceFieldGreen = 0x20;
    craboffset forceFieldRed = 0x28;
    craboffset forceFieldVisuals = 0x30;
    craboffset forceFieldCollider = 0x38;
    craboffset buttonTimer = 0x40;
    craboffset green = 0x48;
    craboffset red = 0x50;
    craboffset clock = 0x58;
    craboffset next = 0x60;
};

namespace StageForceField {
    crabaddr GetReady = 0x1422B00;
    crabaddr OnTriggerStay = 0x1480E20;
    craboffset pushDir = 0x18;
};

namespace StationInteract {
    crabaddr TryInteract = 0x17325F0;
    crabaddr AllInteract = 0x1732530;
    crabaddr ServerInteract = 0x17325B0;
    crabaddr LocalInteract = 0x1732570;
    crabaddr CanInteract = 0x222260;
};

namespace StationUI {
    crabaddr Start = 0x14154D0;
    crabaddr CloseStation = 0x1415400;
    crabaddr OpenStation = 0x1415450;
    crabaddr Awake = 0x14153B0;
    craboffset shopWindow = 0x18;
    craboffset currentWindow = 0x20;
};

namespace StatusUI {
    crabaddr Awake = 0x9AD480;
    crabaddr SetStartedStatus = 0x9AD900;
    crabaddr SetReadyStatus = 0x9AD5B0;
    crabaddr ToggleUI = 0x9ADA40;
    crabaddr HideUI = 0x9AD550;
    craboffset hpCircle = 0x18;
    craboffset ammoCircle = 0x20;
    craboffset playerCount = 0x28;
    craboffset countdown = 0x30;
    craboffset lobbyStatus = 0x38;
    craboffset readyText = 0x40;
    craboffset timer = 0x48;
    craboffset moneyText = 0x50;
    craboffset taskDescription = 0x58;
};

namespace SteamManager {
    crabaddr Update = 0x1157950;
    crabaddr TryToReconnectToSteam = 0x114FA60;
    crabaddr OtherLobbyMemberJoined = 0x114EFF0;
    crabaddr JoinLobby = 0x114E710;
    crabaddr IsLobbyOwner = 0x114E6A0;
    crabaddr StartLobby = 0x114F580;
    crabaddr OnApplicationQuit = 0x114EF80;
    crabaddr LeaveLobby = 0x114E900;
    crabaddr UpdateRichPresenceStatus = 0x1157CC0;
    crabaddr StopP2P = 0x114F9D0;
    crabaddr OnEnable = 0x114EF90;
    crabaddr Awake = 0x114E250;
    crabaddr NewAcceptP2P_CSteamID = 0x114EE90;
    crabaddr OnDisable = 0x114EF80;
    crabaddr Start = 0x114F5F0;
    crabaddr NewAcceptP2P_SteamNetworkingIdentity = 0x114EE10;
    crabaddr ConnectedToSteam = 0x28BA50;
    crabaddr OtherLobbyMemberLeft = 0x114F210;
    crabaddr OnDestroy = 0x114EF80;
    crabaddr OpenFriendOverlayForGameInvite = 0x114EFE0;
    craboffset gameAppId = 0x8;
    craboffset currentLobby = 0x40;
    craboffset originalLobbyOwnerId = 0x48;
    crabaddr MoveNext = 0xF7B5D0;
};

namespace SteamManagerNative {
    crabaddr Awake = 0x1061050;
    crabaddr OnDestroy = 0x10614F0;
    crabaddr OnEnable = 0x10615F0;
    crabaddr Update = 0x10622C0;
};

namespace SteamPacketManager {
    crabaddr CheckForPackets = 0x9B2FF0;
    crabaddr InitializeClientData = 0x9B3570;
    crabaddr InitializeServerPackets = 0x9B4BA0;
    crabaddr Update = 0x9DCFB0;
    crabaddr Awake = 0x9B2F50;
    crabaddr OnApplicationQuit = 0x9B5690;
    crabaddr CloseConnections = 0x9B3260;
    craboffset packetsUp = 0x68;
    craboffset bytesUp = 0x6C;
    craboffset packetsDown = 0x70;
    craboffset bytesDown = 0x74;
};

namespace SussyBaka {
    crabaddr Baka = 0x2257B0;
    craboffset onlinePlayer = 0x18;
};

namespace TabNavigate {
    crabaddr Init = 0x17475B0;
    crabaddr AddNewTab = 0x1747430;
    crabaddr OnEnable = 0x1747870;
    crabaddr Select = 0x1747880;
    crabaddr Awake = 0x17475A0;
    craboffset tabsParent = 0x18;
    craboffset btnsParent = 0x20;
    craboffset selectedColor = 0x38;
    craboffset idleColor = 0x48;
};

namespace TeamSpawnsManager {
    crabaddr TeamToClothes = 0x1081880;
    crabaddr GetPosition = 0x1081820;
    crabaddr Awake = 0x10817D0;
    craboffset zones = 0x18;
    craboffset sweaters = 0x20;
    craboffset pants = 0x28;
};

namespace TestModeMaps {
    crabaddr Start = 0xE21150;
    craboffset gameMode = 0x18;
};

namespace TestRagdolls {
    crabaddr Update = 0x2257B0;
    craboffset ragdollPrefab = 0x18;
};

namespace TestRocks {
    crabaddr Start = 0x122FD20;
    craboffset rock = 0x18;
    craboffset spawnZone = 0x20;
};

namespace TestStuff {
    crabaddr EatShit = 0x176AC20;
};

namespace Tile {
    crabaddr OnTriggerEnter = 0x1446B80;
    crabaddr OnTriggerExit = 0x1446F30;
    crabaddr Start = 0x14472A0;
    crabaddr Update = 0x144AC50;
    craboffset mesh = 0x40;
    craboffset movePart = 0x50;
};

namespace TileDriveUI {
    crabaddr SetTeam = 0x11B5080;
    crabaddr SlowUpdate = 0x11B5190;
    crabaddr Awake = 0x11B4F00;
    craboffset backdrop = 0x18;
    craboffset score = 0x20;
    craboffset teamText = 0x28;
};

namespace TileManager {
    crabaddr TeamToText = 0x1364470;
    crabaddr TeamToColor = 0x13643F0;
    crabaddr PlayTile = 0x1364220;
    crabaddr Awake = 0x1364140;
    crabaddr TeamToClothes = 0x13642D0;
    crabaddr ServerUpdateTile = 0x1364260;
    craboffset tiles = 0x18;
    craboffset onSfx = 0x20;
    craboffset offSfx = 0x28;
    craboffset idToTeam = 0x30;
    craboffset red = 0x38;
    craboffset blue = 0x48;
    craboffset green = 0x58;
    craboffset pink = 0x68;
    craboffset sweaters = 0x78;
    craboffset pants = 0x80;
};

namespace Timer {
    crabaddr IsRunning = 0x39F120;
    crabaddr Update = 0x123D820;
    crabaddr Awake = 0x123BBA0;
};

namespace TopNavigate {
    crabaddr Select = 0x14D8E00;
    crabaddr OnEnable = 0x14D8DE0;
    craboffset settingMenus = 0x18;
    craboffset btns = 0x20;
    craboffset selectedColor = 0x28;
    craboffset idleColor = 0x38;
    craboffset useLastSelected = 0x48;
};

namespace TopRightStatusUi {
    crabaddr Start = 0x11A84B0;
    craboffset playersGood = 0x18;
    craboffset playersBad = 0x20;
    craboffset playersGoodText = 0x28;
    craboffset playersBadText = 0x30;
    craboffset redColor = 0x40;
    craboffset greenColor = 0x50;
    craboffset bg = 0x60;
    craboffset killsText = 0x68;
};

namespace Transition {
    crabaddr Awake = 0x15F3080;
    craboffset overlay = 0x20;
};

namespace TransparencyCaptureToFile {
    crabaddr Update = 0x1808900;
};

namespace UiBtn {
    crabaddr OnPointerExit = 0x1779170;
    crabaddr OnEnable = 0x1779150;
    crabaddr OnPointerEnter = 0x1779160;
    crabaddr Awake = 0x1779100;
    crabaddr Update = 0x177D6D0;
    craboffset text = 0x18;
};

namespace VersionUI {
    crabaddr SetId = 0x17A8140;
    crabaddr Start = 0x2257B0;
    crabaddr Awake = 0x17A80D0;
    craboffset versionText = 0x18;
};

namespace VignetteController {
    crabaddr Update = 0xCD97A0;
    crabaddr SetAlpha = 0xCD38D0;
    crabaddr Damage = 0xCD3850;
    craboffset damageVignette = 0x18;
};

namespace VoiceChat {
    crabaddr Awake = 0x17A6F50;
};

namespace VoiceChatTransform {
    crabaddr Update = 0x151FFA0;
    crabaddr PlayerDied = 0x151E230;
    crabaddr Start = 0x151E2D0;
    crabaddr SetNewTarget = 0x26C1E0;
    crabaddr StopAudio = 0x151E300;
    craboffset target = 0x18;
    craboffset pm = 0x20;
};

namespace WaterSplash {
    crabaddr OnTriggerEnter = 0x1296950;
    crabaddr Awake = 0x12968E0;
    craboffset splashFx = 0x18;
};

namespace WeaponComponent {
};

namespace WinManager {
    crabaddr Continue = 0x1425190;
    crabaddr Start = 0x14251E0;
    craboffset nameText = 0x18;
    craboffset priceText = 0x20;
    craboffset otherText = 0x28;
    craboffset playerText = 0x30;
    craboffset pricePool = 0x0;
    craboffset winnerName = 0x8;
    craboffset winnerId = 0x10;
    craboffset winnerCosmetics = 0x38;
};

namespace WorkshopUtility {
    crabaddr Awake = 0x113E8D0;
    craboffset workshopPath = 0x0;
    craboffset defaultAssetsPath = 0x8;
};

#endif