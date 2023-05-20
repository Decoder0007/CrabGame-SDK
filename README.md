# CrabGame-SDK
## C++ SDK for CrabGame

Features:
 - All of the games known addresses e.g. GameManager::PunchPlayer represents 0xE299E0
 - CrabHook module for easy hooking and detouring
 - il2cpp types including things like Vector3 and generic_dictionary
 - UnityEngine.hpp which contains most of the used UnityEngine classes with functions already reverse engineered
 - Easy to pickup

# Example
The following code will print who punched who everytime the GameManager::PunchPlayer function gets called
```cpp
#include "CrabGameSDK.h"
#include "CrabGame.h"
#include <iostream>

namespace CG = CrabGameSDK;

void(*PunchPlayer)(uintptr_t, ULONG, ULONG, Vector3, void*);
void PunchPlayerHook(uintptr_t gameManager, ULONG puncher, ULONG punched, Vector3 dir, void* methodInfo) {
    PunchPlayer(gameManager, puncher, punched, dir, methodInfo);
    std::cout << puncher << " punched " << punched << std::endl;
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
```
