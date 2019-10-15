#include <Windows.h>
#include "CWTCore/internal/CubeFunctions.h"
#include "CWTCore/internal/SigScan.h"

namespace CWT {
	namespace internal {
		CubeFunctions::CubeFunctions() {
			_IB = (uint64_t)GetModuleHandleA(NULL);

			cube_creature__ctor = reinterpret_cast<T_cube_creature__ctor>(SigScan::Scan(_IB, "48 89 4C 24 08 57 48 83 EC 30 48 C7 44 24 20 FE FF FF FF 48 89 5C 24 50 48 89 74 24 58 48 8B F9 48 8D 05 ?? ?? 3E 00 48 89 01"));
			cube_sprite__ctor = reinterpret_cast<T_cube_sprite__ctor>(SigScan::Scan(_IB, "48 89 4C 24 08 56 57 41 56 48 83 ec 40 48 C7 44 24 30 FE FF FF FF 48 89 5C 24 70 48 89 6C 24 78"));
			cube_sprite__load_file = reinterpret_cast<T_cube_sprite__load_file>(SigScan::Scan(_IB, "44 88 4C 24 20 55 56 57 41 54 41 55 41 56 41 57"));
		}
	};
};