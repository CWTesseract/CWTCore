#pragma once

#include <vector>
#include <cstdint>

#include "CWTCore/common/Vector3.h"
#include "CWTCore/common/Matrix4.h"
#include "CWTCore/cube/EntityData.h"
#include "CWTCore/cube/Item.h"
#include "CWTCore/cube/ItemStack.h"

namespace CWT {
	namespace cube {
		class Creature {
		public:
			struct AnimationState {
				Creature* creature;
				int32_t current_animation_state_timer;
				int32_t current_animation_state_id;

				// Probably vector3<float>:
				int32_t field_10;
				int32_t field_14;
				int64_t field_18;

				Vector3<float> left_hand_shifted_by;
				Vector3<float> right_hand_shifted_by;
				Vector3<float> left_hand_rot;
				Vector3<float> right_hand_rot;

				// Probably vector3<float>:
				int64_t field_50;
				int64_t field_58;
				int64_t field_60;

				Vector3<float> body_rot;
				Vector3<float> entire_creature_rot;
				Vector3<float> body_shifted_by;
				Vector3<float> head_shifted_by;
				Vector3<float> head_rot;
				Vector3<float> something_that_rounds_to_360_multiples;
				float some_decreasing_timer_0;
				float some_hands_rot;
				float some_decreasing_timer_1;
				float some_body_with_feet_rot;
				Vector3<float> entire_creature_shifted_by;
				float some_feet_rot;
				int32_t field_D0;
				int32_t field_D4;
				int64_t face_sprite;
				int64_t hair_sprite;
				int64_t chest_sprite;
				int64_t unk_sprite;
				int64_t hands_sprite;
				int64_t wings_sprite;
				int64_t tail_sprite;
				int64_t feet_sprite;
				int64_t weapon_right_sprite;
				int64_t weapon_left_sprite;
				int64_t shoulder_sprite;
				int64_t neck_sprite;
				Matrix4<float> body_with_head_matrix;
				Matrix4<float> hands_matrix;
				Matrix4<float> body_matrix;
				Matrix4<float> head_matrix;
				Matrix4<float> hair_matrix;
				Matrix4<float> unk_matrix_278;
				Matrix4<float> unk_matrix_2B8;
				Matrix4<float> weapon_in_right_hand_matrix;
				Matrix4<float> weapon_in_left_hand_matrix;
				Matrix4<float> left_hand_matrix;
				Matrix4<float> right_hand_matrix;
				Matrix4<float> unk_matrix_3F8;
				Matrix4<float> unk_matrix_438;
				Matrix4<float> unk_matrix_478;
				Matrix4<float> unk_matrix_4B8;
				Matrix4<float> left_root_matrix;
				Matrix4<float> right_foot_matrix;
				Matrix4<float> field_578;
				Matrix4<float> field_5B8;
				Matrix4<float> field_5F8;
				Matrix4<float> field_638;
				Matrix4<float> field_678;
				Matrix4<float> field_6B8;
				Matrix4<float> field_6F8;
				Matrix4<float> field_738;
				Matrix4<float> field_778;
				Matrix4<float> field_7B8;
				Matrix4<float> field_7F8;
				Matrix4<float> field_838;
				Matrix4<float> field_878;
				int64_t field_8B8;
				int64_t field_8C0;
				uint8_t field_8C8;
				uint8_t field_8C9;
				uint8_t field_8CA;
				uint8_t field_8CB;
				int32_t field_8CC;
				int64_t field_8D0;
				int64_t field_8D8;
				int64_t field_8E0;
			};

			virtual ~Creature() {};
			Creature() = delete;
			static Creature* New(uint64_t* guid_ptr);

			int64_t guid;
			EntityData entity_data;
			int64_t field_980;
			int64_t field_988;
			float character_height_bob;
			float on_damage_flash_effect;
			int64_t field_998;
			float stamina;
			int32_t field_9A4;
			int32_t field_9A8;
			int32_t field_9AC;
			int64_t field_9B0;
			int64_t field_9B8;
			int64_t field_9C0;
			int64_t field_9C8;
			int64_t field_9D0;
			int64_t pet_guid;
			int64_t field_9E0;
			int64_t field_9E8;
			std::vector<std::vector<ItemStack>> inventories;
			int32_t field_A08;
			Item unk_item;
			int32_t gold;
			int64_t field_AB4;
			int64_t field_AB8;
			int64_t field_AC0;
			int64_t field_AC8;
			int64_t field_AD0;
			int64_t field_AD8;
			int64_t field_AE0;
			int64_t field_AE8;
			int64_t field_AF0;
			int64_t field_AF8;
			int64_t field_B00;
			int64_t field_B08;
			int64_t field_B10;
			int64_t field_B18;
			int64_t field_B20;
			int32_t field_B28;
			int32_t field_B2C;
			int32_t field_B30;
			int32_t field_B34;
			int32_t field_B38;
			int32_t field_B3C;
			int64_t field_B40;
			int64_t field_B48;
			int64_t field_B50;
			int32_t field_B58;
			int32_t climbing_speed;
			int32_t swimming_speed;
			int32_t diving_skill;
			int32_t riding_speed;
			int32_t hang_gliding_speed;
			int32_t sailing_speed;
			int32_t light_diameter;
			int64_t field_B78;
			int64_t field_B80;
			int64_t field_B88;
			int64_t field_B90;
			int64_t field_B98;
			int64_t field_BA0;
			int64_t field_BA8;
			int64_t field_BB0;
			int64_t field_BB8;
			int64_t field_BC0;
			int64_t field_BC8;
			int64_t field_BD0;
			int64_t field_BD8;
			int64_t field_BE0;
			int32_t field_BE8;
			int32_t field_BEC;
			int64_t field_BF0;
			int64_t field_BF8;
			int64_t field_C00;
			int64_t field_C08;
			int64_t field_C10;
			int64_t field_C18;
			int64_t field_C20;
			int64_t field_C28;
			int64_t field_C30;
			AnimationState animation_state;
			int64_t field_1520;
			int64_t field_1528;
			float field_1530;
			int32_t field_1534;
			int64_t field_1538;
			uint8_t field_1540;
			int32_t field_1544;
			uint8_t field_1548;
			int32_t field_154C;
			int32_t field_1550;
			int32_t field_1554;
			int32_t field_1558;
			uint8_t field_155C;
			int32_t field_1560;
			uint8_t field_1564;
			uint8_t field_1565;
			int64_t field_1568;
			int64_t field_1570;
			int64_t field_1578;
			int64_t field_1580;
			int64_t field_1588;
			int64_t field_1590;
			int64_t field_1598;
			int64_t field_15A0;
			int64_t field_15A8;
			int64_t field_15B0;
			int64_t field_15B8;
			int64_t field_15C0;
			int64_t field_15C8;
			int64_t field_15D0;
			int64_t field_15D8;
			int32_t field_15E0;
			uint8_t field_15E4;
			uint8_t field_15E5;
			int64_t field_15E8;
			int64_t field_15F0;
		};
	};
};