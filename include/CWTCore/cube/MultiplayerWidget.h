#pragma once

#include <cstdint>
#include <vector>

#include "CWTCore/cube/BaseWidget.h"
#include "CWTCore/cube/Controls.h"

namespace CWT {
	namespace plasma {
		class Node;
	}

	namespace cube {
		class Game;

		class MultiplayerWidget : BaseWidget
		{
		public:
			virtual ~MultiplayerWidget() {};

			Game* game;
			int64_t field_1F0;
			std::vector<void*> friends_list;
			Controls controls;
			plasma::Node* leave_button;
			plasma::Node* up_button;
			plasma::Node* down_button;
			plasma::Node* scroll_button;
			int32_t field_2E8;
			int32_t selected_player_index;
			bool some_bool; // 7 bytes of padding after this.
		};
	};
};