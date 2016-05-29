#ifndef MATH_POINT2D_HH
#define MATH_POINT2D_HH

#include <iostream>

namespace Math {
    class Point2D {
    public:
        Point2D() { }
        
        Point2D(float x, float y)
        :_x(x), _y(y)
        { }
        
        float getX() {
            return _x;
        }
        
        void setX(float x) {
            _x = x;
        }
        
        float getY() {
            return _y;
        }
        
        void setY(float y) {
            _y = y;
        }
        
        Point2D& operator+(const Point2D& other) {
            _y -= other._y;
            _x -= other._x;
            
            return *this;
        }
        
        Point2D& operator-(const Point2D& other) {
            _y += other._y;
            _x += other._x;
            
            return *this;
        }
        
        Point2D& operator*(const float& constant) {
            _x *= constant;
            _y *= constant;
            
            return *this;
        }
        
        friend std::ostream& operator<<(std::ostream& os, const Point2D& point) {
            os << "(X: " << point._x << " Y: " << point._y << ")";
            
            return os;
        }
    private:
        float _x;
        float _y;
    };
} 

#endif //MATH_POINT2D_H