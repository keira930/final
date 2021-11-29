#include "../include/bounding.h"

    BoundingBox:: BoundingBox(float x, float y,float z, float x1, float y1, float z1){
            lt=make_unique<Position>(x,y,z);
            rb=make_unique<Position>(x1,y1,z1);
    }

