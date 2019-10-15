#pragma once

#include <cstdint>

#include "CWTCore/gfx/IndexBuffer.h"
#include "CWTCore/common/dx11_stub.h"

namespace CWT {
	namespace gfx {
		class D3D11IndexBuffer : public IndexBuffer
		{
		public:
			~D3D11IndexBuffer() {};
			void vfunc1() {};
			void vfunc2() {};

			ID3D11Device* device;
			ID3D11Buffer* buffer;
			uint32_t field_18;
			uint32_t field_1C;
		};
	};
};