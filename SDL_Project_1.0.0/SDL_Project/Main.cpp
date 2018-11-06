#include <iostream>
#include <memory>
#include "GameManager.h"
#include "MMath.h"
///#include <SDL.h>
using namespace MATH;

// start with project properties, configuration properties, c/c++, command line add /std:c++latest

int main(int argc, char* args[]) { /// Standard C-style entry point, you need to use it

	// default c++ pointer
	//GameManager *manager = new GameManager();

	// Visual Studio 2015 version introduced in c++ 14
	auto manager = std::unique_ptr<GameManager>(new GameManager());

	bool status = manager->OnCreate();

	if (status == true) {
		manager->Run();
	}
	else if (status == false) {
		std::cerr << "Fatal error occured. Cannot start this program" << std::endl;
	}

	return 0;
}
