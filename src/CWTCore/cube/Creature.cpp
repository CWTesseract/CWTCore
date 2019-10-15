#include "CWTCore/internal/Context.h"

#include "CWTCore/cube/Creature.h"

namespace CWT {
	namespace cube {
		Creature* Creature::New(uint64_t* guid_ptr)
		{
			Creature* data = reinterpret_cast<Creature*>(::operator new(sizeof(Creature)));
			return CWT::internal::Context::instance().funcs.cube_creature__ctor(data, guid_ptr);
		};
	};
};