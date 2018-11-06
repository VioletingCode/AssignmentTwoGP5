#include "Character.h"


using namespace MATH;

Character::Character()
{
	position = 0;
	health = 100;
	wallet = 0;
}


Character::~Character()
{
}

void Character::addBalance(float amount) {
	wallet += amount;
}

void Character::removeBalance(float amount) {
	wallet -= amount;
}

void Character::addHealth(int amount) {
	health += amount;
}

void Character::removeHealth(int amount) {
	health -= amount;
}

void Character::moveTo(Vec2 * pos) {
	position = pos;
}
