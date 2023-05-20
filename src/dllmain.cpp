#include "CrabGameSDK.h"
#include "CrabGame.h"
#include <iostream>

namespace CG = CrabGameSDK;

void(*PunchPlayer)(uintptr_t, ULONG, ULONG, Vector3, void*);
void PunchPlayerHook(uintptr_t gameManager, ULONG puncher, ULONG punched, Vector3 dir, void* methodInfo) {
    PunchPlayer(gameManager, puncher, punched, dir, methodInfo);
    std::cout << puncher << " punched " << punched << std::endl;
    reinterpret_cast<void(*)(ULONG, ULONG, Vector3)>(CG::GameAssembly + ServerSend::PlayerDied)(punched, 0, {});
}

DWORD WINAPI Main(void* hModule) {
    CG::Initialise();
    CrabHook::CreateHook(CG::GameAssembly + GameManager::PunchPlayer, PunchPlayerHook, &PunchPlayer, true);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved ) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH: CreateThread(0, 0x1000, Main, hModule, 0, 0);
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH: break;
    }
    return TRUE;
}