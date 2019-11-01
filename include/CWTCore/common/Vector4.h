#pragma once
#include <cstdint>

namespace CWT {
	template <typename T>
	class Vector4
	{
	public:
		T X = 0;
		T Y = 0;
		T Z = 0;
		T W = 0;

		Vector4() {};
		Vector4(T x, T y, T z, T w) : X(x), Y(y), Z(z), W(w) {};
		~Vector4() {};
	};
};