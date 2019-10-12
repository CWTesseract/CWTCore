#pragma once

#include "CWTCore/common/Vector2.h"
#include <cstdint>
#include <functional>
#include <iostream>

namespace CWT {
	namespace cube {

		// A hashable class for representing zone positions.
		class ZonePosition
		{
		public:
			int32_t X;
			int32_t Y;

			ZonePosition(int32_t x, int32_t y) : X(x), Y(y) {}

			bool operator==(const ZonePosition& other) const {
				return (this->X == other.X && this->Y == other.Y);
			}
		};
	};
};

inline std::ostream& operator<<(std::ostream& os, CWT::cube::ZonePosition const& v) {
	os << "X:" << v.X << ", Y:" << v.Y;
	return os;
}

// Implement std::hash<ZonePosition>
namespace std {
	template <>
	struct hash<CWT::cube::ZonePosition>
	{
		std::size_t operator()(const CWT::cube::ZonePosition& k) const
		{
			uint64_t x = (uint32_t)k.X;
			uint64_t y = (uint32_t)k.Y;
			uint64_t key = x | (y << 32);

			// Call into the MSVC-STL FNV-1a std::hash function.
			return std::hash<uint64_t>()(key);
		}
	};
};
