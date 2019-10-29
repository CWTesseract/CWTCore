#pragma once

#include <cstdint>

#include "CWTCore/plasma/NamedObject.h"

namespace CWT {
	namespace plasma {
		class Display;

		class Node : NamedObject {
		public:
			virtual ~Node() {};

			int64_t field_38;
			int64_t parent_node_or_base_maybe;
			int64_t children_nodes_linked_list;
			int64_t field_50;
			int64_t shape;
			int64_t transformation;
			Display* display;
			int64_t widget;
			int64_t field_78;
			int64_t field_80;
			int64_t field_88;
			int64_t field_90;
			int64_t field_98;
			int64_t field_A0;
			int64_t field_A8;
			int64_t field_B0;
			int64_t field_B8;
			int64_t field_C0;
		};
	};
};