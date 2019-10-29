#pragma once

#include "CWTCore/common/Vector3.h"
#include <cstdint>

namespace CWT {
	namespace cube {
		class AIObject {
		public:
			float field_0;
			int32_t some_time_ms;
			int32_t field_8;
			uint8_t unk_bool_0;
			uint8_t unk_bool_1;
			int32_t field_10;
			int64_t field_18;
			int32_t field_20;
			Vector3<float> unk_vec3_float;
			Vector3<float> camera_looking_at_block_offset;
			int32_t field_3C;
			int32_t field_40;
			uint8_t field_44;
			uint8_t field_45;
			uint8_t field_46;
			uint8_t in_spiritworld;
			int32_t field_48;
			int32_t field_4C;
			int64_t unk_list_0x50_node_size_0xD8;
			int64_t unk_list_0x50_node_size_0xD8_count;
			int32_t physics_flags;
			int32_t binary_toggles;
			Vector3<int64_t> position;
			float graphical_size;
			float hitbox_size;
			float physical_size;
			int32_t field_8C;
			int64_t field_90;
			int64_t unk_map_0x98_node_size_0x40;
			int64_t unk_map_0x98_node_size_0x40_count;
			int64_t unk_map_0xA8_node_size_0x28;
			int64_t unk_map_0xA8_node_size_0x28_count;
			int64_t field_B8;
			int32_t field_C0;
			int32_t field_C4;
			int64_t field_C8;
			int64_t field_D0;
			int64_t field_D8;
			Vector3<int64_t> some_position;
			int64_t field_F8;
			int64_t field_100;
			int64_t field_108;
			int64_t unk_list_0x110_node_size_0x20;
			int64_t unk_list_0x110_node_size_0x20_count;
			int64_t unk_map_0x120_node_size_0x28;
			int64_t unk_map_0x120_node_size_0x28_count;
			int64_t unk_list_0x130_node_size_0x20;
			int64_t unk_list_0x130_node_size_0x20_count;
			int64_t field_140;
			int64_t field_148;
		};
	};
};