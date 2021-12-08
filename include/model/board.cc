#include "board.h"
#include "windowModel.h"
#include "../common/point.h"
namespace AGE{
    Board::Board(Point point):WindowModel{point,25,80},
    WindowWithView(point,25,80){}
    

/*void Board::updateView(){
    for(auto it=m_objects.begin();it!=m_objects.end();++it){
        view->updateView(it->getX(),it->getY(),it->getShape());
    }
     for(auto it=s_objects.begin();it!=s_objects.end();++it){
        view->updateView(it->getX(),it->getY(),it->getShape());
    }
   
}*/

   
}
/*void Board::addStaticObject(unique_ptr<StaticObject> s){
    s_objects.emplace_back(s);
}

void Board::addMoveObject(unique_ptr<MoveObject> m){
    m_objects.emplace_back(m);
}*/