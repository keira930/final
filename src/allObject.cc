#include "../include/allObject.h"

void allObject::addPlayground(){
    for(int i = 0; i < all_objects.size(); i++){
        int x = all_objects.front().getX();
         int y = all_objects.front().getY();
         char shape;//each should have a typical char array, e.g. rec and bitmap to mimic its shape
         playground[x][y]=shape;

    }
}

void allObject::addObject(ObjectLogic o){
    all_objects.emplace_back(o);
}