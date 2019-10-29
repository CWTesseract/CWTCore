#pragma once

#include <cstdint>

#include "CWTCore/plasma/Widget.h"
#include "CWTCore/cube/Item.h"
#include "CWTCore/common/Vector2.h"

namespace CWT {
	namespace cube {
		class Game;

		class MapOverlayWidget : plasma::Widget
		{
		public:
			virtual ~MapOverlayWidget() {};

			Game* game;
			Item unk_item;
			Vector2<int32_t> unk_int32_vec2;
			int64_t field_258;
		};
	};
};