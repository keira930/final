#ifndef NCURSEVIEW_H
#define NCURSEVIEW_H
#include "view.h"
#include <ncurses.h>
#include "objectLogic.h"
#include "position.h"
#include <map>
#include <iostream>
#include <cstdlib>
class nView:public View{
    WINDOW *window;
    map <unique_ptr<Position>,char> mapping;
    public:
        nView():View{},mapping{}{
            window=newwin(25,80,0,0);
            refresh();
        }
        void displayView() override;
       // void updateView() override;
       // void updateView(unique_ptr<Position> p, char a);
       
};
#endif
