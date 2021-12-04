#ifndef ALLOBJECT_H
#define ALLOBJECT_H
#include "view.h"
#include <vector>
#include <queue>
#include <iostream>
#include <utility>
#include "objectLogic.h"
using namespace std;
class allObject{
   vector <ObjectLogic> all_objects;
   
   char playground[25][80];

    public:
        allObject()=default;
        void addObject(ObjectLogic o);
        void deleteObject(ObjectLogic o);
        void addPlayground();
    
};
#endif