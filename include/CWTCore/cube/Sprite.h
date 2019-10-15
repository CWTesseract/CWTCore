#pragma once
#include <cstdint>
#include <map>

namespace CWT {
	namespace gfx {
		class D3D11Graphics;
		class D3D11IndexBuffer;
		class D3D11VertexBuffer;
	};
	namespace cube {

		class Sprite
		{
		public:
			virtual ~Sprite() {};
			Sprite() = delete;
			static Sprite* New(gfx::D3D11Graphics* gfx, uint8_t unk);
			
			struct UnkSubstruct
			{
				int64_t field_0;
				int64_t field_8;
				int64_t field_10;
			} field_8[3];

			std::map<void*, void*> unk_map_size_0x38;
			gfx::D3D11Graphics* gfx_D3D11graphics;
			int64_t field_68;
			gfx::D3D11VertexBuffer* gfx_D3D11VertexBuffer;
			gfx::D3D11IndexBuffer* gfx_D3D11IndexBuffer;
			int64_t field_80;
			int64_t field_88;
			int64_t field_90;
			uint8_t field_98;
			uint8_t field_99;
			uint8_t field_9A;
			uint8_t field_9B;
			int32_t field_9C;
			int16_t field_A0;
			uint8_t field_A2;
			uint8_t _pad_8[5];
		};

	};
};