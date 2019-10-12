#pragma once
#include <Windows.h>
#include <cstdint>
#include <vector>

#include "CWTCore/cube/Client.h"
#include "CWTCore/cube/Host.h"
#include "CWTCore/cube/Options.h"
#include "CWTCore/cube/PlasmaHolder.h"
#include "CWTCore/cube/ServerUpdateSubpackets.h"
#include "CWTCore/cube/Speech.h"

namespace CWT {
	namespace cube {

		class World;
		class WorldMap;

		class Game {
		public:

			class KeyInfoMaps {
				std::map<uint32_t, std::wstring> key_map_1;
				std::map<uint32_t, std::wstring> key_map_2;
			};

			virtual ~Game() {}

			Game() {
				/*
				world = (World*)0xDEADBEEF;
				some_vector_like_thing = std::vector<int32_t>();
				some_vector_like_thing.push_back(5);

				field_1790 = 0x17901790;
				*/
			}

			World* world;
			WorldMap* world_map;
			void* gfx_renderer;
			void* plasma_engine;
			void* XAudio2_engine;
			KeyInfoMaps key_info_maps;
			Speech speech;
			PlasmaHolder plasma_holder;
			Host host;
			Client client;
			int64_t field_1770;
			std::vector<Creature*> saved_character_creatures; // Your saved characters, loaded in memory as cube::Creature(s).
			int64_t field_1790;
			int64_t field_1798;
			int64_t field_17A0;
			std::vector<std::vector<ItemStack>> crafting_menu_inventory;
			int64_t field_17C0;
			int64_t field_17C8;
			int64_t field_17D0;
			int64_t field_17D8;
			int64_t field_17E0;
			int64_t field_17E8;
			int64_t field_17F0;
			int64_t field_17F8;
			int64_t field_1800;
			int64_t field_1808;
			int64_t field_1810;
			int64_t field_1818;
			int64_t field_1820;
			int64_t field_1828;
			int64_t field_1830;
			int64_t field_1838;
			int64_t field_1840;
			int64_t field_1848;
			int64_t field_1850;
			int64_t field_1858;
			int64_t field_1860;
			int64_t field_1868;
			std::vector<std::vector<ItemStack>> some_other_inventory;
			int64_t field_1888;
			int64_t field_1890;
			int64_t field_1898;
			int64_t field_18A0;
			int64_t field_18A8;
			int64_t field_18B0;
			int64_t field_18B8;
			int64_t field_18C0;
			int64_t field_18C8;
			int64_t field_18D0;
			int64_t field_18D8;
			int64_t field_18E0;
			int64_t field_18E8;
			int64_t field_18F0;
			int64_t field_18F8;
			int64_t field_1900;
			int64_t field_1908;
			int64_t field_1910;
			int64_t field_1918;
			int64_t field_1920;
			int64_t field_1928;
			int64_t field_1930;
			int64_t field_1938;
			int64_t field_1940;
			int64_t field_1948;
			int64_t field_1950;
			int64_t field_1958;
			int64_t some_steam_CCallbackImpl_1202_OnP2PSessionRequest;
			int64_t field_1968;
			ServerUpdateSubpackets some_subpackets_list;
			bool game_control_states[23];
			bool virtual_key_states[255];
			Options options;
			int64_t field_1BD8;
			int64_t field_1BE0;
			int64_t field_1BE8;
			int64_t field_1BF0;
			int64_t field_1BF8;
			int64_t field_1C00;
			int64_t field_1C08;
			int64_t field_1C10;
			int64_t field_1C18;
			int64_t field_1C20;
			int64_t field_1C28;
			int64_t field_1C30;
			int64_t field_1C38;
			int64_t field_1C40;
			int64_t field_1C48;
			int64_t field_1C50;
			int64_t field_1C58;
			int64_t field_1C60;
			int64_t field_1C68;
			int64_t field_1C70;
			int64_t field_1C78;
			int64_t field_1C80;
			int64_t field_1C88;
			CRITICAL_SECTION cube_game_lock_0;
			CRITICAL_SECTION cube_game_lock_2;
			CRITICAL_SECTION cube_game_lock_1;
			CRITICAL_SECTION cube_game_lock_4;
			CRITICAL_SECTION cube_game_lock_3;
			int64_t field_1D58;
			int64_t field_1D60;
			int64_t field_1D68;
			int64_t field_1D70;
			Vector3<double> cam_smooth_0;
			Vector3<double> cam_smooth_1;
			int64_t field_1DA8;
			int64_t field_1DB0;
			int64_t field_1DB8;
			int64_t field_1DC0;
			int64_t field_1DC8;
			int64_t field_1DD0;
			int64_t field_1DD8;
			int64_t field_1DE0;
			int64_t field_1DE8;
			int64_t field_1DF0;
			int64_t field_1DF8;
			int64_t field_1E00;
			int64_t field_1E08;
			int64_t field_1E10;
			int64_t field_1E18;
			int64_t field_1E20;
			int64_t field_1E28;
			int64_t field_1E30;
			int64_t field_1E38;
			int64_t field_1E40;
			int64_t field_1E48;
			int64_t field_1E50;
			int64_t field_1E58;
			int64_t field_1E60;
			int64_t field_1E68;
			int64_t field_1E70;
			int64_t field_1E78;
			int64_t field_1E80;
			int64_t field_1E88;
			int64_t field_1E90;
			int64_t field_1E98;
			int64_t field_1EA0;
			int64_t field_1EA8;
			int64_t field_1EB0;
			int64_t field_1EB8;
			int64_t field_1EC0;
			int64_t field_1EC8;
			int64_t field_1ED0;
			int64_t field_1ED8;
			int64_t field_1EE0;
			int64_t field_1EE8;
			int64_t field_1EF0;
			int64_t field_1EF8;
			int64_t field_1F00;
			int64_t field_1F08;
			int64_t field_1F10;
			int64_t field_1F18;
			int64_t field_1F20;
			int64_t field_1F28;
			int64_t field_1F30;
			int64_t field_1F38;
			int64_t field_1F40;
			int64_t field_1F48;
			int64_t field_1F50;
			int64_t field_1F58;
			int64_t field_1F60;
			int64_t field_1F68;
			int64_t field_1F70;
			int64_t field_1F78;
			int64_t field_1F80;
			int64_t field_1F88;
			int64_t field_1F90;
			int64_t field_1F98;
			msvc_Thrd_t generation_thread;
			msvc_Thrd_t chunk_thread;
			msvc_Thrd_t map_thread;
			msvc_Thrd_t ai_thread;
			msvc_Thrd_t music_thread;
			msvc_Thrd_t receive_thread;
			msvc_Thrd_t send_thread;
			msvc_Thrd_t host_thread;
			int64_t field_2020;
			int64_t field_2028;
			int64_t field_2030;
			int64_t field_2038;
			int64_t field_2040;
			int64_t field_2048;
			int64_t field_2050;
			int64_t field_2058;
			int32_t world_loaded_maybe;
			int32_t seed;
			int64_t world_name;
			int64_t field_2070;
			int64_t field_2078;
			int64_t field_2080;
			int64_t field_2088;
			int64_t field_2090;
			int64_t field_2098;
			int64_t field_20A0;
			int64_t field_20A8;
			int64_t field_20B0;
			int64_t field_20B8;
			int64_t field_20C0;
			int64_t field_20C8;
			int64_t field_20D0;
			int64_t field_20D8;
			int64_t field_20E0;
			int64_t field_20E8;
			int64_t field_20F0;
			int64_t field_20F8;
			int64_t field_2100;
			int64_t field_2108;
			int64_t field_2110;
			int64_t field_2118;
			int64_t field_2120;
			int64_t field_2128;
			int64_t field_2130;
			int64_t field_2138;
			int64_t field_2140;
			int64_t field_2148;
			int64_t field_2150;
			int64_t field_2158;
			int64_t field_2160;
			int64_t field_2168;
			int64_t field_2170;
			int64_t field_2178;
			int64_t field_2180;
			int64_t field_2188;
			int64_t field_2190;
			int64_t chat_packet_list;
			int64_t chat_packet_list_count;
			int64_t field_21A8;
			int64_t field_21B0;
			int64_t field_21B8;
			int64_t field_21C0;
			int64_t field_21C8;
			int64_t field_21D0;
			int64_t field_21D8;
			int64_t field_21E0;
			int64_t field_21E8;
			int64_t socket;
			int64_t field_21F8;
			int64_t field_2200;
			int64_t field_2208;
			int64_t field_2210;
			int64_t field_2218;
			int64_t field_2220;
			int64_t field_2228;
			int64_t field_2230;
			std::list<void*> maybe_zone_discoveries_list_sent_in_CS_PACKET_0xF;
			int64_t field_2248;
			int64_t field_2250;
			int32_t field_2258;
			int32_t currently_active_character_slot;
			Database characters_db_database;
			Database some_database_1;
		};
	};
};
