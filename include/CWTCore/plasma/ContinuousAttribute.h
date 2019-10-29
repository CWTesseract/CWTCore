#pragma once

#include <vector>

#include "CWTCore/plasma/Attribute.h"

namespace CWT {
	namespace plasma {
		template <typename T>
		class ContinuousAttribute : Attribute {
		public:
			virtual ~ContinuousAttribute() {};

			std::vector<T> data;
		};
	};
};