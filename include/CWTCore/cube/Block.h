#pragma once

#include <cstdint>

namespace CWT {
	namespace cube {
		struct Block
		{
			uint8_t r;
			uint8_t g;
			uint8_t b;
			uint8_t field_3;
			uint8_t type;

			//&0x20 == shrine.
			uint8_t flags;
		};
	};
};