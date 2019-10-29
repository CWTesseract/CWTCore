#pragma once

#include <cstdint>

#include "CWTCore/cube/BaseWidget.h"
#include "CWTCore/cube/Item.h"

namespace CWT {
	namespace plasma {
		class Node;
	}

	namespace cube {
		class Game;

		class FormulaDetailsWidget : BaseWidget
		{
		public:
			virtual ~FormulaDetailsWidget() {};

			float field_1E8;
			int32_t field_1EC;
			int64_t field_1F0;
			Item unk_item;
			int32_t field_298;
			int32_t field_29C;
			int64_t field_2A0;
			int64_t field_2A8;
			int64_t field_2B0;
			int64_t field_2B8;
			Game* game;
			plasma::Node* itemshadow;
			plasma::Node* craftbutton;
			plasma::Node* craftbar;
			plasma::Node* craftbar_bar;
			int32_t field_2E8;
			Item unk_item_2;
			uint8_t field_38C; // 7 bytes of padding after this.
		};
	};
};