#pragma once
#include <cstdint>

#include "CWTCore/cube/Item.h"

namespace CWT {
	namespace cube {
		struct ItemStack {
			int32_t quantity;
			Item item;
		};
	};
};