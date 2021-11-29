#ifndef BOUNDING_H
#define BOUNDING_H
#include "position.h"
#include <memory>
#include <utility>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class BoundingBox{
    unique_ptr<Position> lt;
    unique_ptr<Position> rb;

    public:
        BoundingBox(float x, float y,float z, float x1, float y1, float z1);
        bool contains(const Position&);
        bool intersects(const BoundingBox&);

};
#endif
