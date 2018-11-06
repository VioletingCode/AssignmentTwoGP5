#include "MoveCommand.h"

void MoveCommand::Action(){
	unit->moveTo(newPosition);
}

void MoveCommand::Undo() {
	unit->moveTo(prevPosition);
}

MoveCommand::~MoveCommand()
{
}
