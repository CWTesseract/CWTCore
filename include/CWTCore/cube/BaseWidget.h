#pragma once

#include <cstdint>

#include "CWTCore/plasma/Widget.h"

namespace CWT {
	namespace cube {
		class BaseWidget : plasma::Widget
		{
		public:
			virtual ~BaseWidget() {};

			int64_t field_1A8;
			int64_t field_1B0;
			int64_t field_1B8;
			int32_t field_1C0;
			int32_t field_1BC;
			int32_t field_1C8;
			int32_t field_1C4;
			int32_t field_1D0;
			int32_t field_1CC;
			int32_t field_1D8;
			int32_t field_1D4;
			int64_t field_1E0;
		};
	};
};