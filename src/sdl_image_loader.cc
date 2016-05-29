#include "sdl_image_loader.hh"
#include "sdl_window.hh"
#include <SDL.h>

SDLImageLoader::SDLImageLoader(std::shared_ptr<Window> window)
:ImageLoader(window)
{
    
}

Image SDLImageLoader::loadImage(std::string path) {
    auto sdlWindow = std::dynamic_pointer_cast<SDLWindow>(_window);
    
    SDL_Renderer* renderer = sdlWindow->getRenderer();
}