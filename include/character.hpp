#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>

#include "direction.hpp"

using namespace sf;

class Character : public Drawable {
private:
  static const double constexpr SPEED = 10.0;

  Sprite sprite_;
  Vector2i position_;

  virtual void draw(RenderTarget& target, RenderStates states) const;

public:
  Character();

  Character(Texture& texture);

  void moveCharacter(Direction direction);
};

#endif // CHARACTER_H