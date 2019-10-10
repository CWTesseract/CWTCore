#pragma once
#include <cstdint>

namespace CWT {
	template <typename T>
	class Vector2
	{
	public:
		T X = 0;
		T Y = 0;

		Vector2() {};
		Vector2(T x, T y) : X(x), Y(y) {};
		~Vector2() {};
	};
};

