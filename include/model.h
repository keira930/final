#ifndef MODEL_H
#define MODEL_H
#include "view.h"
#include <deque>
#include <vector>
#include <iostream>
#include "object.h"
#include "controller.h"
#include <memory>
using namespace std;

class Model{
    protected:unique_ptr<Controller> control;
   // unique_ptr<Object> (new Object()) player;
    protected:vector<unique_ptr<View>> view;
   // unique_ptr<Object> player;
   // deque<unique_ptr<Object>>  NPC;

    public:
    //update a single view
        void updateView(float _x, float _y, float _z,State _state);
        void displayView();
        Model(){}
};

class ObjectModel: public Model{
    
};

class BoardModel: public Model{

};
#endif
