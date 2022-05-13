#include"player.h"
#include "sattings.h"
Player::Player() {
	texture.loadFromFile("images/bunny2_stand.png");
	texture.setSmooth(true);
		sprite.setTexture(texture);
		sprite.setScale(0.5f, 0.5f);
		sprite.setPosition(pos);
		pos = sf::Vector2f(
			WINDOW_HEIGHT / 2 - getHitBox().width / 2,
		WINDOW_HEIGHT / 2 - getHitBox().height / 2);
};
void Player::update() {
	acc = sf::Vector2f(0.f, 0.5f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		acc.x = 0.5f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		acc.x = 0.5f;
	}
	speed += acc;
	pos += speed + sf::Vector2f(acc.x * 0.5, acc.y * 0.5);
	if (pos.x < 0 - getHitBox().width / 2) {
		pos.x = WINDOW_WIDTH - getHitBox().width / 2;
	}
	else if (pos.x > WINDOW_WIDTH) {
		pos.x = 0 - getHitBox().width / 2;
	}
	sprite.setPosition(pos);

}