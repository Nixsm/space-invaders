#include "sdl/sdl_event_handler.hh"
#include <SDL_events.h>

#include <iostream>

SDLEventHandler::SDLEventHandler() {
    
}

Event SDLEventHandler::pollEvent() {
    return _event;
}

bool SDLEventHandler::hasEvent() {
    SDL_Event event;
    
    bool hasEvent = SDL_PollEvent(&event);
    
    switch(event.type) {
        case SDL_KEYDOWN:
            switch (event.key.keysym.scancode) {
                case SDL_SCANCODE_RIGHT:
                    _event = std::make_pair(KS_RIGHT, KS_KEY_DOWN);
                    break;
                case SDL_SCANCODE_LEFT:
                    _event = std::make_pair(KS_LEFT, KS_KEY_DOWN);
                    break;
                case SDL_SCANCODE_UP:
                    _event = std::make_pair(KS_UP, KS_KEY_DOWN);
                    break;
                case SDL_SCANCODE_DOWN:
                    _event = std::make_pair(KS_DOWN, KS_KEY_DOWN);
                    break;
                case SDL_SCANCODE_SPACE:
                    _event = std::make_pair(KS_SPACE, KS_KEY_DOWN);
                    break;
                default:
                    break;
            }
            break;
        case SDL_QUIT:
            _event = std::make_pair(KS_QUIT, KS_GUI_BUTTON);
            break;
    }
    
    return hasEvent;
}