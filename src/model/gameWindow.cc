#include "gameWindow.h"

#include "ncurseCon.h"
namespace AGE{

    GameWindow::GameWindow(int fps,Point point,int width,int height):
    WindowModel{point,width,height},
    WindowWithController{point,width,height},
    board{std::make_unique<Board> (point)}
    {   
        this->setController(std::make_unique<nControl> (fps));
        
        //board=make_unique<WindowWithView>()
    }

    GameWindow::~GameWindow(){}
    
}