#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Game {
  private:
    RenderWindow window;
    Clock clock;
    Text text;

  public:
    Game();

    void input();

    void updateCharacter(Time elapsed);

    void draw();

    int run(); // main loop of the game
};

#endif // GAME_H