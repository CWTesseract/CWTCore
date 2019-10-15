#include "CWTCore.h"
#include "CWTCore/internal/Context.h"

namespace CWT {
	bool InitCWT() { 
		CWT::internal::Context::instance();
		return true;
	}

	cube::Game* GetGamePtr() {
		auto global = reinterpret_cast<cube::Game**>(((uint64_t)GetModuleHandle(NULL)) + 0x551A80);
		if (*global != nullptr) {
			return *global;
		}

		return nullptr;
	}
}

