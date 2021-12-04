#include "../include/ncurseView.h"

void nView::displayView(){   
    keypad(stdscr,TRUE);
    noecho();
    wborder(window,'|','|','-','-','+','+','+','+');
    wprintw(window,"j");
    wrefresh(window);
    getch();

}
void nView::updateView(){
    int s=mapping.size();
    for(int i=0;i<s;i++){
        map<Position,char> temp=mapping.front();
        for(auto it = temp.begin();it != temp.end(); ++it){
           int x = (int)(it->first.getX());
           int y = (int)(it->first.getY());
           char b= temp[it->first];
            mvwaddch(window,y,x,b);
        }
        wrefresh(window);
        mapping.pop();

    }
}

