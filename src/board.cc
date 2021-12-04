#include "../include/board.h"

Board::Board():Window{make_unique<nView>()},s_objects{},m_objects{}{}

void Board::updateView(){
    for(auto it=m_objects.begin();it!=m_objects.end();++it){
        view->updateView(it->getX(),it->getY(),it->getShape());
    }
     for(auto it=s_objects.begin();it!=s_objects.end();++it){
        view->updateView(it->getX(),it->getY(),it->getShape());
    }
   
}

void Board::displayView(){
    view->displayView();
}

/*void Board::addStaticObject(unique_ptr<StaticObject> s){
    s_objects.emplace_back(s);
}

void Board::addMoveObject(unique_ptr<MoveObject> m){
    m_objects.emplace_back(m);
}*/