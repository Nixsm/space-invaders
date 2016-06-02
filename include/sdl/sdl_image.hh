#ifndef SDL_IMAGE_HH
#define SDL_IMAGE_HH

#include "image.hh"
#include <SDL.h>

class SDLImage: public Image {
public:
    SDLImage(Math::Point2D size, SDL_Renderer* renderer, SDL_Texture* texture);
    virtual void draw(Math::Point2D pos);
    
private:
    // DOES THE RENDERING MAGIC
    SDL_Renderer* _renderer;
    SDL_Texture* _texture;
    Math::Point2D _size;
};

#endif //SDL_IMAGE_HH