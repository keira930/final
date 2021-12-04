#ifndef BOARD_H
#define BOARD_H
#include "window.h"
//#include "object.h"
//#include "objectLogic.h"
#include <cstdlib>
#include <iostream>
#include "ncurseView.h"
using namespace std;

enum State{player=0,NPC,WhiteSpace};


class Board:public Window{//actual game playground, update everytime
   // vector<unique_ptr<StaticObject>> s_objects;
    //vector<unique_ptr<MoveObject>> m_objects;
    vector<ObjectLogic> s_objects;
    vector <ObjectLogic> m_objects;
    //unique_ptr<nView> m_view;
    public:
        Board();
        void updateView();//add each objects' shape inside m_view.final_map
        void displayView();
        void addStaticObject(unique_ptr<StaticObject> s);
        void addMoveObject(unique_ptr<MoveObject> m);
        void destoryMoveObject(unique_ptr<MoveObject> m);
        void destoryStaticObject();
        void updateObject();
        void go();

};
#endif
