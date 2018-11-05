#include "UndoManager.h"

void UndoManager::AddCommand(unique_ptr<Command> _action) {
	actionList.push(_action);
}

void UndoManager::UndoCommand() {
	actionList.top()->Undo();
	actionList.pop();
}

bool UndoManager::hasActions() {
	if (actionList.size() < 0)
		return true;
	return false;
}

UndoManager::UndoManager() {
}


UndoManager::~UndoManager() {
}
