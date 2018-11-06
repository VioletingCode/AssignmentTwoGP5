#pragma once
#include "Command.h"

using namespace MATH;

class MoveCommand :
	public Command
{
private:
	Vec2 * newPosition;
	Vec2 * prevPosition;
	//unique_ptr<Character> unit;
	Character * unit = 0;
public:
	inline MoveCommand(Character* _unit, Vec2 * pos) {
		//unit = make_unique<Character>(_unit); previousX = 0; previousY = 0; newX = _x; newY = _y;
		unit = _unit;
		prevPosition = 0;
		newPosition = pos;
	};
	void Action();
	void Undo();
	~MoveCommand();
};

