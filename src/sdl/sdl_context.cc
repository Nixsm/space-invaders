#include "sdl/sdl_context.hh"
#include "sdl/sdl_event_handler.hh"
#include "sdl/sdl_window.hh"

SDLContext::SDLContext() {
    
}

std::shared_ptr<Window> SDLContext::createWindow(Math::Point2D size, std::string winName) {
    return std::make_shared<SDLWindow>(size, winName);
}

std::shared_ptr<EventHandler> SDLContext::createEventHandler() {
    return std::make_shared<SDLEventHandler>();
}

