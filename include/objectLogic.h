#ifndef OBJECTLOGIC_H
#define OBJECTLOGIC_H
#include "object.h"
#include "model.h"
#include <memory>
#include <cstdlib>
#include <utility>
#include "position.h"
#include "bounding.h"
using namespace std;
class ObjectLogic{//inhereit Model?
    //Object Logic is actyally a model contains object with velocity and position
    public:
        unique_ptr<Objects> complete_object;
        unique_ptr<BoundingBox> bounding;
    public:
       // unique_ptr<> getPosition() {return std::move(position);}
       // void setPosition (float x,float y,float z) {position.reset(new Position(x,y,z));}

};

class StaticObject : public ObjectLogic{

};

class MoveObject: public ObjectLogic{
    float velocity;

    private:
        bool collision(unique_ptr<ObjectLogic>& obj);
};

#endif