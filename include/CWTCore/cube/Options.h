#pragma once
#include <cstdint>

namespace CWT {
	namespace cube {
		struct Options
		{
			int32_t fullscreen;
			int32_t resolution_x;
			int32_t resolution_y;
			int32_t refresh_rate;
			int32_t antialiasing;
			int32_t render_distance;
			int32_t cpu_performance;
			int32_t sound_volume;
			int32_t music_volume;
			int32_t camera_speed;
			int32_t camera_smoothness;
			int32_t invert_y;
			int32_t language;
			int32_t min_time_step_fps_limit;
			int32_t small_gui;
			int32_t vsync;
			int32_t show_rarity;
			float gui_scale;
			float map_scale;
			int32_t music_loop;
		};

	};
};









