#ifndef NCURSECON_H
#define NCURSECON_H
#include <ncurses.h>
#include "controller.h"
#include <queue>
#include <map>
#include <ctime>
#include "ncurseAdapt.h"
using namespace std;
namespace AGE{
    
    class nControl:public Controller{
    
    public:
        nControl(int fps):Controller(fps){
            Ncurses::setInputTimeout(fps);
        }
        ~nControl(){}
        void initWindow();

    private:
        int _input() const override{ return getch();}

    };
}

#endif