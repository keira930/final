#ifndef BOARD_H
#define BOARD_H

//#include "object.h"
//#include "objectLogic.h"
#include <cstdlib>
#include <iostream>
#include "../view/ncurseView.h"
#include "windowModel.h"
#include "../common/point.h"
using namespace std;

enum State{player=0,NPC,WhiteSpace};

namespace AGE{
    class Point;
    class WindowModel;
    class WindowWithView;
    class Board:public WindowWithView{//actual game playground, update everytime

        //unique_ptr<nView> m_view;
        public:
            Board(Point point):WindowModel{point,25,80},
    WindowWithView(point,25,80){}
            /*void updateView();//add each objects' shape inside m_view.final_map
            void displayView();
            void addStaticObject(unique_ptr<StaticObject> s);
            void addMoveObject(unique_ptr<MoveObject> m);
            void destoryMoveObject(unique_ptr<MoveObject> m);
            void destoryStaticObject();
            void updateObject();
            void go();*/
            ~Board() override {}

    };
}
#endif
