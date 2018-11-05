#pragma once
#include "Command.h"
class MoveCommand :
	public Command
{
private:
	float newX;
	float newY;
	float previousX;
	float previousY;
	unique_ptr<Character> unit;
public:
	inline MoveCommand(Character* _unit, float _x, float _y) {
		unit = make_unique<Character>(_unit); previousX = 0; previousY = 0; newX = _x; newY = _y;
	};
	void Action();
	void Undo();
	~MoveCommand();
};

