#pragma once

namespace CWT {
	namespace gfx {
		class Graphics
		{
		public:
			virtual ~Graphics() {};
			virtual void NewVertexBuffer() {};
			virtual void NewIndexBufferUINT32() {};
			virtual void NewIndexBufferUINT16() {};
			virtual void DoDrawIndexed() {};
		};
	};
};