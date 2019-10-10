#pragma once

#include <Windows.h>
#include <list>
#include <map>
#include <cstdint>

#include "CWTCore/cube/EntityData.h"

namespace CWT {
	namespace cube {
		class World;
		class Game;
		class Host;

		class Client
		{
		public:
			virtual ~Client() {}

			int64_t field_8;
			int64_t field_10;
			int32_t field_18;
			int32_t field_1C;
			std::list<void*> some_list_sent_as_SC_PACKET_0x0A; // Node size 0x58
			std::list<void*> some_list_sent_as_SC_PACKET_0x0B; // Node size 0x40
			std::list<void*> some_list_sent_as_SC_PACKET_0x0C; // Node size 0x40
			std::list<void*> some_list_sent_as_SC_PACKET_0x0D; // Node size 0x90
			std::list<void*> some_list_unk; // Node size 0x30

			// Maybe uint64_t
			int32_t client_steam_id; 
			int32_t field_74;

			EntityData some_entity_data;
			uint8_t some_entity_data_newly_ctor_ed;
			int32_t unk_timestamp_after_sending_packets;
			std::map<void*, void*> some_recv_creatures_map; // Node size 0x28
			std::map<void*, void*> invited_by_map_maybe; // Node size 0x28
			cube::Host* host;
			CRITICAL_SECTION client_recv_packet_list_lock;
			std::list<void*> client_recv_packet_list; // Node size 0x20
			cube::Game* main_cube_game_ptr;
		};

	};
};