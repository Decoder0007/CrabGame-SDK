#include "CrabGameSDK.h"
#include <cstdio>
#include <iostream>
#include "IL2CppTypes.h"

void CrabGameSDK::Initialise() {
    CrabHook::Initialise();
    Base = reinterpret_cast<crabaddr>(GetModuleHandleA(NULL));
    GameAssembly = reinterpret_cast<crabaddr>(GetModuleHandleA("GameAssembly.dll"));
    AllocConsole();
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    std::cout << "CrabGame-SDK Initiated" << std::endl;
}

crabaddr CrabGameSDK::AddOffsets(void* base, craboffset ...) {
    crabaddr sum = reinterpret_cast<crabaddr>(base);
    va_list args;
    va_start(args, base);
    craboffset arg;
    while (true) {
        arg = va_arg(args, craboffset);
        if (!arg) break;
        sum += arg;
    }
    va_end(args);
    return sum;
}