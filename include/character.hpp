#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>

#include "direction.hpp"

using namespace sf;

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