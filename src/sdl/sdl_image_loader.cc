#include "sdl/sdl_image_loader.hh"
#include "sdl/sdl_window.hh"
#include "sdl/sdl_image.hh"

#include <SDL.h>
#include <SDL_image.h>

SDLImageLoader::SDLImageLoader(std::shared_ptr<Window> window)
:ImageLoader(window)
{
    IMG_Init(IMG_INIT_PNG);
}

std::shared_ptr<Image> SDLImageLoader::loadImage(std::string path) {
    auto sdlWindow = std::dynamic_pointer_cast<SDLWindow>(_window);
    
    SDL_Renderer* renderer = sdlWindow->getRenderer();
    
    SDL_Surface* image = IMG_Load(path.c_str());
    
    if (!image) {
        // do something with errors here
        std::cout << "Could not load image " << SDL_GetError() << std::endl;
    }
    
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, image);
    Math::Point2D size(image->w, image->h);
    
    SDL_FreeSurface(image);
    
    return std::make_shared<SDLImage>(size, renderer, texture);
}