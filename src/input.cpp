#include <iostream>

#include "game.hpp"

void Game::input() {
  // Process events
  Event event;
  while (window_.pollEvent(event)) {
    switch (event.type) {
    case Event::Closed:
      // Close window: exit
      window_.close();
      break;

    case Event::KeyPressed:
      switch (event.key.code) {
      case Keyboard::Key::W:
        character_.moveCharacter(UP);
        break;
      case Keyboard::Key::A:
        character_.moveCharacter(LEFT);
        break;
      case Keyboard::Key::S:
        character_.moveCharacter(DOWN);
        break;
      case Keyboard::Key::D:
        character_.moveCharacter(RIGHT);
        break;

      default:
        break;
      }
      break;

    default:
      break;
    }
  }
}
