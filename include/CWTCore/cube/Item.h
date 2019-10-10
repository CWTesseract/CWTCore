#pragma once

#include <cstdint>

namespace CWT {
	namespace cube {
		struct Item
		{
		public:
			struct ItemCustomization
			{
				uint8_t x;
				uint8_t y;
				uint8_t z;
				uint8_t material;
			};

			uint8_t category;
			int32_t id;
			int32_t model;
			int32_t level_req_maybe;
			int32_t field_10;
			byte stars;
			int32_t field_18;
			uint8_t Material;
			ItemCustomization customizations[32];
			uint8_t customization_count;
			uint8_t field_9E;
			uint8_t field_9F;
		};
	};
};