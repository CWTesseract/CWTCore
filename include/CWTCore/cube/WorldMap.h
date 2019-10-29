#pragma once

#include <Windows.h>
#include <cstdint>

#include "CWTCore/common/Matrix4.h"
#include "CWTCore/common/Vector3.h"
#include "CWTCore/common/Vector2.h"

namespace CWT {
	namespace cube {
		class World;

		class WorldMap
		{
		public:
			virtual ~WorldMap() {};

			World* world;
			int64_t plasma_d3d11engine;
			Matrix4<float> unk_matrix4f_0;
			Matrix4<float> unk_matrix4f_1;
			int64_t field_98;
			int64_t field_A0;
			int64_t field_A8;
			int64_t field_B0;
			int64_t field_B8;
			int64_t field_C0;
			int64_t field_C8;
			int64_t field_D0;
			int64_t field_D8;
			int64_t field_E0;
			int64_t field_E8;
			int64_t field_F0;
			int64_t field_F8;
			Vector3<int64_t> map_cusor_world_coords;
			Vector2<int32_t> field_118;
			int32_t field_120;
			int32_t field_124;
			int64_t field_128;
			int64_t field_130;
			int64_t unk_map_node_size_0x30;
			int64_t field_140;
			int64_t field_148;
			Vector2<int32_t> hovered_flight_object_zone_pos;
			int32_t field_158;
			Vector2<int32_t> unk_int32_pos;
			uint8_t field_164;
			uint8_t field_165;
			uint8_t field_166;
			uint8_t field_167;
			uint8_t field_168;
			uint8_t field_169;
			uint8_t field_16A;
			uint8_t field_16B;
			int32_t field_16C;
			int64_t field_170;
			int64_t field_178;
			int64_t field_180;
			int64_t MapZoneInfo; // All of our hidden biomes, structures, treasures, etc. 
			int64_t field_190;
			int32_t field_198;
			int32_t field_19C;
			CRITICAL_SECTION worldmap_lock_0;
			CRITICAL_SECTION worldmap_lock_1;
		};

	};
};