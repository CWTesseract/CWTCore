#pragma once

#include <cstdint>
#include <string>

#include "CWTCore/plasma/Object.h"

namespace CWT {
	namespace plasma {
		class NamedObject : Object {
		public:
			virtual ~NamedObject() {};

			std::wstring name;
		};
	};
};