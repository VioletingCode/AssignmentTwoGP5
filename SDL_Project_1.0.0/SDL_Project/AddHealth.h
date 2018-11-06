#pragma once
#include "HFiles.h"

class AddHealth : public Command
{
private:
	int amount;
	Character * character;

public:
	inline AddHealth(Character * c, int amount_) { amount = amount_; character = c; }
	inline void Action() { character->addHealth(amount); }
	inline void Undo() { character->removeHealth(amount); }
};

