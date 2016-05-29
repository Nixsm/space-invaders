#include "sdl_window.hh"
#include <SDL.h>

SDLWindow::SDLWindow(Math::Point2D size, std::string name)
    :Window(size, name)
{
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* window = SDL_CreateWindow(_winName.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, _size.getX(), _size.getY(), 0);
    if (window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
    }
}

SDLWindow::~SDLWindow() {
    Window::~Window();
}

void SDLWindow::update() {
    // Window update here
}