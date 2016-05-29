#ifndef MATH_POINT2D_HH
#define MATH_POINT2D_HH

#include <iostream>

namespace Math {
    class Point2D {
    public:
        Point2D();
        Point2D(float x, float y);
        float getX();
        void setX(float x);
        float getY();
        void setY(float y);

        Point2D& operator+(const Point2D& other);
        Point2D& operator-(const Point2D& other);
        Point2D& operator*(const float& constant);

        friend std::ostream& operator<<(std::ostream& os, const Point2D& point);

    private:
        float _x;
        float _y;
    };
} 

#endif //MATH_POINT2D_H