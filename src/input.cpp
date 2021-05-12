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
            std::cout << "Key Pressed: " << event.key.code << std::endl;
            break;
          case Keyboard::Key::A:
            std::cout << "Key Pressed: " << event.key.code << std::endl;
            break;
          case Keyboard::Key::S:
            std::cout << "Key Pressed: " << event.key.code << std::endl;
            break;
          case Keyboard::Key::D:
            std::cout << "Key Pressed: " << event.key.code << std::endl;
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
