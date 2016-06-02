#ifndef IMAGE_LOADER_HH
#define IMAGE_LOADER_HH

#include "image.hh"
#include "window.hh"

class ImageLoader {
public:
    ImageLoader(std::shared_ptr<Window> window)
    :_window(window)
    { }
    virtual std::shared_ptr<Image> loadImage(std::string path) = 0;
    
protected:
    std::shared_ptr<Window> _window;
};

#endif //IMAGE_LOADER_HH