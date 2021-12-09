#include "ncurseView.h"

#include "../model/windowModel.h"
namespace AGE
{   
    nView::nView(WindowWithView &w1):View{},_w1{w1}{}
    nView::~nView(){}

    void nView::displayView(Ncurses::Window& w){
        
        initscr();
        w.erase();
        w.showBorder();
        getch();
        w.refresh();
       // wborder(w.);
    }
    /*void nView::displayView(){   
        keypad(stdscr,TRUE);
        noecho();
        wborder(window,'|','|','-','-','+','+','+','+');
        wprintw(window,"j");
        wrefresh(window);
        getch();

    }*/
} 


/*void nView::updateView(){
    int s=mapping.size();
    for(int i=0;i<s;i++){
        map<Point,char> temp=mapping.front();
        for(auto it = temp.begin();it != temp.end(); ++it){
           int x = (int)(it->first.getX());
           int y = (int)(it->first.getY());
           char b= temp[it->first];
            mvwaddch(window,y,x,b);
        }
        wrefresh(window);
        mapping.pop();

    }*/


