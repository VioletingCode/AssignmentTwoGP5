#pragma once
#include "HFiles.h"
#include <stack>

class UndoManager
{
protected:
	//Store actions revieved from ActionManager
	stack<unique_ptr<Command>> actionList;
public:
	//Recieves a pointer to an action and add it to the action list
	void AddCommand(unique_ptr<Command> _action);
	//Tells the command at the top of the stack to run its Undo method
	void UndoCommand();
	//Says if the action list has actions
	bool hasActions();
	UndoManager();
	~UndoManager();
};

