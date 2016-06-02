#include "sdl/sdl_image.hh"

SDLImage::SDLImage(Math::Point2D size, SDL_Renderer* renderer, SDL_Texture* texture)
:_renderer(renderer), _texture(texture), _size(size)
{
    
}

void SDLImage::draw(Math::Point2D pos) {
    // God dammit, SDL why u do dis
    SDL_Rect drawPosition = {static_cast<int>(pos.getX()), static_cast<int>(pos.getY()), static_cast<int>(_size.getX()), static_cast<int>(_size.getY())};
    
    SDL_RenderCopy(_renderer, _texture, nullptr, &drawPosition);
}