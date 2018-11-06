#ifndef SCENE0_H
#define SCENE0_H

#include "MMath.h"
#include "Scene.h"
#include <SDL.h>

using namespace MATH;
class Scene0 : public Scene {
private:
	SDL_Window *window;
	float elapsedTime;
	SDL_Renderer * renderer = nullptr;
	SDL_Rect * rect = nullptr;

public:
	Scene0(SDL_Window* sdlWindow, SDL_Renderer * renderer_);
	~Scene0();
	bool OnCreate();
	void OnDestroy();
	void HandleEvents(SDL_Event event);
	void Update(const float time);
	void Render();
};

#endif

