#include "../include/board.h"

Board::Board():Window{make_unique<nView>()},s_objects{},m_objects{}{}

//void Board::updateView(){
 //   view->updateView();
//}

/*void Board::addStaticObject(unique_ptr<StaticObject> s){
    s_objects.emplace_back(s);
}

void Board::addMoveObject(unique_ptr<MoveObject> m){
    m_objects.emplace_back(m);
}*/