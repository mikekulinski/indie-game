#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>

#include "direction.hpp"

using namespace sf;

const IntRect DOWN_SPRITE = IntRect(0, 0, 16, 16);
const IntRect UP_SPRITE = IntRect(17, 0, 16, 16);
const IntRect RIGHT_SPRITE = IntRect(33, 0, 16, 16);
const IntRect LEFT_SPRITE = IntRect(49, 0, 16, 16);

class Character : public Drawable {
private:
  static const double constexpr SPEED = 20.0;

  Sprite sprite_;

  virtual void draw(RenderTarget& target, RenderStates states) const;

public:
  Character();

  Character(Texture& texture);

  void moveCharacter(Direction direction);
};

#endif // CHARACTER_H