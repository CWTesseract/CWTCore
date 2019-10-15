#pragma once
#include <cstdint>
#include <string>

namespace CWT {
	namespace internal {
		class SigScan
		{
		public:
			static uint64_t Scan(uint64_t start_address, const std::string& sig);
		};
	};
};
