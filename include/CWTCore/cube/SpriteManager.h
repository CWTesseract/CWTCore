#pragma once

#include <vector>
#include <map>

#include "CWTCore/cube/Sprite.h"

namespace CWT {
	namespace gfx {
		class D3D11Graphics;
	};
	namespace cube {
		class SpriteManager
		{
		public:
			virtual ~SpriteManager() {};

			gfx::D3D11Graphics* gfx_D3D11Graphics;
			std::vector<Sprite*> sprites;
			std::map<void*, void*> unk_map_node_size_0x30;
			std::vector<Sprite*> environment_sprites;
			std::vector<Sprite*> building_part_sprites;
			std::vector<Sprite*> cage_sprites;
		};
	};
};