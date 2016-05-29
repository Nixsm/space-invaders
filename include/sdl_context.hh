#ifndef SDL_CONTEXT_HH
#define SDL_CONTEXT_HH

#include "context.hh"

class SDLContext: public Context {
public:
    SDLContext();
    virtual std::shared_ptr<Window> createWindow(Math::Point2D size, std::string winName);
    virtual std::shared_ptr<EventHandler> createEventHandler();
    
};

#endif //SDL_CONTEXT_HH