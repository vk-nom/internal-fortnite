#pragma once

#include "../stdafx.h"

class define {
public:

	static inline PBYTE UWorld_Offset = 0;
	inline static SDK::UWorld* gWorld = 0;
	inline static SDK::UGameplayStatics* GamePlayStatics = 0;
	inline static SDK::UKismetMathLibrary* MathamaticsLibrary = 0;
	inline static SDK::UFortKismetLibrary* FortKismetLibrary = 0;
	inline static SDK::ULocalPlayer* LocalPlayer = 0;
	inline static SDK::APlayerController* PlayerController = 0;
	inline static PBYTE GObjects = 0;
	inline static PBYTE GNames = 0;
	static inline SDK::FMatrix* myMatrix = new SDK::FMatrix();

	static inline bool GetBoneWorld(SDK::ACharacter* pActor, int nBone, SDK::FVector* vBonePos) {
		if (!pActor) return false;
		if (!pActor->Mesh) return false;

		auto pGetBoneMatrix = reinterpret_cast<SDK::Matrix4 * (__fastcall*)(uintptr_t, SDK::Matrix4*, int)>(GetBoneMatrix);

		SDK::Matrix4 BoneMatrix;
		if (!pGetBoneMatrix((uintptr_t)pActor->Mesh, &BoneMatrix, nBone)) return false;

		vBonePos->X = BoneMatrix._41;
		vBonePos->Y = BoneMatrix._42;
		vBonePos->Z = BoneMatrix._43;

		return true;
	}

	static inline bool GetBoneScreen(SDK::ACharacter* pActor, int nBone, SDK::FVector2D* vBonePos) {
		if (!pActor) return false;

		SDK::FVector vWorldPos;
		if (!GetBoneWorld(pActor, nBone, &vWorldPos))
			return false;

		if (!PlayerController->ProjectWorldLocationToScreen(vWorldPos, false, vBonePos))
			return false;

		return true;
	}

	static inline SDK::FVector GetBoneLocByIdx(PVOID mesh, int id) {
		if (!mesh) return { 0,0,0 };
		auto fGetBoneMatrix = ((SDK::FMatrix * (__fastcall*)(PVOID, SDK::FMatrix*, int))(GetBoneMatrix));
		fGetBoneMatrix(mesh, myMatrix, id);

		return SDK::FVector(myMatrix->M[3][0], myMatrix->M[3][1], myMatrix->M[3][2]);
	}

	bool WorldToScreen(SDK::FVector location, SDK::FVector2D* screen)
	{
		SDK::APlayerController* playerController = define::gWorld->OwningGameInstance->LocalPlayers[0]->PlayerController;

		if (playerController)
		{
			return playerController->ProjectWorldLocationToScreen(location, false, screen);
		}

		return FALSE;
	}

	inline static bool SetObjects() {

		if (!GamePlayStatics) GamePlayStatics = (SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass();
		if (!MathamaticsLibrary) MathamaticsLibrary = (SDK::UKismetMathLibrary*)SDK::UKismetMathLibrary::StaticClass();
		if (!FortKismetLibrary) FortKismetLibrary = (SDK::UFortKismetLibrary*)SDK::UFortKismetLibrary::StaticClass();

		return true;
	}

};

inline define* UE4 = new define;