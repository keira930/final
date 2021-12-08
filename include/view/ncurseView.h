#ifndef NCURSEVIEW_H
#define NCURSEVIEW_H
#include "view.h"
#include <ncurses.h>
#include "objectLogic.h"
#include "point.h"
#include <map>
#include <queue>
#include <iostream>
#include <cstdlib>
#include <memory>
namespace AGE{
    class WindowWithView;
    class nView:public View{
        private:
            WindowWithView& _w1;
   
        public:
        nView(WindowWithView &w1);
            ~nView() override;

            void displayView(Ncurses::Window& w);
        // void updateView(unique_ptr<Point> p, char a);
       
};
}

#endif
