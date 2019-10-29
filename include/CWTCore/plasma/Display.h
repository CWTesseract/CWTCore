#pragma once

#include <cstdint>

#include "CWTCore/plasma/Keyable.h"
#include "CWTCore/plasma/DiscreteAttribute.h"
#include "CWTCore/plasma/ContinuousAttribute.h"
#include "CWTCore/plasma/Vector.h"

namespace CWT {
	namespace plasma {
		class Display : Keyable {
		public:
			virtual ~Display() {};

			DiscreteAttribute<int32_t> visibility;
			DiscreteAttribute<int32_t> clipping;
			ContinuousAttribute<plasma::Vector<4, float>> fill;
			ContinuousAttribute<plasma::Vector<4, float>> stroke;
			ContinuousAttribute<plasma::Vector<4, float>> blur_radius;
			int64_t field_318;
			int64_t field_320;
			int64_t field_328;
			int64_t field_330;
		};
	};
};