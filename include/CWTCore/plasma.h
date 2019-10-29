#pragma once

#include <vector>
#include "assert_size.h"

#include "plasma/Attribute.h"
#include "plasma/ContinuousAttribute.h"
#include "plasma/DiscreteAttribute.h"
#include "plasma/Display.h"
#include "plasma/NamedObject.h"
#include "plasma/Node.h"
#include "plasma/Object.h"
//#include "plasma/Vector.h"
#include "plasma/Widget.h"

assert_size(CWT::plasma::Attribute, 0x70);
assert_size(CWT::plasma::ContinuousAttribute<void*>, 0x88);
assert_size(CWT::plasma::DiscreteAttribute<void*>, 0x88);
assert_size(CWT::plasma::Display, 0x338);
assert_size(CWT::plasma::Object, 0x18);
assert_size(CWT::plasma::NamedObject, 0x38);
assert_size(CWT::plasma::Node, 0xC8);
//assert_size(CWT::plasma::Vector<4, float>, 0x10)
assert_size(CWT::plasma::Widget, 0x1A8);