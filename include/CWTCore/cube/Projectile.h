#pragma once

#include <cstdint>
#include "CWTCore/common/Vector3.h"

namespace CWT {
	namespace cube {
		class Projectile
		{
		public:
			Projectile() {
				guid = (uint64_t)-1;
				some_size_in_blocks = 1.0;
				visual_size = 1.0;
				current_time_ms_float = 0.0;
				some_scalar_1 = 1.0;
				max_time_to_live_ms_int = 5000;
			}

			uint64_t guid;
			Vector3<int64_t> pos;
			Vector3<int64_t> unk_pos;
			int32_t field_38;
			int32_t field_3C;
			int32_t field_40;
			Vector3<float> velocity;
			float field_50;
			float some_size_in_blocks;
			float visual_size;
			float some_scalar_1;
			int32_t field_60;
			uint8_t field_64;
			int32_t projectile_type;
			uint8_t field_6C;
			float current_time_ms_float;
			int32_t max_time_to_live_ms_int;
			int32_t field_78;
			int32_t _pad;
		};
	};
};