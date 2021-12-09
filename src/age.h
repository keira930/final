#ifndef AGE_H
#define AGE_H
#include <memory>
#include "common/timer.h"
#include "controller/ncurseAdapt.h"

namespace AGE{

    class GameWindow;
    class Age{
        private: 
            Timer<2> timer;
            std::unique_ptr<GameWindow> _main;
            bool stopGame;
        private:
             void gameloop();
        public:
            Age(int fps){
                Ncurses::init_window();
                Point p{0,0};
                _main=make_unique<GameWindow>(fps,p,25,80);
                stopGame=true;

            }

            ~Age(){
                Ncurses::destroy();
            }
            void _init_curses(int width, int height){

            }
            void go(){ gameloop();}
               
            //main loop
        
        private:
           // void gameloop();
            virtual void setup() = 0;//game setup
            
    };
}
#endif