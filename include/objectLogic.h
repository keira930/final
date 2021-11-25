#ifndef OBJECTLOGIC_H
#define OBJECTLOGIC_H
#include "object.h"
#include "model.h"
#include <memory>
#include <cstdlib>
#include <utility>
using namespace std;
class ObjectLogic:public Model{
    //Object Logic is actyally a model contains object with velocity and position
    protected: unique_ptr<Object::Object> complete_object;

};

class StaticObjectLogic : public ObjectLogic{

};

class MoveObjectLogic : public ObjectLogic{
    float velocity;
    private:
        bool collision(unique_ptr<ObjectLogic>& obj);
};

#endif