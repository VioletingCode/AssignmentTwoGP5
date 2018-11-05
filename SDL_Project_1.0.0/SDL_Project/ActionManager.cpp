#include "ActionManager.h"
#include "CommandFiles.h"

//Needs an input event as a parameter
void ActionManager::HandleInput(SDL_Event _event, Character* _unit) {

	if (_event.key.keysym.sym == SDLK_w) {
		float newY = _unit->getY + 1.0f;
		Undoer->AddCommand(make_unique<Command>(MoveCommand(_unit, _unit->getX(), newY)));
	};
	if (_event.key.keysym.sym == SDLK_s) {
		float newY = _unit->getY - 1.0f;
		Undoer->AddCommand(make_unique<Command>(MoveCommand(_unit, _unit->getX(), newY)));
	};
	if (_event.key.keysym.sym == SDLK_a) {
		float newX = _unit->getX - 1.0f;
		Undoer->AddCommand(make_unique<Command>(MoveCommand(_unit, newX, _unit->getY())));
	};
	if (_event.key.keysym.sym == SDLK_d) {
		float newX = _unit->getX + 1.0f;
		Undoer->AddCommand(make_unique<Command>(MoveCommand(_unit, newX, _unit->getY())));
	};
	if (_event.key.keysym.sym == SDLK_z) {
		if (Undoer->hasActions)
			Undoer->UndoCommand();
	}
}

ActionManager::ActionManager() {

}


ActionManager::~ActionManager() {
}
