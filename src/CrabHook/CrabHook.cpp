#include "CrabHook.h"

void CrabHook::Initialise() {
	MH_Initialize();
}

std::string addrToHex(crabaddr address) {
	std::stringstream stream;
	stream << std::hex << address;
	std::string hex_string = stream.str();
	return hex_string;
}

void CrabHook::CreateHook(crabaddr address, void* detour, void* trampoline, bool enabled) {
	std::cout << "Hooking [" << addrToHex(address) << "]... ";
	std::cout << ((MH_CreateHook((LPVOID)(address), (LPVOID)detour, (LPVOID*)trampoline) == MH_OK) ? "Success   " : "Error   ");
	if (enabled) CrabHook::EnableHook(address);
	else std::cout << std::endl;
}

void CrabHook::RemoveHook(crabaddr address) {
	std::cout << "Removing Hook [" << addrToHex(address) << "]... ";
	std::cout << ((MH_RemoveHook((LPVOID)(address)) == MH_OK) ? "Success" : "Error") << std::endl;
}

void CrabHook::EnableHook(crabaddr address) {
	std::cout << "Enabling Hook [" << addrToHex(address) << "]... ";
	std::cout << ((MH_EnableHook((LPVOID)(address)) == MH_OK) ? "Success" : "Error") << std::endl;
}

void CrabHook::DisableHook(crabaddr address) {
	std::cout << "Disabling Hook [" << addrToHex(address) << "]... ";
	std::cout << ((MH_DisableHook((LPVOID)(address)) == MH_OK) ? "Success" : "Error") << std::endl;
}

int CrabHook::GetIntAtOffset(crabaddr address) {
	return *(reinterpret_cast<int*>(address));
}

float CrabHook::GetFloatAtOffset(crabaddr address) {
	return *(reinterpret_cast<float*>(address));
}

bool CrabHook::GetBoolAtOffset(crabaddr address) {
	return *(reinterpret_cast<bool*>(address));
}

void* CrabHook::GetObjectAtOffset(crabaddr address) {
	return (reinterpret_cast<void*>(address));
}