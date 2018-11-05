#include "Character.h"

void Character::MoveTo(float _x, float _y) {
	position.x = _x;
	position.y = _y;
}

float Character::getX() {
	return position.x;
}

float Character::getY() {
	return position.y;
}

Character::Character()
{
}


Character::~Character()
{
}
