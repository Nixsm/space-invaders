#ifndef SDL_EVENT_HANDLER_HH
#define SDL_EVENT_HANDLER_HH

#include "event_handler.hh"

class SDLEventHandler: public EventHandler {
public:
    SDLEventHandler();
    
    virtual Event pollEvent();
    virtual bool hasEvent();
private:
    
};

#endif //SDL_EVENT_HANDLER_HH