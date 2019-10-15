#pragma once

#include "assert_size.h"

#include "gfx/Chunk.h"
#include "gfx/D3D11Graphics.h"
#include "gfx/D3D11IndexBuffer.h"
#include "gfx/D3D11VertexBuffer.h"
#include "gfx/Graphics.h"
#include "gfx/IndexBuffer.h"
#include "gfx/VertexBuffer.h"

assert_size(CWT::gfx::Chunk, 0x288);
assert_size(CWT::gfx::D3D11Graphics, 0x18);
assert_size(CWT::gfx::D3D11IndexBuffer, 0x20);
assert_size(CWT::gfx::D3D11VertexBuffer, 0x18);
assert_size(CWT::gfx::Graphics, 0x8);
assert_size(CWT::gfx::IndexBuffer, 0x8);
assert_size(CWT::gfx::VertexBuffer, 0x8);
