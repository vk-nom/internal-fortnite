#include "stdafx.h"

/*

	- Nucleon

	- Made By: Ticxsy. 
	- With Help from: Catlet1, Sinclairq.

*/

void main() {
	std::cout << "[Nucleon] Starting..." << std::endl;
	// UWorld
	define::UWorld_Offset = Utilities::occurance->Find(GetModuleHandleW(nullptr), ("\x48\x89\x05\x00\x00\x00\x00\x48\x8B\x8B\x00\x00\x00\x00"),
		"xxx????xxx????", 0);
	define::UWorld_Offset = reinterpret_cast<decltype(define::UWorld_Offset)>(rva(define::UWorld_Offset, 7));

	printf("[Nucleon] UWorld: 0x%x", define::gWorld - (SDK::UWorld*)GetModuleHandleW(nullptr));

	// GObjects
	define::GObjects = Utilities::occurance->Find(GetModuleHandleW(NULL), "\x48\x8B\x05\x00\x00\x00\x00\x48\x8B\x0C\xC8\x48\x8B\x04\xD1",
		"xxx????xxxxxxxx", 0);
	auto offset = *reinterpret_cast<uint32_t*>(define::GObjects + 3);
	define::GObjects = reinterpret_cast<decltype(define::GObjects)>(define::GObjects + 7 + offset);

	printf("\n[Nucleon] GObjects: 0x%x", define::GObjects - (PBYTE)GetModuleHandleW(nullptr));

	// GNames
	define::GNames = Utilities::occurance->Find(GetModuleHandleW(nullptr), ("\x0F\x84\x00\x00\x00\x00\x48\x8D\x05\x00\x00\x00\x00\x48\x83\xC4\x28\xC3"),
		"xx????xxx????xxxxx", 0);
	offset = *reinterpret_cast<uint32_t*>(define::GNames + 9);
	define::GNames = reinterpret_cast<decltype(define::GNames)>(define::GNames + 13 + offset);

	printf("\n[Nucleon] GNames: 0x%x\n", define::GNames - (PBYTE)GetModuleHandleW(nullptr));

	// BoneMatrix
	GetBoneMatrix = Utilities::occurance->Find(GetModuleHandleW(nullptr), "\xE8\x00\x00\x00\x00\x48\x8B\x47\x30\xF3\x0F\x10\x45\x00",
		("x????xxxxxxxx?"), 0);
	GetBoneMatrix = reinterpret_cast<decltype(GetBoneMatrix)>(rva(GetBoneMatrix, 5));
	printf("[Nucleon] GetBoneMatrix: 0x%x\n", GetBoneMatrix - (PBYTE)GetModuleHandleW(nullptr));

	// Hook
	canvas::draw->AHUD->Hook();
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:

		DisableThreadLibraryCalls(hModule);
		AllocConsole();
		freopen("conin$", "r", stdin);
		freopen("conout$", "w", stdout);
		freopen("conout$", "w", stderr);
		main();

		return TRUE;
	}

	return FALSE;
}
