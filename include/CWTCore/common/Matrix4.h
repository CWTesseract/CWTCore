#pragma once
#include <cstdint>

namespace CWT {
	template <typename T>
	class Matrix4
	{
	public:
		union {
			struct {
				T _11, _12, _13, _14;
				T _21, _22, _23, _24;
				T _31, _32, _33, _34;
				T _41, _42, _43, _44;
			};

			T m[16];
		};

		Matrix4() {};
		~Matrix4() {};
	};
};

