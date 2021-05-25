#pragma once
#define PI (3.141592653589793f)
#define M_PI	3.14159265358979323846264338327950288419716939937510
#define M_RADPI    57.295779513082f

#define rva(addr, size) (reinterpret_cast<unsigned char*>(addr + *reinterpret_cast<int*>(addr + (size - 4)) + size))

#include <Windows.h>
#include <iostream>
#include <Psapi.h>
#include <vector>
#include <string>

inline static PBYTE GetBoneMatrix = 0;
inline float width, height;

#include <d3d11.h>
#pragma comment(lib, "d3d11.lib")

#include "Utilities/Utilities.h"
#include "SDK.hpp"
#include "Define/Define.h"
#include "Render/Render.h"