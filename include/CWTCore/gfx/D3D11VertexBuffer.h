#pragma once

#include "CWTCore/gfx/VertexBuffer.h"
#include "CWTCore/common/dx11_stub.h"

namespace CWT {
	namespace gfx {
		class D3D11VertexBuffer : public VertexBuffer
		{
		public:
			~D3D11VertexBuffer() {};
			void vfunc1() {};
			void vfunc2() {};

			ID3D11Device* device;
			ID3D11Buffer* buffer;
		};
	};
};