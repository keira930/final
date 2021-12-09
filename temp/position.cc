#include "../include/Point.h"

    Point::Point(float _x, float _y, float _z):x{_x},y{_y},z{_z}{}
    void Point::updatePoint(float _x, float _y, float _z){
        x=x+_x;
        y=y+_y;
        z=z+_z;
    }
    float Point::getX() const{return x;}
    float Point::getY() const{return y;}
    float Point::getZ() const{return z;}