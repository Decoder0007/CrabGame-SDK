#ifndef CRAB_GAME_SDK_H
#define CRAB_GAME_SDK_H

#pragma once
#include "CrabHook.h"
#include "IL2CppTypes.hpp"

namespace CrabGameSDK {
	void Initialise();
	crabaddr AddOffsets(void* base, craboffset ...);
	inline crabaddr Base;
	inline crabaddr GameAssembly;
}
#endif