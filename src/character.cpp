#include "character.hpp"

Character::Character() {}

Character::Character(Texture& texture) {
  sprite_.setTexture(texture);
  sprite_.scale(Vector2f(0.25, 0.25));
}

void Character::draw(RenderTarget& target, RenderStates states) const {
  target.draw(sprite_, states);
}

void Character::moveCharacter(Direction direction) {
  if (direction == UP) {
    sprite_.move(0.0, -1.0 * Character::SPEED);
  } else if (direction == DOWN) {
    sprite_.move(0.0, 1.0 * Character::SPEED);
  } else if (direction == LEFT) {
    sprite_.move(-1.0 * Character::SPEED, 0.0);
  } else {
    sprite_.move(1.0 * Character::SPEED, 0.0);
  }
}
