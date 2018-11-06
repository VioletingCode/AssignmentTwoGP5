#pragma once
#include "HFiles.h"
#include "Vector.h"


class Character
{
private:
	int health;
	float wallet;
	Vec2 * position;

public:
	Character();
	~Character();

	void addBalance(float amount);
	void removeBalance(float amount);

	void addHealth(int amount);
	void removeHealth(int amount);

	void moveTo(Vec2 * pos);

	inline Vec2 * getPosition() { return position; }
	inline int getHealth() { return health; }
	inline float walletBalance() { return wallet; }
};

