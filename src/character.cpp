#include "character.hpp"

Character::Character(){}

Character::Character(Texture& texture) {
  sprite_.setTexture(texture);
}

void Character::draw(RenderTarget& target, RenderStates states) const {
  target.draw(sprite_, states);
}
