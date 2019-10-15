#include "CWTCore/internal/Context.h"

#include "CWTCore/cube/Sprite.h"

namespace CWT {
	namespace cube {
		Sprite* Sprite::New(gfx::D3D11Graphics* gfx, uint8_t unk)
		{
			Sprite* data = reinterpret_cast<Sprite*>(::operator new(sizeof(Sprite)));
			return CWT::internal::Context::instance().funcs.cube_sprite__ctor(data, gfx, unk);
		};
	};
};