#pragma once
#include <cstdint>

namespace CWT {
	template <typename T>
	class Vector3
	{
	public:
		T X = 0;
		T Y = 0;
		T Z = 0;

		Vector3() {};
		Vector3(T x, T y, T z) : X(x), Y(y), Z(z) {};
		~Vector3() {};
	};
};

