#ifndef ENTITY_HH
#define ENTITY_HH

#include "config.hh"
#include "image.hh"

class Entity {
public:
    Entity(Math::Point2D pos, std::shared_ptr<Image> image);
    void draw();
    void moveTo(Math::Point2D pos);
    void moveUp(double velocity);
    void moveDown(double velocity);
    
private:
    Math::Point2D _pos;
    std::shared_ptr<Image> _image;
};

#endif //ENTITY_HH