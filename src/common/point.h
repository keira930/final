#ifndef POINT_H
#define POINT_H
#include <iostream>
namespace AGE{
    class Point{
        float x, y;
        public: 
            Point(float _x, float _y):x{_x},y{_y}{}
            
            
            void updatePoint(float _x, float _y);
            float getX() const;
            float getY() const;
            
            ~Point()=default;
    };
}
#endif