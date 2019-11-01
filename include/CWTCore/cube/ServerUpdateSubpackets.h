#pragma once

#include <cstdint>
#include <list>

#include "CWTCore/common/Vector3.h"
#include "CWTCore/common/Vector4.h"
#include "CWTCore/cube/Creature.h"
#include "CWTCore/cube/Block.h"
#include "CWTCore/cube/Item.h"
#include "CWTCore/cube/Projectile.h"

namespace CWT {
	namespace cube {
		struct ServerUpdateSubpackets {
			struct SU_HitPacket
			{
				int64_t damage_from_guid;
				int64_t damage_to_guid;
				int32_t damage_value;
				uint8_t unk_byte_0;
				int32_t stun_time;
				int32_t some_animation_time;
				Vector3<int64_t> some_pos;
				Vector3<float> hit_dir;
				uint8_t unk_byte_1;
				uint8_t some_hit_type_byte;
				uint8_t unk_byte_2;
				uint8_t field_47;
			};

			struct SU_SoundPacket
			{
				Vector3<int64_t> pos;
				int32_t sound_id;
				float some_float_1;
				float some_float_2;
				int64_t guid;
			};

			struct SU_ParticlePacket
			{
				Vector3<int64_t> pos;
				Vector3<float> accel_maybe;
				Vector4<float> color;
				int32_t field_34;
				int32_t count;
				int32_t particle_type;
				int32_t field_40;
				int32_t _pad;
			};

			struct SU_CubeChange
			{
				// Probably just an embedded struct,
				// these should match the structures in the list at
				// Zone.changes / Zone+0xD8.
				int32_t block_pos_x;
				int32_t block_pos_y;
				int32_t block_pos_z;
				cube::Block original_block;
				cube::Block new_block;
				int32_t field_18;
				int32_t _pad;
			};

			struct SU_ProjectilePacket
			{
				// Just embeds cube::Projectile.
				Projectile projectile;
			};

			struct SU_Packet5
			{
				int32_t zone_x;
				int32_t zone_y;
				int64_t field_8;
				int64_t field_10;
			};

			struct SU_Packet6
			{
				int32_t zone_x;
				int32_t zone_y;
				int64_t field_8;
				int64_t field_10;
			};

			struct SU_Packet7
			{
				int32_t zone_x;
				int32_t zone_y;
			};

			struct SU_PickupItemPacket
			{
				int64_t guid;
				cube::Item unk_item;
				int16_t quantity;
				Vector3<int64_t> pos;
				int32_t some_flag_things;
				int32_t _pad;
			};

			struct SU_Packet9
			{
				int64_t guid;
				int64_t guid2;
			};

			struct SU_Packet10
			{
				int64_t guid;
				uint8_t field_8;
				uint8_t field_9;
				uint8_t field_A;
				uint8_t field_B;
				int32_t field_C;
				int32_t field_10;
				int64_t field_18;
				int32_t field_20;
				int32_t field_24;
			};

			struct SU_Packet11
			{
				int64_t field_0;
				int64_t some_guid;
				int64_t field_10;
			};

			struct SU_BuffPacket
			{
				int64_t from_guid;
				int64_t target_guid;
				cube::Creature::Buff buff;
				uint8_t apply_regardless_if_1;
				int32_t field_2C;
			};

			struct SU_Packet13
			{
				// Might just be a guid.
				int32_t field_0;
				int32_t _pad;
			};

			struct SU_Packet14
			{
				int64_t guid;
			};

			struct SU_Packet15
			{
				int64_t field_0; // Is this a std::wstring?
				int64_t field_8;
				int64_t field_10;
				int64_t field_18;
			};


			std::list<SU_HitPacket> hit_packet_list; // hit
			std::list<SU_SoundPacket> packet_list_1; // sound
			std::list<SU_ParticlePacket> packet_list_2; // particle
			std::list<SU_CubeChange> cube_change_list; // cube change
			std::list<SU_ProjectilePacket> packet_list_4; // projectile
			std::list<SU_Packet5> packet_list_5; // Adds objects at Zone+0x30
			std::list<SU_Packet6> packet_list_6; // zone static objects.
			std::list<SU_Packet7> packet_list_7; // Just sets zone+0xF8 to 0.
			std::list<SU_PickupItemPacket> packet_list_8; // pickup item
			std::list<SU_Packet9> packet_list_9; // set world->world_state.dead_creatures 
			std::list<SU_Packet10> packet_list_10; // Unk (maybe? updated? version? of? cuwo's? damage_actions? But I'm uncertain?)
			std::list<SU_Packet11> packet_list_11; // puts data into cube::Creature+0xB88 "unk_list_maybe_npc_ai_related"
			std::list<SU_BuffPacket> packet_list_12; // Adds buffs to cube::Creature.
			std::list<SU_Packet13> packet_list_13;
			std::list<SU_Packet14> packet_list_14; // NPC spoke packet
			std::list<SU_Packet15> packet_list_15; // Non-networked, unused pink text print to chatbox (std::wstring?).
		};
	};
};