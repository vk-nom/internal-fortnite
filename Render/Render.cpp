
#include "Render.h"

inline bool SetWorld() {

	define::gWorld = (SDK::UWorld*)(*(uintptr_t*)define::UWorld_Offset);
	if (!define::gWorld) return false;
	if (!define::gWorld->OwningGameInstance) return false;
	if (!define::gWorld->OwningGameInstance->LocalPlayers[0]) return false;
	if (!define::gWorld->OwningGameInstance->LocalPlayers[0]->PlayerController) return false;

	define::LocalPlayer = define::gWorld->OwningGameInstance->LocalPlayers[0];
	define::PlayerController = define::gWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;

	return true;
}

inline void canvas::render::hud::PostRender(SDK::UCanvas* pCanvas) {
	if (!pCanvas) return;
	if (!SetWorld()) return;
	KeyNames();

	canvas::draw->Circle(pCanvas, width / 2, height / 2, 125, 30, SDK::FLinearColor(255.0f, 255.0f, 255.0f, 255.0f));

}

inline void hkPostRender(SDK::UObject* pObject, SDK::UCanvas* pCanvas) {
	if (pCanvas) {
		width = pCanvas->SizeX;
		height = pCanvas->SizeY;
		define::SetObjects();

		canvas::draw->AHUD->PostRender(pCanvas);

	}

	return canvas::RetPostRender(pObject, pCanvas);
}

void canvas::render::hud::Hook() {
	
	// Still leaving this out.

}