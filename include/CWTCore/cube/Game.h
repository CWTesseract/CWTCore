#pragma once
#include <Windows.h>
#include <cstdint>
#include <vector>

#include "CWTCore/cube/Client.h"
#include "CWTCore/cube/Controls.h"
#include "CWTCore/cube/Host.h"
#include "CWTCore/cube/Options.h"
#include "CWTCore/cube/GUI.h"
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
			GUI gui;
			Host host;
			Client client;
			int64_t field_1770;
			std::vector<Creature*> saved_character_creatures; // Your saved characters, loaded in memory as cube::Creature(s).
			std::vector<void*> world_info_vector;
			std::vector<std::vector<ItemStack>> crafting_menu_inventory;
			int32_t field_17C0;
			Item field_17C4;
			int32_t field_1864;
			int64_t field_1868;
			std::vector<std::vector<ItemStack>> some_other_inventory;
			int32_t field_1888;
			Item field_188C;
			int32_t field_192C;
			int64_t field_1930;
			std::map<void*, void*> unk_map_0x1938;
			std::list<void*> unk_list_0x1948;
			uint8_t field_1958;
			// 7 pad bytes here.
			int64_t some_steam_CCallbackImpl_1202_OnP2PSessionRequest;
			int64_t some_steam_CCallbackImpl_flags;
			ServerUpdateSubpackets some_subpackets_list;
			bool game_control_states[23];
			bool virtual_key_states[256];
			Options options;
			Controls controls;
			CRITICAL_SECTION cube_game_lock_0;
			CRITICAL_SECTION cube_game_lock_2;
			CRITICAL_SECTION cube_game_lock_1;
			CRITICAL_SECTION cube_game_lock_4;
			CRITICAL_SECTION cube_game_lock_3;
			int32_t viewport_width;
			int32_t viewport_height;
			int32_t field_1D60;
			float analog_joystick_right_left;
			float analog_joystick_forward_back;
			int32_t field_1D6C;
			int64_t field_1D70;
			Vector3<double> cam_smooth_0;
			Vector3<double> cam_smooth_1;
			uint8_t field_1DA8; // 3 pad bytes after here.
			Vector3<float> camera_offset_from_player;
			Vector3<int64_t> unk_camera_world_pos_0;
			Vector3<int64_t> unk_camera_world_pos_1;
			Vector2<int64_t> unk_camera_world_x_y;
			float screen_shake;
			uint32_t minimap_zoom_level;
			Vector3<int64_t> unk_minimap_world_pos_0;
			Vector3<int64_t> unk_minimap_world_pos_1;
			uint8_t map_flightmaster_mode_between_zooms; // 7 pad bytes after here. // Taken directly from Chris's CWSDK.
			int64_t field_1E38;
			float map_overlay_x;
			float map_overlay_y;
			float map_scale;
			uint8_t field_1E4C; // 3 pad bytes after here.
			int64_t looking_at_creature_guid;
			int64_t unk_creature_guid;
			int64_t interacting_creature_guid;
			Vector2<int32_t> pickupable_object_zone_pos;
			int32_t pickupable_object_zone_index;
			Vector2<int32_t> interactable_object_zone_pos;
			int32_t interactable_object_zone_index;
			uint8_t field_1E80; // 3 pad bytes after here.
			int32_t field_1E84;
			int64_t field_1E88;
			int64_t field_1E90;
			int32_t field_1E98;
			Matrix4<float> some_camera_matrix_0;
			Matrix4<float> some_camera_matrix_1;
			Matrix4<float> some_camera_matrix_2;
			Matrix4<float> some_camera_matrix_3;
			int32_t field_1F9C;
			msvc_Thrd_t generation_thread;
			msvc_Thrd_t chunk_thread;
			msvc_Thrd_t map_thread;
			msvc_Thrd_t ai_thread;
			msvc_Thrd_t music_thread;
			msvc_Thrd_t receive_thread;
			msvc_Thrd_t send_thread;
			msvc_Thrd_t host_thread;
			std::string current_music_file;
			float music_volume;
			int32_t some_music_time_ms_unk;
			int32_t some_music_time_ms_remaining;
			int32_t field_204C;
			std::list<void*> unk_list_0x2050;
			int32_t world_loaded_maybe;
			int32_t seed;
			std::string world_name;
			std::list<void*> unk_list_0x2088;
			std::list<void*> unk_list_0x2098;
			std::list<void*> some_list_related_to_su_packet_10_and_FEATs; // Sounds to play?
			int64_t field_20B8;
			int32_t field_20C0;
			int32_t field_20C4;
			int64_t field_20C8;
			Item field_20D0;
			int32_t field_2170;
			int32_t field_2174;
			int64_t field_2178;
			int64_t field_2180;
			int64_t field_2188;
			int64_t field_2190;
			std::list<void*> chat_packet_list;
			std::list<void*> unk_list_0x21A8;
			Item* some_item_ptr;
			std::string unk_str_0x21C0;
			uint8_t field_21E0; // 7 pad bytes after here.
			int64_t field_21E8;
			int64_t socket;
			std::list<void*> list_SU_HitPacket_from_local_player;
			std::list<void*> list_SU_Packet12_from_local_player;
			std::list<void*> list_SU_Packet4_from_local_player;
			std::list<void*> unk_list_0x2228;
			std::list<void*> maybe_zone_discoveries_list_sent_in_CS_PACKET_0xF;
			std::list<void*> unk_list_0x2248;
			int32_t field_2258;
			int32_t currently_active_character_slot;
			Database characters_db_database;
			Database some_database_1;
		};
	};
};
