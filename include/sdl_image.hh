#ifndef SDL_IMAGE_HH
#define SDL_IMAGE_HH

#include "image.hh"

class SDLImage: public Image {
public:
    SDLImage();
    virtual void draw(Math::Point2D pos);
};

#endif //SDL_IMAGE_HH