#pragma once

#include <vector>

#include "CWTCore/plasma/Attribute.h"

namespace CWT {
	namespace plasma {
		template <typename T>
		class DiscreteAttribute : Attribute {
		public:
			virtual ~DiscreteAttribute() {};

			std::vector<T> data;
		};
	};
};