#ifndef CRAB_HOOK_H
#define CRAB_HOOK_H

#pragma once
#include "Minhook.h"
#include <string>
#include <iostream>
#include <sstream>

typedef uintptr_t crabaddr;
typedef uintptr_t craboffset;

namespace CrabHook {
	void Initialise();
	void CreateHook(crabaddr address, LPVOID detour, void* trampoline, bool enabled = true);
	void RemoveHook(crabaddr address);
	void EnableHook(crabaddr address);
	void DisableHook(crabaddr address);

	int GetIntAtOffset(crabaddr address);
	float GetFloatAtOffset(crabaddr address);
	bool GetBoolAtOffset(crabaddr address);
	void* GetObjectAtOffset(crabaddr address);
}

#endif