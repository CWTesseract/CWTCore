#pragma once

#include <cstdint>
#include <string>

#include "CWTCore/plasma/NamedObject.h"

namespace CWT {
	namespace plasma {
		class Node;

		class Widget : NamedObject {
		public:
			virtual ~Widget() {};

			int64_t field_38;
			int64_t field_40;
			int64_t field_48;
			int64_t field_50;
			int64_t field_58;
			int64_t field_60;
			int64_t field_68;
			int32_t field_70;
			int32_t field_6C;
			int64_t field_78;
			int32_t field_80;
			int32_t field_7C;
			int32_t field_88;
			int32_t field_84;
			int32_t field_90;
			int32_t field_8C;
			int32_t field_98;
			int32_t field_94;
			std::wstring some_string;
			int64_t field_C0;
			int64_t field_C8;
			int64_t field_D0;
			int64_t field_D8;
			int64_t field_E0;
			int64_t field_E8;
			int64_t field_F0;
			int64_t field_F8;
			int64_t field_100;
			int64_t field_108;
			int64_t field_110;
			int64_t field_118;
			int64_t field_120;
			int64_t field_128;
			int64_t field_130;
			int64_t field_138;
			int64_t field_140;
			int64_t field_148;
			int64_t field_150;
			int64_t field_158;
			int64_t field_160;
			int64_t field_168;
			int64_t field_170;
			plasma::Node* node;
			int64_t field_180;
			int64_t field_188;
			int64_t field_190;
			int64_t field_198;
			int64_t field_1A0;
		};
	};
};