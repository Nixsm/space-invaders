#ifndef SDL_IMAGE_LOADER_HH
#define SDL_IMAGE_LOADER_HH

#include "image_loader.hh"

class SDLImageLoader: public ImageLoader {
public:
    SDLImageLoader(std::shared_ptr<Window> window);
    virtual std::shared_ptr<Image> loadImage(std::string path);
};

#endif //SDL_IMAGE_LOADER_HH