#ifndef OBJECTLOGIC_H
#define OBJECTLOGIC_H
#include "object.h"
#include "model.h"
#include <memory>
#include <cstdlib>
#include <utility>
#include "Point.h"
#include "bounding.h"
using namespace std;
class ObjectLogic{//inhereit Model?
    //Object Logic is actyally a model contains object with velocity and Point
    public:
        unique_ptr<Objects> complete_object;
        unique_ptr<BoundingBox> bounding;
    public:
        float getY();
        float getX();
        char getShape();
       // unique_ptr<> getPoint() {return std::move(Point);}
       // void setPoint (float x,float y,float z) {Point.reset(new Point(x,y,z));}

};

class StaticObject : public ObjectLogic{

};

class MoveObject: public ObjectLogic{
    float velocity;

    private:
        bool collision(unique_ptr<ObjectLogic>& obj);
};

#endif