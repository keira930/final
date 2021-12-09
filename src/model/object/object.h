#ifndef OBJECT_H
#define OBJECT_H
#include <memory>
#include <cstdlib>
#include <utility>
#include <vector>
#include "Point.h"
using namespace std;

class Objects{
    protected:
        string type;
        unique_ptr<Point> Point;
        float height;
        char shape[];
        Objects(unique_ptr<Point> &&p):Point{std::forward<unique_ptr<Point>>(p)}{}
    public:
        unique_ptr<Point> getPoint() {return std::move(Point);}
        void setPoint (float x,float y,float z) {Point.reset(new Point(x,y,z));}
        virtual ~Objects() {}
};

class SingleObject: public Objects{
    private:
        char shape;
    public:
        SingleObject(char s,float x,float y,float z):Objects(make_unique<Point>(x,y,z))
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
        float width,height;//Point is left top
        unique_ptr<Point> rb;//right bottom
    public:
        RectangleObject(float w, float h, float x,float y,float z):
            Objects(make_unique<Point>(x,y,z)){
                type="rec";
                width=w;
                height=h;
                rb=make_unique<Point>(x+w,y-h,z);
            }

};
#endif