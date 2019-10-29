#pragma once

#include <cstdint>
#include <string>
#include <list>

#include "CWTCore/plasma/Widget.h"

namespace CWT {
	namespace cube {
		class ChatWidget : plasma::Widget
		{
		public:
			class message_section {
			public:
				std::wstring data;
				uint8_t r;
				uint8_t g;
				uint8_t b;
				uint8_t a;
				uint8_t _pad[4];
			};

			virtual ~ChatWidget() {};

			std::list<std::list<message_section>> chatbox_messages;
			std::wstring current_typing_message;
			bool is_typing;
			void* font;
			int64_t current_text_length;
		};
	};
};