#pragma once
#include <vec2.hpp>
#include <string>
#include "SFML\Graphics.hpp"
#include <math.h>
class player
{
public:
	player(std::string name, int id,glm::vec2 loc,sf::Texture * tex) :name(name), id(id), speed(0.0f), location(loc), direction(0.0f)
	{
		sprt = new sf::Sprite;
		sprt->setTexture(*tex);
		sprt->setColor(col);
	};
	void update();
	~player(){ delete sprt; };

private:
	glm::vec2 location;
	float direction;
	float speed;
	std::string name;
	int id;
	sf::Sprite *sprt;
	sf::Color col;
};
