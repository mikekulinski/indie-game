#include "character.hpp"

Character::Character() {}

Character::Character(Texture& texture) {
  sprite_.setTexture(texture);
  sprite_.setTextureRect(IntRect(0, 0, 16, 16));
}

void Character::draw(RenderTarget& target, RenderStates states) const {
  target.draw(sprite_, states);
}

void Character::moveCharacter(Direction direction) {
  if (direction == UP) {
    sprite_.move(0.0, -1.0 * Character::SPEED);
    sprite_.setTextureRect(UP_SPRITE);
  } else if (direction == DOWN) {
    sprite_.move(0.0, 1.0 * Character::SPEED);
    sprite_.setTextureRect(DOWN_SPRITE);
  } else if (direction == LEFT) {
    sprite_.move(-1.0 * Character::SPEED, 0.0);
    sprite_.setTextureRect(LEFT_SPRITE);
  } else {
    sprite_.move(1.0 * Character::SPEED, 0.0);
    sprite_.setTextureRect(RIGHT_SPRITE);
  }
}
