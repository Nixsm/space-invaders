#ifndef SDL_WINDOW_HH
#define SDL_WINDOW_HH

#include "window.hh"
#include <SDL.h>

class SDLWindow: public Window {
public:
    SDLWindow(Math::Point2D size, std::string name);
    virtual ~SDLWindow();
    virtual void update();
    
    SDL_Renderer* getRenderer();
    
private:
    SDL_Renderer* _renderer;
    SDL_Window* _window;
};

#endif //SDL_WINDOW_HH
