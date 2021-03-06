#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <math.h>

#include "game.hpp"

Game::Game() {
  window_.create(VideoMode(320, 180), "Mike's Indie Game");
  window_.setFramerateLimit(144);
}

int Game::run() {
  sf::Texture texture;
  if (!texture.loadFromFile("../graphics/spritesheet.png"))
    return EXIT_FAILURE;
  character_ = Character(texture);

  // Start the game loop
  while (window_.isOpen()) {
    Time elapsed = clock_.restart();

    input();

    draw();
  }
  return EXIT_SUCCESS;
}

void Game::draw() {
  window_.clear(Color::White);

  window_.draw(character_);

  window_.display();
}