#ifndef OBJECT_H
#define OBJECT_H
#include <deque>
#include <cstdlib>
#include <string>
#include <iostream>
#include <memory>
#include <utility>
#include "model.h"
using namespace std;
class Position{
    public: float x, y, z;
    public: Position(float _x, float _y, float _z):x{_x},y{_y},z{_z}{}
    ~Position()=default;
};
class Object: public Model{//user define
    protected: 
        unique_ptr<Position::Position> position;
    Object(unique_ptr<Position::Position>&& p):
        position{std::forward<unique_ptr<Position::Position>>(p)}{}
    public: 
        unique_ptr<Position::Position> getPosition() {return std::move(position);}
        unique_ptr<Position::Position> setPosition (const Position);
};

class SingelChar: public Object{
    char s;

};

class Rectangle: public Object{
    float width, length;

};
#endif