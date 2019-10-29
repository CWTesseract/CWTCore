#pragma once
#include <cstdint>
#include <vector>
#include <map>

namespace CWT {
	namespace plasma {
		class Node;
		class Widget;
	};

	namespace cube {

		class Game;
		class ChatWidget;

		class PlasmaHolder
		{
		public:
			plasma::Node* start_screen_node;
			plasma::Node* start_screen_node_buttons_and_text_bottom;
			plasma::Widget* start_menu_widget;
			plasma::Node* select_character_node;
			std::vector<plasma::Widget*> vec_of_character_preview_widget_ptrs;
			plasma::Node* select_character_select_character_node;
			plasma::Node* select_character_smallbutton_select_node;
			plasma::Node* select_character_delete_character_node;
			int32_t field_50;
			plasma::Node* create_character_node;
			plasma::Widget* character_style_widget;
			plasma::Node* unk_blackwidget_node_0x68;
			plasma::Node* select_character_create_character_node;
			plasma::Node* some_charactername_node;
			plasma::Node* world_select_node;
			std::vector<plasma::Node*> unk_vec_plasma_node_ptr_0x88;
			std::map<plasma::Node*, uint64_t> map_plasma_node_ptr_to_uint64;
			std::map<uint64_t, plasma::Node*> map_uint64_to_plasma_node_ptr;
			plasma::Node* some_multiplayer_worlds_button_node;
			plasma::Node* world_select_select_world_node;
			plasma::Node* world_select_child_node_2;
			plasma::Node* world_select_delete_world_node;
			int64_t field_E0;
			plasma::Node* inside_world_creation_node;
			plasma::Node* create_world_button_node;
			plasma::Node* some_worldseed_node;
			plasma::Node* some_worldname_node;
			plasma::Node* unk_node_0x108;
			std::vector<plasma::Node*> unk_vector_plasma_node_0x110;
			std::vector<plasma::Node*> unk_vector_plasma_node_0x128;
			plasma::Node* playername_and_level_node;
			plasma::Node* unk_node_0x148;
			plasma::Node* hpbar_node;
			plasma::Node* hpbar_bar_node;
			plasma::Node* mpbar_node;
			plasma::Node* mpbar_bar_node;
			plasma::Node* experiencebar_node;
			plasma::Node* xpbar_node;
			plasma::Node* mpbar_chargebar_node;
			plasma::Node* castbar_node;
			plasma::Node* castbar_bar_node;
			plasma::Node* staminabar_node;
			plasma::Node* staminabar_bar_node;
			plasma::Node* maybe_quickbutton_node;
			plasma::Node* info_node_0;
			plasma::Node* info_node_1;
			plasma::Node* info_node_2;
			plasma::Node* location_node;
			plasma::Node* levelinfo_node;
			plasma::Node* crosshair_node;
			plasma::Node* zoomcrosshair_node;
			plasma::Node* lockedtarget_node;
			plasma::Node* highlightedtarget_node;
			plasma::Node* selector_node;
			plasma::Node* gold_100_node;
			plasma::Node* contextitem_100_node;
			plasma::Node* combopoints_node;
			plasma::Widget* inventory_widget_0x218;
			plasma::Widget* character_widget_0x220;
			plasma::Widget* inventory_widget_0x228;
			plasma::Widget* formula_details_widget;
			plasma::Widget* inventory_widget_0x238;
			plasma::Widget* system_widget;
			plasma::Widget* enchant_widget;
			plasma::Widget* voxel_widget;
			plasma::Widget* adaption_widget;
			plasma::Widget* question_widget;
			plasma::Widget* map_overlay_widget;
			plasma::Widget* multiplayer_widget;
			plasma::Widget* help_widget;
			cube::ChatWidget* chat_widget;
			plasma::Node* recentlands_land_node;
			plasma::Node* leftbutton_node;
			plasma::Node* rightbutton_node;
			plasma::Node* missiontag_white_node;
			plasma::Widget* preview_widget;
			std::vector<plasma::Widget*> vec_equipment_spritewidget_ptrs;
			plasma::Widget* sprite_widget_0x2C8;
			plasma::Widget* sprite_widget_0x2D0_maybe_item_preview;
			plasma::Widget* sprite_widget_0x2D8;
			plasma::Widget* sprite_widget_0x2E0;
			int64_t field_2E8;
			int64_t field_2F0;
			int64_t field_2F8;
			int64_t field_300;
			uint8_t field_308;
			int32_t field_30C;
			plasma::Node* blackwidget_node;
			plasma::Node* speech_node;
			plasma::Node* tab_node;
			plasma::Node* icons_plx_;
			plasma::Node* unk_plasma_node_0x330;
			plasma::Node* loading_screen_node_maybe;
			plasma::Node* back_node;
			plasma::Node* enemy_node;
			plasma::Node* monster_node;
			plasma::Node* crystal_node;
			plasma::Node* brazier_node;
			plasma::Node* manapump_node;
			plasma::Node* npc_node;
			plasma::Node* static_node;
			plasma::Node* object_node;
			plasma::Node* star_node;
			plasma::Node* cross_node;
			plasma::Node* flight_point_node;
			plasma::Node* unkown_flight_point_node;
			plasma::Node* home_node;
			plasma::Node* mapposition_node;
			plasma::Node* direction_node;
			plasma::Node* armor_shop_node;
			plasma::Node* weapon_shop_node;
			plasma::Node* item_shop_node;
			plasma::Node* identifier_node;
			plasma::Node* smithy_node;
			plasma::Node* carpenters_shop_node;
			plasma::Node* tailors_shop_node;
			plasma::Node* inn_node;
			plasma::Node* shrine_node;
			plasma::Node* spirit_node;
			plasma::Node* bell_node;
			plasma::Node* harp_node;
			plasma::Node* whistle_node;
			plasma::Node* solved_node;
			plasma::Node* gnome_node;
			plasma::Node* hangglider_node;
			plasma::Node* boat_node;
			plasma::Node* climbingspikes_node;
			plasma::Node* reins_node;
			plasma::Node* destination_node;
			plasma::Node* crafting1_node;
			plasma::Node* crafting2_node;
			plasma::Node* crafting3_node;
			plasma::Node* crafting4_node;
			plasma::Node* flight_master_node;
			plasma::Node* guild_hall_node;
			plasma::Node* flower_node;
			plasma::Node* key_node;
			plasma::Node* treasure_node;
			plasma::Node* witch_node;
			plasma::Node* demonportal_node;
			std::map<uint64_t, plasma::Node*> map_uint64_id_to_plasma_node_effect_icon;
			std::map<uint32_t, plasma::Node*> map_uint32_skillid_to_plasma_node_skill_thing;
			plasma::Node* weaponrarity0_node;
			plasma::Node* weaponrarity1_node;
			plasma::Node* weaponrarity2_node;
			plasma::Node* weaponrarity3_node;
			plasma::Node* weaponrarity4_node;
			plasma::Node* weaponrarity5_node;
			plasma::Node* armorrarity0_node;
			plasma::Node* armorrarity1_node;
			plasma::Node* armorrarity2_node;
			plasma::Node* armorrarity3_node;
			plasma::Node* armorrarity4_node;
			plasma::Node* armorrarity5_node;
			plasma::Widget* options_widget;
			plasma::Widget* controls_widget;
			float mouse_cursor_distance_from_top_of_screen;
			float ui_scale_for_some_things;
			uint8_t worldmap_related_bool;
			plasma::Node* textFX_node;
			plasma::Node* lifebars_node;
			plasma::Node* enemylifebar_small_node;
			plasma::Node* friendlifebar_small_node;
			plasma::Node* staticlifebar_small_node;
			plasma::Node* neutrallifebar_small_node;
			plasma::Node* enemylifebar_node;
			plasma::Node* friendlifebar_node;
			plasma::Node* staticlifebar_node;
			plasma::Node* neutrallifebar_node;
			int32_t field_5A8;
			int32_t field_5AC;
			int64_t list_speech_text_node_ptr;
			int64_t list_speech_text_node_ptr_count;
			cube::Game* game;
			int64_t field_5C8;
		};
	};
};