#pragma once

#include "CWTCore/gfx/Graphics.h"
#include "CWTCore/common/dx11_stub.h"

namespace CWT {
	namespace gfx {
		class D3D11Graphics : public Graphics
		{
		public:
			~D3D11Graphics() {};
			void NewVertexBuffer() {};
			void NewIndexBufferUINT32() {};
			void NewIndexBufferUINT16() {};
			void DoDrawIndexed() {};

			ID3D11Device* device;
			ID3D11DeviceContext* device_context;
		};
	};
};