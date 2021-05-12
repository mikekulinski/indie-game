#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include "character.hpp"

using namespace sf;

class Game {
private:
  RenderWindow window_;
  Clock clock_;

  Character character_;

public:
  Game();

  void input();

  void draw();

  int run(); // main loop of the game
};

#endif // GAME_H