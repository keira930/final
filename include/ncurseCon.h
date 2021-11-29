#ifndef NCURSECON_H
#define NCURSECON_H
#include "ncurses.h"
#include "controller.h"
#include <queue>
#include <map>
#include <ctime>

using namespace std;



class nControl:public Controller{
    std::queue<int> instructions;
    std::map<int,Action> actions;
    Action action() override;
    public:
        nControl();
        void addinstruction(int instruction);
        void popinstruction();
        void printi();
        ~nControl();

};
#endif