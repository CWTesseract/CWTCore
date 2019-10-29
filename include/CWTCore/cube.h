#pragma once

#include <vector>
#include "assert_size.h"

#include "cube/AIObject.h"
#include "cube/BaseWidget.h"
#include "cube/ChatWidget.h"
#include "cube/Client.h"
#include "cube/Creature.h"
#include "cube/Controls.h"
#include "cube/EntityData.h"
#include "cube/Field.h"
#include "cube/FormulaDetailsWidget.h"
#include "cube/Game.h"
#include "cube/Host.h"
#include "cube/InventoryWidget.h"
#include "cube/Item.h"
#include "cube/ItemStack.h"
#include "cube/MapOverlayWidget.h"
#include "cube/MultiplayerWidget.h"
#include "cube/Options.h"
#include "cube/GUI.h"
#include "cube/ServerUpdateSubpackets.h"
#include "cube/Speech.h"
#include "cube/Sprite.h"
#include "cube/SpriteManager.h"
#include "cube/World.h"
#include "cube/WorldMap.h"
#include "cube/Zone.h"

assert_size(CWT::cube::AIObject, 0x150);
assert_size(CWT::cube::BaseWidget, 0x1E8);
assert_size(CWT::cube::ChatWidget, 0x1F0);
assert_size(CWT::cube::Client, 0xA58);
assert_size(CWT::cube::Creature, 0x15F8);
assert_size(CWT::cube::Creature::AnimationState, 0x8E8);
assert_size(CWT::cube::Controls, 0xB8);
assert_size(CWT::cube::EntityData::Appearance, 0xB0);
assert_size(CWT::cube::EntityData, 0x970);
assert_size(CWT::cube::Field, 0x58);
assert_size(CWT::cube::FormulaDetailsWidget, 0x390);
assert_size(CWT::cube::Game, 0x2280);
assert_size(CWT::cube::Host, 0x630);
assert_size(CWT::cube::InventoryWidget, 0x2D0);
assert_size(CWT::cube::Item::ItemCustomization, 0x4);
assert_size(CWT::cube::Item, 0xA0);
assert_size(CWT::cube::ItemStack, 0xA4);
assert_size(CWT::cube::MapOverlayWidget, 0x260);
assert_size(CWT::cube::MultiplayerWidget, 0x2F8);
assert_size(CWT::cube::Options, 0x50);
assert_size(CWT::cube::GUI, 0x5D0);
assert_size(CWT::cube::ServerUpdateSubpackets, 0x100);
assert_size(CWT::cube::Speech, 0xC8);
assert_size(CWT::cube::Sprite, 0xA8);
assert_size(CWT::cube::SpriteManager, 0x80);
assert_size(CWT::cube::World, 0x548);
assert_size(CWT::cube::World::WorldState, 0x38);
assert_size(CWT::cube::World::AIManager, 0x18);
assert_size(CWT::cube::World::UnkSubstruct, 0x50);
assert_size(CWT::cube::WorldMap, 0x1F0);
assert_size(CWT::cube::Zone, 0x58518);

static_assert(offsetof(CWT::cube::Creature::AnimationState, field_50) == 0x50, "field_50");
static_assert(offsetof(CWT::cube::Creature::AnimationState, neck_sprite) == 0x130, "neck_sprite");
static_assert(offsetof(CWT::cube::Creature::AnimationState, field_8B8) == 0x8B8, "field_8B8");

static_assert(offsetof(CWT::cube::Game, world) == 0x8, "world");
static_assert(offsetof(CWT::cube::Game, speech) == 0x50, "speech");
static_assert(offsetof(CWT::cube::Game, host) == 0x6E8, "host");
static_assert(offsetof(CWT::cube::Game, client) == 0xD18, "client");
static_assert(offsetof(CWT::cube::Game, some_subpackets_list) == 0x1970, "some_subpackets_list");
static_assert(offsetof(CWT::cube::Game, cube_game_lock_0) == 0x1C90, "cube_game_lock_0");

//template<int s> struct GetSize;
//GetSize<sizeof(CWT::cube::Creature)> size;
//assert_size(CWT::cube::Creature, 0x15F8);