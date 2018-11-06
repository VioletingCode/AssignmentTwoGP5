#include "ActionManager.h"
#include "CommandFiles.h"
#include "Vector.h"

//Needs an input event as a parameter
void ActionManager::HandleInput(SDL_Event _event, Character* _unit) {

	if (_event.key.keysym.sym == SDLK_w) {
		//float newY = _unit->getY + 1.0f;
		Vec2 * newPos = new Vec2(_unit->getPosition()->x, _unit->getPosition()->y + 1.0f);
		Undoer->AddCommand(new MoveCommand(_unit, newPos));
	};
	if (_event.key.keysym.sym == SDLK_s) {
		//float newY = _unit->getY - 1.0f;
		Vec2 * newPos = new Vec2(_unit->getPosition()->x, _unit->getPosition()->y - 1.0f);
		Undoer->AddCommand(new MoveCommand(_unit, newPos));
	};
	if (_event.key.keysym.sym == SDLK_a) {
		//float newX = _unit->getX - 1.0f;
		Vec2 * newPos = new Vec2(_unit->getPosition()->x + 1.0f, _unit->getPosition()->y);
		Undoer->AddCommand(new MoveCommand(_unit, newPos));
	};
	if (_event.key.keysym.sym == SDLK_d) {
		//float newX = _unit->getX + 1.0f;
		Vec2 * newPos = new Vec2(_unit->getPosition()->x - 1.0f, _unit->getPosition()->y);
		Undoer->AddCommand(new MoveCommand(_unit, newPos));
	};
	if (_event.key.keysym.sym == SDLK_z) {
		if (Undoer->hasActions)
			Undoer->UndoCommand();
	}
}

ActionManager::ActionManager() {
	Undoer = new UndoManager();
}


ActionManager::~ActionManager() {
}
