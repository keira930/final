#include "gameWindow.h"
#include "board.h"
#include "ncurseCon.h"
namespace AGE{

    GameWindow::GameWindow(int fps,Point point,int width,int height):WindowModel{point,width,height},
    WindowWithController{point,width,height},
    board{std::make_unique<Board> (point)}
    {   
        this->setController(std::make_unique<nControl> (fps,point,20,85));
        
        //board=make_unique<WindowWithView>()
    }
    
}