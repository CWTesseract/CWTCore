#include "CWTCore.h"

namespace CWT {
	cube::Game* GetGamePtr() {
		auto global = reinterpret_cast<cube::Game**>(((uint64_t)GetModuleHandle(NULL))+0x551A80);
		if (*global != nullptr) {
			return *global;
		}

		return nullptr;
	}
};

