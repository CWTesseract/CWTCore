#pragma once
#include <string>
#include <cstdint>
#include "CWTCore/gfx.h"
#include "CWTCore/cube.h"

namespace CWT {
	namespace internal {
		class CubeFunctions {
			typedef cube::Creature* (__thiscall* T_cube_creature__ctor)(cube::Creature* creature, uint64_t* guid_ptr);
			typedef cube::Sprite* (__thiscall* T_cube_sprite__ctor)(cube::Sprite* sprite, gfx::D3D11Graphics* gfx, uint64_t unk);
			typedef void(__thiscall* T_cube_sprite__load_file)(cube::Sprite* sprite, std::string* filename, cube::Database* db, uint8_t unk);
		public:
			CubeFunctions();
			uint64_t _IB;
			T_cube_creature__ctor cube_creature__ctor;
			T_cube_sprite__ctor cube_sprite__ctor;
			T_cube_sprite__load_file cube_sprite__load_file;

		};
	};
};