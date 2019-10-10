#pragma once

#include <cstdint>

#include "CWTCore/common/Vector3.h"
#include "CWTCore/common/Vector2.h"
#include "CWTCore/cube/WornEquipment.h"

namespace CWT {
	namespace cube {
		class EntityData
		{
		public:
			class Appearance
			{
			public:
				uint8_t field_0;
				uint8_t field_1;
				uint8_t hair_color_r;
				uint8_t hair_color_g;
				uint8_t hair_color_b;
				uint8_t field_5;
				uint8_t field_6;
				uint8_t field_7;
				int32_t movement_flags;
				float graphical_size;
				float hitbox_size;
				float physical_size;
				int16_t face_id;
				int16_t hair_id;
				int16_t hands_id;
				int16_t feet_id;
				int16_t chest_id;
				int16_t tail_id;
				int16_t shoulder_id;
				int16_t wings_id;
				float head_scale;
				float chest_scale;
				float hand_scale;
				float feet_scale;
				float unk_scale;
				float weapon_scale;
				float tail_scale;
				float shoulder_scale;
				float wings_scale;
				int32_t maybe_chest_rotation;
				Vector3<float> hands_rotation;
				Vector3<float> wings_rotation;
				Vector3<float> chest_position;
				Vector3<float> head_position;
				Vector3<float> hands_position;
				Vector3<float> feet_position;
				Vector3<float> unk_position;
				Vector3<float> wings_position;
			};


			Vector3<int64_t> position;
			Vector3<float> rotation;
			Vector3<float> velocity;
			Vector3<float> accel;
			Vector3<float> retreat;
			float head_rotation;
			int32_t physics_flags;
			uint8_t hostility_or_ai_type;
			uint8_t field_51;
			int32_t race;
			uint8_t action_id;
			float action_timer;
			int32_t combo_hits;
			float time_since_last_combo_hit;
			Appearance appearance;
			int16_t binary_toggles;
			uint8_t field_11A;
			uint8_t field_11B;
			float roll_time;
			float stun_time;
			float some_animation_time;
			float speed_slowed_time;
			float speed_boosted_time;
			float unk_float_0;
			int32_t level;
			int32_t exp;
			uint8_t job_class;
			uint8_t specialization;
			uint8_t field_13E;
			uint8_t field_13F;
			Vector2<int32_t> some_zone_pos;
			int32_t some_float_0_to_1_mp_cost_pink_bar_background_fill;
			Vector3<float> unk_vector3_float_0;
			Vector3<float> unk_vector3_float_1;
			Vector3<float> camera_looking_at_block_offset;
			float hp;
			int32_t field_174;
			float mp;
			float stealth;
			int32_t unk_float_1;
			float current_movement_type_speed;
			float light_diameter;
			uint8_t unk_byte_0_for_campfire_particles;
			uint8_t unk_byte_1;
			uint8_t field_18E;
			uint8_t field_18F;
			int64_t unk_uint64_0;
			int64_t unk_uint64_1;
			Vector2<int32_t> eagle_flying_to_zone_pos;
			Vector3<int64_t> eagle_flying_from_coords;
			int32_t field_1C0;
			int32_t field_1C4;
			Item some_unk_item;
			WornEquipment worn_equipment;
			char name[16];
			int64_t client_steam_ID;
			uint8_t unk_byte_2;
			int32_t unk_int32_0;
			int64_t unk_uint64_2;
		};

	};
};