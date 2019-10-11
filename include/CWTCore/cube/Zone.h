#pragma once
#include <cstdint>

#include "CWTCore/common/Vector2.h"
#include "CWTCore/gfx/Chunk.h"

namespace CWT {
	namespace cube {
		class World;

		class Zone
		{
		public:
			virtual ~Zone() {};

			World* world;
			Vector2<int32_t> position;
			int64_t field_18;
			int64_t field_20;
			int64_t field_28;
			int64_t field_30;
			int64_t field_38;
			int64_t field_40;
			int64_t field_48;
			int64_t field_50;
			int64_t field_58;
			int64_t field_60;
			int64_t field_68;
			int64_t field_70;
			int64_t field_78;
			int64_t field_80;
			int64_t field_88;
			int64_t field_90;
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
			uint8_t unk_F8_set_by_packet;
			uint8_t field_F9;
			uint8_t field_FA;
			std::map<void*, void*> unk_map_size_0x48;
			std::map<void*, void*> unk_map_size_0x48_1;
			int64_t field_120;
			int64_t field_128;
			int64_t field_130;
			int64_t field_138;
			int64_t field_140;
			int64_t field_148;
			int64_t field_150;
			int64_t field_158;
			int64_t field_160;
			int64_t field_168;
			int64_t field_170;
			int64_t field_178;
			int64_t field_180;
			int64_t field_188;
			int64_t field_190;
			int64_t field_198;
			int64_t field_1A0;
			int64_t field_1A8;
			int64_t field_1B0;
			int64_t field_1B8;
			gfx::Chunk gfx_chunk;
			uint8_t field_448;
			int64_t field_450;
			int64_t field_458;
			int64_t field_460;
			int64_t field_468;
			int64_t field_470;
			int64_t field_478;
			int64_t field_480;
			int64_t field_488;
			int64_t field_490;
			int64_t field_498;
			int64_t field_4A0;
			int64_t field_4A8;
			int64_t field_4B0;
			int64_t field_4B8;
			int64_t field_4C0;
			int64_t field_4C8;
			int64_t field_4D0;
			int64_t field_4D8;
			int64_t field_4E0;
			int64_t field_4E8;
			int64_t field_4F0;
			int64_t field_4F8;
			int64_t field_500;
			int64_t field_508;
			int64_t field_510;
			cube::Field fields[4096];
		};

	};
};