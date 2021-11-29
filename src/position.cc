#include "../include/position.h"

    Position::Position(float _x, float _y, float _z):x{_x},y{_y},z{_z}{}
    void Position::updatePosition(float _x, float _y, float _z){
        x=x+_x;
        y=y+_y;
        z=z+_z;
    }
    float Position::getX() const{return x;}
    float Position::getY() const{return y;}
    float Position::getZ() const{return z;}