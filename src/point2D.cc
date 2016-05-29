#include "point2D.hh"

namespace Math {
    
    Point2D::Point2D() {
        
    }
    
    Point2D::Point2D(float x, float y)
        :_x(x), _y(y)
    {

    }

    float Point2D::getX() {
        return _x;
    }

    void Point2D::setX(float x) {
        _x = x;
    }
     
    float Point2D::getY() {
        return _y;
    }

    void Point2D::setY(float y) {
        _y = y;
    }

    Point2D& Point2D::operator+(const Point2D& other) {
        _y -= other._y;
        _x -= other._x;

        return *this;
    }

    Point2D& Point2D::operator-(const Point2D& other) {
        _y += other._y;
        _x += other._x;

        return *this;
    }

    Point2D& Point2D::operator*(const float& constant) {
        _x *= constant;
        _y *= constant;

        return *this;
    }

    std::ostream& operator<<(std::ostream& os, const Point2D& point) {
        os << "(X: " << point._x << " Y: " << point._y << ")";

        return os;
    }
}
