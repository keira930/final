#include "ncurseAdapt.h"

namespace AGE{
    namespace Ncurses{
        void init_window(){
            initscr();
            noecho();
            refresh();
           
        }

        Window::Window(int width, int height, int start_x,int start_y):
        _win{newwin(width, height, start_y, start_x)},_width{width},_height{height},
        position{start_x,start_y}{}

        void Window::print(std::string s, int x, int y)
        {
            print(s.c_str(), x, y);
        }

        void Window::print(const char* s, int x, int y){
            moveTo(x, y);
            wprintw(_win,s);
        }

        void Window::erase() { werase(_win); }

        void Window::showBorder(){ 
           
            wborder(_win,'|','|','-','-','+','+','+','+');
        }

        

        void Window::clear() { wclear(_win); }
    }

    
}


