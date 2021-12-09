#ifndef GAME_WIN_H
#define GAME_WIN_H
#include "windowModel.h"
#include "board.h"
#include <memory>
namespace AGE{

    class Status;
    class Controller;
    class nControl;
    class GameWindow: public WindowWithController{
        private:
            std::unique_ptr<Board> board;
           // Status &status;
        public:
            GameWindow(int fps,Point p,int width, int height);
            GameWindow();
            ~GameWindow();

    };
}
#endif // GAME_WIN_H