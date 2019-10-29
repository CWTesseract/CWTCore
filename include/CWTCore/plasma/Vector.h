#pragma once

namespace CWT {
	namespace plasma {
		template <size_t C, typename T>
		class Vector {
		public:
			T data[C];
		};
	};
};