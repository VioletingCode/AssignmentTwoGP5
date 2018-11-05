#include "MoveCommand.h"

void MoveCommand::Action(){
	previousX = unit->getX;
	previousY = unit->getY;
	unit->MoveTo(newX, newY);
}

void MoveCommand::Undo() {
	unit->MoveTo(previousX, previousY);
}

MoveCommand::~MoveCommand()
{
}
