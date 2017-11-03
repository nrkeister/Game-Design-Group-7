#include <memory>
#include <SFML/Graphics.hpp>
#include "engine/Engine.hpp"
#include "components/SpriteAnimation.hpp"
#include "components/Hitbox.hpp"
#include "game/rooms/Room.hpp"
#include "game/rooms/RoomGroup.hpp"
////////////////
// rando.hpp
//
// This is just a regular character. He has no motivations, goals, or collision checking yet.
// He likes to go for long walks in complete and utter darkness.
// He's very animated.
//
////////////////

class Rando: public GameObject 
{
public:
    void init();
    void onUpdate(float dt);
    void setGroup(RoomGroup* group) { g = group; };
protected:
    RoomGroup* g;
    sf::View v;
    sf::Texture sprite_map;
    SpriteAnimation* curr;
    // create 4 sprite animations representing walking 
    // in the 4 cardinal directions
    SpriteAnimation walk_up;
    SpriteAnimation walk_down;
    SpriteAnimation walk_left;
    SpriteAnimation walk_right;
    // create a hitbox at bottom half of 32x32 character
    Hitbox hbox;
    void onDraw(sf::RenderTarget& target, sf::RenderStates states) const;
};