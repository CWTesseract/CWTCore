#pragma once

#include <cstdint>
#include <string>

namespace CWT {
	namespace plasma {
		class Attribute {
		public:
			virtual ~Attribute() {};

			int64_t field_8;
			int64_t field_10;
			int64_t field_18;
			int64_t field_20;
			int64_t field_28;
			int64_t field_30;
			int32_t field_38;
			int32_t current_frame;
			std::wstring attribute_name;
			int32_t field_60;
			int32_t field_64;
			int32_t field_68;
			uint8_t field_6C;
		};
	};
};