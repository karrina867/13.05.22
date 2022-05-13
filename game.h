#pragma once
#include "SFML/Graphics.hpp"
#include"player.h"
class Game {
public:
	enum class GameState { INTRO, PLAY, GAME_OVER };
	Game();
	void play();
private:
	sf::RenderWindow window;
	GameState game_state = GameState::PLAY;
	Player player;

	void update();
	void draw();
	void check_collisions();
	void check_events();
};