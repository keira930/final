#include "ncurseAdapt.h"

namespace AGE{
    namespace Ncurses{
        void init_window(){
            initscr();
            noecho();
            refresh();
           
        }
        void setInputTimeout(int timeout){
            //TODO:
        }
        Window::Window(int width, int height, int start_x,int start_y):
        _win{newwin(80, 25, start_y, start_x)},
        _width{width},_height{height},
        position{(float)start_x,(float)start_y}{}

        void Window::print(std::string s, int x, int y)
        {
            print(s.c_str(), x, y);
        }

        void Window::print(const char* s, int x, int y){
            moveTo(x, y);
            wprintw(_win,s);
        }
        void Window::moveTo(int x, int y){
            wmove(_win,x,y);
        }
        void Window::erase() { werase(_win); }

        void Window::showBorder(){ 
           
            wborder(_win,'|','|','-','-','+','+','+','+');
        }
        void Window::refresh(){ wrefresh(_win);}

        

        void Window::clear() { wclear(_win); }
    }

    
}


