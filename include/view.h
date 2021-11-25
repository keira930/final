#ifndef VIEW_H
#define VIEW_H
#include "model.h"
#include <deque>
#include <memory>
#include <iostream>
using namespace std;

class Position{
    public:
        float x;
        float y;
        float z;
    Position(float _x, float _y, float _z):x{_x},y{_y},z{_z}{}
    Position(const Position& p){x=p.x;y=p.y;z=p.z;}
};

class View{//view is a field inside object
   // deque<Model> m_view;
   
    virtual void updateView(float _x, float _y, float _z)=0;
    virtual void displayView() = 0;
};

class ObjectView: public View{

};

class StateView : public View{

};

#endif
