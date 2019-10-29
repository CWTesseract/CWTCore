#pragma once

#include <cstdint>
#include <string>

#include "CWTCore/plasma/NamedObject.h"

namespace CWT {
	namespace plasma {
		class Keyable : NamedObject {
		public:
			virtual ~Keyable() {};

			int64_t field_38;
			int64_t field_40;
			int64_t field_48;
			std::wstring key;
		};
	};
};