#pragma once

#include "../stdafx.h"

namespace Utilities {

	class occurances {
	public:

		DWORD loopCount = NULL;
		IMAGE_NT_HEADERS* getHeader(HMODULE mxdule);
		PBYTE Find(PBYTE start, DWORD size, LPCSTR pattern, LPCSTR mask);
		PBYTE Find(HMODULE mxdule, LPCSTR pattern, LPCSTR mask, DWORD occurence);

	};
	inline occurances* occurance = new occurances;

}