#include "Environment.h"

sf::RectangleShape Environment::base(sf::RenderWindow& window)
{
	int width = window.getSize().x;
	int height = 80;
	sf::RectangleShape floor;

	floor.setSize(sf::Vector2f(width, height));
	floor.setPosition(0 , 1000);
	//should be the lowest point of the window
	return floor;
}

void Environment::setGravity(float newG)
{
	gravity = newG;
}

float Environment::getGravity()
{
	return gravity;
}

void Environment::setfrictionState(bool state)
{
	frictionState = state;
}

bool Environment::getfrictionState()
{
	return frictionState;
}

