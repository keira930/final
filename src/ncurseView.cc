#include "../include/ncurseView.h"

void nView::displayView(){   
    keypad(stdscr,TRUE);
    noecho();
    wborder(window,'|','|','-','-','+','+','+','+');
    wprintw(window,"j");
    wrefresh(window);
    getch();

}

//void nView::updateView(Position p, char a){

//}

