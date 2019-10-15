#pragma once

#include "CWTCore/common/dx11_stub.h"
#include "CWTCore/internal/CubeFunctions.h"

namespace CWT {
	namespace internal {

		class Context {
			// Singleton implementation:
		public:
			Context(const Context&) = delete; // delete copy constructor.
			Context& operator=(const Context&) = delete; // Delete copy assignment operator.
			Context(Context&&) = delete; // Delete move constructor
			Context& operator=(Context&&) = delete; // Delete move assignment operator.

			static auto& instance()
			{
				static Context ctx;
				return ctx;
			}
			
		public:
			// Actual class methods:
			CubeFunctions funcs;
			uint32_t game_version;
			ID3D11Device** d3d11_device;
			ID3D11DeviceContext** d3d11_device_ctx;

		private:
			// Private constructor
			Context();
		};
	};
};