#include "../include/ncurseCon.h"

nControl::nControl(): instructions{} {
    actions[KEY_UP] = Action::UP;
    actions[KEY_DOWN] = Action::DOWN;
    actions[KEY_LEFT] = Action::LEFT;
    actions[KEY_RIGHT] = Action::RIGHT;
}

nControl::~nControl(){}

int kbhit(void)
{
    int ch = getch();

    if (ch != ERR) {
        ungetch(ch);
        return 1;
    } else {
        return 0;
    }
}

void nControl::addinstruction(int instruction){
    instructions.emplace(instruction);
}

void nControl::popinstruction(){
    instructions.pop();
}

Action nControl::action(){
    Action a;
    noecho();
    keypad(stdscr,true);
    timeout(5000);
    int c;
    while((c=getch())!= ERR){
        addinstruction(c);
    }
    if(!instructions.empty()){
        a=actions[instructions.front()];
        popinstruction();
        return a;
    }
    else{
        return Action::NONE;
    }
    return Action::UP;
}

void nControl::printi(){
    while(!instructions.empty()){
        cout<<actions[instructions.front()]<<endl;
        instructions.pop();
    }
}