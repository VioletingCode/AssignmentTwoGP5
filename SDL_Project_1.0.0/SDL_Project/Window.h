
class Window {
private:
	struct SDL_Window* window;
	struct SDL_Renderer * renderer;
	int width, height;
	
public:
	Window(int width_, int height_ );
	~Window();
	bool OnCreate();
	void OnDestroy();

	inline SDL_Window* GetWindow() { return window; }
	inline SDL_Renderer* GetRenderer() { return renderer; }
};

