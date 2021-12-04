#ifndef OBJECT_H
#define OBJECT_H
#include <memory>
#include <cstdlib>
#include <utility>
#include <vector>
#include "position.h"
using namespace std;

class Objects{
    protected:
        string type;
        unique_ptr<Position> position;
        float height;
        char shape[];
        Objects(unique_ptr<Position> &&p):position{std::forward<unique_ptr<Position>>(p)}{}
    public:
        unique_ptr<Position> getPosition() {return std::move(position);}
        void setPosition (float x,float y,float z) {position.reset(new Position(x,y,z));}
        virtual ~Objects() {}
};

class SingleObject: public Objects{
    private:
        char shape;
    public:
        SingleObject(char s,float x,float y,float z):Objects(make_unique<Position>(x,y,z))
        {   
            type="single";
            shape = s;
        }
        char getShape() {return shape;}
};

class BitmapObject : public Objects{
    
};

class RectangleObject : public Objects{
    private:
        float width,height;//position is left top
        unique_ptr<Position> rb;//right bottom
    public:
        RectangleObject(float w, float h, float x,float y,float z):
            Objects(make_unique<Position>(x,y,z)){
                type="rec";
                width=w;
                height=h;
                rb=make_unique<Position>(x+w,y-h,z);
            }

};
#endif