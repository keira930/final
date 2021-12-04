#ifndef NCURSEVIEW_H
#define NCURSEVIEW_H
#include "view.h"
#include <ncurses.h>
#include "objectLogic.h"
#include "position.h"
#include <map>
#include <queue>
#include <iostream>
#include <cstdlib>
class nView:public View{
    WINDOW *window;
    queue<map <Position,char>> mapping;//height from low to high 
    map <Position,char> finalMap;
    public:
        nView():View{},mapping{}{
            window=newwin(25,80,0,0);
            refresh();
        }
        void displayView() override;
        void addmapping(map<Position,char>);
        void updateView(int x, int y, char s) override;
       // void updateView(unique_ptr<Position> p, char a);
       
};
#endif
