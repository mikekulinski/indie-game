#include <iostream>
#include <math.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "game.h"

Game::Game() {
  window.create(VideoMode(800, 600), "Mike's Indie Game");
  window.setFramerateLimit(60);

  text.setCharacterSize(50);
  text.setFillColor(Color::Black);
}

int Game::run() {
  sf::Font font;
  if (!font.loadFromFile("../fonts/arial.ttf"))
      return EXIT_FAILURE;
  text.setFont(font);

	// Start the game loop
	while (window.isOpen())
	{
    Time elapsed = clock.restart();

		// Process input
    input();

    // TODO: updateCharacter();

    draw();
	}
  return EXIT_SUCCESS;
}

void Game::draw() {
  window.clear(Color::White);

  window.draw(text);

  window.display();
}