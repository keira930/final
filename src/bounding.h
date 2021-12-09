#ifndef BOUNDING_H
#define BOUNDING_H
#include "Point.h"
#include <memory>
#include <utility>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
class BoundingBox{
    unique_ptr<Point> lt;
    unique_ptr<Point> rb;

    public:
        BoundingBox(float x, float y,float z, float x1, float y1, float z1);
        bool contains(const Point&);
        bool intersects(const BoundingBox&);

};
#endif
