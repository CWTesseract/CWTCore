#pragma once

#include <Windows.h>
#include <cstdint>
#include <map>
#include <list>

#include "CWTCore/cube/World.h"

namespace CWT {
	namespace cube {
		class Host {
		public:
			virtual ~Host() {};

			World host_world;
			int64_t field_550;
			int64_t some_generation_thread_obj;
			int64_t field_560;
			std::map<void*, void*> connected_clients_maybe; // Node size 0x30
			std::map<void*, void*>  invited_clients_list_or_map; // Node size 0x28
			std::map<void*, void*> unk_list_0x588; // Node size 0x58
			std::map<void*, void*> unk_list_0x598; // Node size 0x40
			std::map<void*, void*> unk_list_0x5A8; // Node size 0x90
			std::map<void*, void*> unk_list_0x5B8; // Node size 0x40
			int64_t local_client_connection;
			CRITICAL_SECTION host_recv_packet_list_lock;
			CRITICAL_SECTION cube_host_lock_1;
			std::list<void*> host_recv_packet_list; // Node size 0x20
		};
	};
};