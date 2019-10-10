#pragma once

#include <cstdint>

namespace CWT {
	namespace cube {
		class Field
		{
		public:
			virtual ~Field() {};

			int64_t field_8;
			int64_t field_10;
			int64_t field_18;
			int64_t field_20;
			int64_t field_28;
			int64_t field_30;
			int32_t field_38;
			int32_t base_z;
			int64_t some_smaller_number;
			int64_t some_larger_number;
			int64_t field_50;
		};

	};
};