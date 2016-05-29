#ifndef IMAGE_HH
#define IMAGE_HH

#include "config.hh"

class Image {
public:
    Image() { }
    virtual void draw(Math::Point2D pos) = 0;
};

#endif //IMAGE_HH