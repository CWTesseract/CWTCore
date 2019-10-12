#pragma once

#include <cstdint>
#include <map>
#include <unordered_map>
#include <list>
#include <vector>
#include <string>

#include "CWTCore/common/Vector3.h"
#include "CWTCore/cube/Database.h"
#include "CWTCore/cube/ZonePosition.h"
#include "CWTCore/cube/ServerUpdateSubpackets.h"


namespace CWT {
	namespace cube {
		class Zone;
		class Creature;

		class World {
		public:

			struct TimeInfo
			{
				int32_t day_counter;
				float time;
				std::map<void*, void*> some_map_size_0x88;
				std::map<void*, void*> some_map_size_0x28;
				std::map<void*, void*> some_map_size_0x28_1;
			};

			struct SubstructWithProjectiles
			{
				World* world;
				std::map<void*, void*> unk_map; // Related to projectiles, not sure about the data-types.
			};

			struct UnkSubstruct
			{
				World* world;
				std::vector<void*> unk_vec_0;
				std::vector<void*> unk_vec_1;

				// Probably another vector:
				int64_t field_38;
				int64_t field_40;
				int64_t field_48;
			};

			virtual ~World() {};

			TimeInfo time_info;
			std::list<Creature*> creatures_list;
			std::list<void*> unk_list_size_0x18;
			std::list<void*> unk_list_size_0x90;
			int64_t sprite_manager;
			SubstructWithProjectiles substruct_with_projectiles_map;
			ServerUpdateSubpackets some_subpackets_list;
			std::map<void*, void*> unk_map_0x190;
			std::map<void*, void*> unk_map_0x1A0;
			UnkSubstruct unk_substruct;
			std::string world_name;
			int32_t seed;
			int32_t seeded_rand_buf_0[4];
			int32_t seeded_rand_buf_1[4];
			int32_t seeded_rand_buf_2[1];
			int32_t seeded_rand_buf_3[20];
			int32_t seeded_rand_buf_4[2];
			int32_t seeded_rand_buf_5[2];
			int32_t seeded_rand_buf_6[2];
			int32_t seeded_rand_buf_7[2];
			int32_t seeded_rand_buf_8[8];
			int32_t seeded_rand_buf_9[6];
			int32_t seeded_rand_buf_10[6];
			int32_t seeded_rand_buf_11[10];
			int32_t seeded_rand_buf_12[4];
			int32_t seeded_rand_buf_13[2];
			int32_t seeded_rand_buf_14[2];
			int32_t seeded_rand_buf_15[2];
			int64_t field_358;
			std::vector<void*> unk_vec_0x360;
			std::map<void*, void*> unk_map_0x378;
			int64_t field_388;
			int64_t field_390;
			int64_t field_398;
			int64_t field_3A0;
			int64_t field_3A8;
			int64_t field_3B0;
			Database world_db_database;
			CRITICAL_SECTION world_lock_1;
			CRITICAL_SECTION world_lock_2;
			CRITICAL_SECTION world_lock_3;
			int32_t field_440;
			int32_t field_444;
			Creature* local_player;
			std::map<uint64_t, Creature*> creatures_map;
			std::unordered_map<ZonePosition, Zone*> zones;
			std::vector<void*> unk_vec_0x4A0;
			std::vector<void*> unk_vec_0x4B8;
			std::vector<void*> unk_vec_0x4D0;
			int64_t field_4E8;
			int64_t field_4F0;
			int64_t field_4F8;
			int64_t field_500;
			int64_t field_508;
			int64_t field_510;
			int64_t field_518;
			int64_t field_520;
			int64_t field_528;
			int64_t field_530;
			int64_t field_538;
			int64_t field_540;
		};
	};
};