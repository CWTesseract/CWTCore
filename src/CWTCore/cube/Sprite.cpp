#include "CWTCore/internal/Context.h"

#include "CWTCore/cube/Sprite.h"

#include <iostream>

namespace CWT {
	namespace cube {
		Sprite* Sprite::New(gfx::D3D11Graphics* gfx, uint64_t unk)
		{
			Sprite* data = reinterpret_cast<Sprite*>(::operator new(sizeof(Sprite)));
			return CWT::internal::Context::instance().funcs.cube_sprite__ctor(data, gfx, unk);
		};

		void Sprite::LoadFromFile(std::string* filepath, cube::Database* db, uint8_t unk) {
			CWT::internal::Context::instance().funcs.cube_sprite__load_file(this, filepath, db, unk);
		}

	};
};