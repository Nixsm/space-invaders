#include "sdl_window.hh"
#include <SDL.h>
#include <SDL_image.h>

SDLWindow::SDLWindow(Math::Point2D size, std::string name)
    :Window(size, name)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    IMG_Init(IMG_INIT_PNG);

    _window = SDL_CreateWindow(_winName.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, _size.getX(), _size.getY(), 0);
    
    if (_window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
    }
    
    _renderer = SDL_CreateRenderer(_window, -1, 0);
//    SDL_Surface* image = IMG_Load("spaceship.png");
//    if (image == NULL) {
//        std::cout << "Could not load image " << SDL_GetError() << std::endl;
//    }
//    SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, image);
//    
//    SDL_Rect rect = {0, 0, 64, 64};
//    SDL_RenderCopy(renderer, texture, NULL, &rect);
//    SDL_RenderPresent(renderer);
//    
//    SDL_Rect rect2 = {64, 64, 64, 64};
//    SDL_RenderCopy(renderer, texture, NULL, &rect2);
//    SDL_RenderPresent(renderer);
}

SDLWindow::~SDLWindow() {
    Window::~Window();
    SDL_DestroyRenderer(_renderer);
    SDL_DestroyWindow(_window);
}

void SDLWindow::update() {
    // Window update here
    SDL_RenderPresent(_renderer);
}

SDL_Renderer* SDLWindow::getRenderer() {
    return _renderer;
}