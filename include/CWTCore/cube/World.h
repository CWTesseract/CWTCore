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
		class SpriteManager;

		class World {
		public:

			struct WorldState
			{
				int32_t day_counter;
				float time;
				std::map<void*, void*> some_map_size_0x88; // zone states.
				std::map<void*, void*> some_map_size_0x28; // dead creatures.
				std::map<void*, void*> some_map_size_0x28_1; // dropped rewards.
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

			WorldState world_state;
			std::list<Creature*> creatures_list;
			std::list<void*> unk_list_size_0x18;
			std::list<void*> unk_list_size_0x90; // Actual `cube::Projecile`s. Fireballs, arrows, shuriken, etc.
			SpriteManager* sprite_manager;
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
			std::vector<void*> unk_vec_0x388;
			std::vector<void*> unk_vec_0x3A0;
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
			std::vector<void*> unk_vec_0x4E8;
			std::vector<void*> unk_vec_0x500;
			std::vector<void*> unk_vec_0x518;
			std::vector<void*> unk_vec_0x530;
		};
	};
};