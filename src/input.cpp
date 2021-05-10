#include <iostream>

#include "game.h"

void Game::input()
{
  // Process events
  Event event;
  while (window.pollEvent(event)) {
    switch (event.type) {
      case Event::Closed:
        // Close window: exit
        window.close();
        break;

      case Event::KeyPressed:
        switch (event.key.code) {
          case Keyboard::Key::W:
            text.setString("UP");
            text.setPosition(window.getSize().x*0.5 - text.getGlobalBounds().width / 2, window.getSize().y*0.5 - text.getGlobalBounds().height);
            std::cout << "Key Pressed: " << event.key.code << std::endl;
            break;
          case Keyboard::Key::A:
            text.setString("LEFT");
            text.setPosition(window.getSize().x*0.5 - text.getGlobalBounds().width / 2, window.getSize().y*0.5 - text.getGlobalBounds().height);
            std::cout << "Key Pressed: " << event.key.code << std::endl;
            break;
          case Keyboard::Key::S:
            text.setString("DOWN");
            text.setPosition(window.getSize().x*0.5 - text.getGlobalBounds().width / 2, window.getSize().y*0.5 - text.getGlobalBounds().height);
            std::cout << "Key Pressed: " << event.key.code << std::endl;
            break;
          case Keyboard::Key::D:
            text.setString("RIGHT");
            text.setPosition(window.getSize().x*0.5 - text.getGlobalBounds().width / 2, window.getSize().y*0.5 - text.getGlobalBounds().height);
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
