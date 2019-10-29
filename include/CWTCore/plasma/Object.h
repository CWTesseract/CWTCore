#pragma once

#include <cstdint>

namespace CWT {
	namespace plasma {
		class Node;

		class Object {
		public:
			virtual ~Object() {};

			void* plasma_d3d11engine;
			void* some_nodes_linked_list;
		};
	};
};