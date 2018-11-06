#include "Scene0.h"
#include <iostream>


Scene0::Scene0(SDL_Window* sdlWindow_, SDL_Renderer * renderer_){
	window = sdlWindow_;
	renderer = renderer_;
	elapsedTime = 0.0f;
}

Scene0::~Scene0(){
}

bool Scene0::OnCreate() {
	int w, h;
	SDL_GetWindowSize(window,&w,&h);

	rect = new SDL_Rect;
	rect->w = 100;
	rect->h = 100;
	rect->x = (w / 2) - 50;
	rect->y = (h / 2) - 50;

	if (rect == nullptr) {
		OnDestroy();
		return false;
	}

	return true;
}

void Scene0::OnDestroy() {
	if (window) delete window;
	if (renderer) delete renderer;
	if (rect) delete rect;
}

void Scene0::HandleEvents(SDL_Event event) {

	//example event types
	if (event.type == SDL_KEYDOWN) {
		if (event.key.keysym.sym == SDLK_KP_ENTER) {
			std::cout << "User pressed Enter" << std::endl;
		}
	}

	if (event.type == SDL_MOUSEBUTTONDOWN) {
		std::cout << "User clicked mouse button" << std::endl;
	}
}

void Scene0::Update(const float time) {
	//keeps track of how much time has passed
	//this isn't being used yet, but it's there just in case
	elapsedTime += time;

}

void Scene0::Render() {
	//set background to white
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	//fill background
	SDL_RenderClear(renderer);

	//set colour, then draw rect with that colour
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderFillRect(renderer, rect);


	//present all above changes
	SDL_RenderPresent(renderer);
}