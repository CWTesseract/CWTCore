#include "CWTCore.h"

namespace CWT {
	cube::Game* GetGamePtr() {
		auto global = reinterpret_cast<cube::Game**>(0x140551A80);
		if (*global != nullptr) {
			return *global;
		}

		return nullptr;
	}
};

