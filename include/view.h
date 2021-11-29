#ifndef VIEW_H
#define VIEW_H
#include "model.h"
#include <deque>
#include <memory>
#include <iostream>
#include <string>
#include "ncurses.h"
using namespace std;


class View{//view is a field inside object
   // deque<Model> m_view;
    public:
        View()=default;
       // virtual void updateView(float _x, float _y, float _z)=0;
        virtual void displayView() = 0;
        virtual ~View()=default;
        //virtual void updateView() =0;
};

class ObjectView: public View{

};

class StateView : public View{
    string status;
    
};

#endif
