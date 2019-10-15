#include "CWTCore/internal/Context.h"
#include "CWTCore/internal/SigScan.h"

namespace CWT {
	namespace internal {
		Context::Context() {
			uint64_t image_base = (uint64_t)GetModuleHandle(NULL);


			// Get the game version:
			// 8B 05 79 B1 34 00    mov eax, cs:dword_14043F3AC
			uint64_t game_version_global_mov_instruction = SigScan::Scan(image_base, "8B 05 ?? ?? ?? ?? 89 04 1A 83 c2 04");
			uint32_t rel_offset = *(uint32_t*)(game_version_global_mov_instruction + 2); // Offset relative to the next instruction's address.
			game_version = *(uint32_t*)(game_version_global_mov_instruction + rel_offset + 6); // Instruction size = 6
			//std::cout << "Game version: " << game_version << std::endl;

			// Get the directx global objects:
			/*
			.text:0000000140134D56 48 8D 05 3B CD 41 00                                         lea     rax, qword_140551A98 // GLOBAL_ID3D11DeviceContext_ptr
			.text:0000000140134D5D 48 89 44 24 48                                               mov     [rsp+170h+var_128], rax
			.text:0000000140134D62 4C 89 74 24 40                                               mov     [rsp+170h+var_130], r14
			.text:0000000140134D67 48 8D 05 22 CD 41 00                                         lea     rax, qword_140551A90 // GLOBAL_ID3D11Device_ptr
			*/
			uint64_t dev_ctx_lea_start = SigScan::Scan(image_base, "48 8D 05 ?? ?? ?? ?? 48 89 44 24 48 4C 89 74 24 40");
			uint32_t dev_ctx_rel_offset = *(uint32_t*)(dev_ctx_lea_start + 3);
			d3d11_device_ctx = (ID3D11DeviceContext**)(dev_ctx_lea_start + dev_ctx_rel_offset + 7); // Instruction size = 7
			//std::cout << "d3d11_device_ctx: " << d3d11_device_ctx << std::endl;

			uint64_t dev_lea_start = dev_ctx_lea_start + 7 + 5 + 5;
			uint32_t dev_rel_offset = *(uint32_t*)(dev_lea_start + 3);
			d3d11_device = (ID3D11Device**)(dev_lea_start + dev_rel_offset + 7); // Instruction size = 7
			//std::cout << "d3d11_device: " << d3d11_device << std::endl;


			//std::cout << "Context done" << std::endl;

		}
	};
};
