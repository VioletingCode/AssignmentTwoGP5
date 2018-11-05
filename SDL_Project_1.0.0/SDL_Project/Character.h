#pragma once
#include "HFiles.h"
#include "Vector.h"

using namespace MATH;

class Character
{
private:
	int health;
	float wallet;
	Vec3 position;
public:
	void MoveTo(float _x, float _y);
	float getX();
	float getY();
	Character();
	~Character();
};