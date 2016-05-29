#ifndef SDL_WINDOW_HH
#define SDL_WINDOW_HH

#include "window.hh"

class SDLWindow: public Window {
public:
    SDLWindow(Math::Point2D size, std::string name);
    virtual ~SDLWindow();
    virtual void update();
};

#endif //SDL_WINDOW_HH
