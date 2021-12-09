#ifndef ADAPTER_H
#define ADAPTER_H
#include <vector>
#include <memory>
#include <utility>
#include "ncurseCon.h"
#include <ncurses.h>
#include "../common/point.h"

using namespace std;
namespace AGE{
    class Point;

    namespace Ncurses{
        class Window;
        void setInputTimeout(int timeout);
        void init_window();
        void destroy();


        class Window{
            private:
                WINDOW *_win;
                int _height;
                int _width;
                Point position;

            public:
                Window(int height, int width,int start_x,int start_y);
                ~Window(){}
                WINDOW *getWin() const;
                Point currPoint();
                int width();
                int height();

                void print(std::string s, int x, int y);
                void print(const char* s, int x, int y);
                void showBorder();
                void moveTo(int x, int y);
                void refresh(); // refresh this window
                
                void erase(); // clears this window screen
                void clear(); // clears this window screen (hard clear)
                
                void print();
                    //virtual void updateView();
                
            };
    }
}
#endif