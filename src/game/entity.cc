#include "game/entity.hh"

Entity::Entity(Math::Point2D pos, std::shared_ptr<Image> image)
:_pos(pos), _image(image)
{
    
}

void Entity::draw() {
    _image->draw(_pos);
}

void Entity::moveTo(Math::Point2D pos) {
    
}

void Entity::moveUp(double velocity) {
    
}

void Entity::moveDown(double velocity) {
    
}